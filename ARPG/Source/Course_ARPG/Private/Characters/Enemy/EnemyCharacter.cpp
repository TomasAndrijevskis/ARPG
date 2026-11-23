
#include "Characters/Enemy/EnemyCharacter.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Data/EStats.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/DamageTypes.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Components/CombatComponent_Enemy.h"
#include "Components/LevelingComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StatsComponent.h"
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "Data/Characters/EnemyCharacterConfiguration.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/PawnSensingComponent.h"
#include "UI/EnemyHealthBar.h"


AEnemyCharacter::AEnemyCharacter()
{
	FireStatusEffectManager = CreateDefaultSubobject<UFireEffectManager>(TEXT("Fire Effects Manager"));
	IceStatusEffectManager = CreateDefaultSubobject<UIceEffectManager>(TEXT("Ice Effects Manager"));
	PoisonStatusEffectManager = CreateDefaultSubobject<UPoisonEffectManager>(TEXT("Poison Effects Manager"));
	BlockingSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Blocking Sphere"));
	BlockingSphere->SetupAttachment(GetRootComponent());
}


void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemyCharacter::SetupAI, .1f, false);

	if (AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerCharacter(this, 0)))
	{
		PC->OnPlayerDiedDelegate.AddUObject(this, &AEnemyCharacter::HandlePlayerDeath);
	}
	StatsComp->OnZeroHealthDelegate.AddUObject(this, &AEnemyCharacter::HandleDeath);
	OnTakeAnyDamage.AddDynamic(this, &AEnemyCharacter::ReceiveDamage);
	SetResistances();
	if (BlockingSphere)
	{
		BlockingSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
		BlockingSphere->SetCollisionResponseToChannel(CollisionChannel, ECR_Block);
	}
}

void AEnemyCharacter::LoadConfigData()
{
	Super::LoadConfigData();
	if (!CharacterData) return;
	if (!CharacterData->DeathAnim.IsNull()) DeathAnimMontage = CharacterData->DeathAnim.LoadSynchronous();
	if (CharacterData->DamageType) BaseAttackDamageType = CharacterData->DamageType;
	if (CharacterData->CollisionChannel) CollisionChannel = CharacterData->CollisionChannel;
	if (CharacterData->BehaviorTree) BehaviorTree = CharacterData->BehaviorTree;
	if (CharacterData->HealthBarWidgetClass) HealthBarWidgetClass = CharacterData->HealthBarWidgetClass;
	InitialState = CharacterData->InitialState;
	RewardXP = CharacterData->RewardXP;
	bRandomAttacks = CharacterData->bRandomAttacks;
}


void AEnemyCharacter::SetupAI()
{
	ControllerRef = GetController<AAIController>();
	if (ControllerRef)
	{
		ControllerRef->RunBehaviorTree(BehaviorTree);
		BlackboardComp = ControllerRef->GetBlackboardComponent();
		BlackboardComp->SetValueAsVector(TEXT("StartLocation"), GetActorLocation());
		BlackboardComp->SetValueAsRotator(TEXT("StartRotation"), GetActorRotation());
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), static_cast<uint8>(InitialState));
		if (InitialState == EEnemyStates::Patrol)
			BlackboardComp->SetValueAsBool(TEXT("IsPatrolling"), true);
	}
}


void AEnemyCharacter::HandlePlayerDeath()
{
	if (ControllerRef)
		ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), static_cast<uint8>(EEnemyStates::GameOver));
}


void AEnemyCharacter::HandleDeath()
{
	if (!DeathAnimMontage) return;
	float DeathAnimDuration = PlayAnimMontage(DeathAnimMontage);
	if (ControllerRef) ControllerRef->GetBrainComponent()->StopLogic("Defeated");
	FindComponentByClass<UCapsuleComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	IMainPlayer* MainPlayerInterfaceRef = GetWorld()->GetFirstPlayerController()->GetPawn<IMainPlayer>();
	if (!MainPlayerInterfaceRef) return;
	MainPlayerInterfaceRef->EndLockonWithActor(this);
	GiveRewardXP();
	OnEnemyDiedDelegate.Broadcast(this);
	FTimerHandle DestroyTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, this, &AEnemyCharacter::FinishedDeathAnim, DeathAnimDuration, false);
}


void AEnemyCharacter::FinishedDeathAnim()
{
	Destroy();
}


void AEnemyCharacter::GiveRewardXP()
{
	if (AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerCharacter(this,0)))
	{
		if (ULevelingComponent* LevelComp = PlayerRef->GetComponentByClass<ULevelingComponent>())
		{
			LevelComp->AddExperience(RewardXP);
		}
	}
}


void AEnemyCharacter::ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	if (Cast<AEnemyCharacter>(SafeCauser)) return;
	float FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage,GetResistanceStatValue(DamageType));
	UE_LOG(LogTemp, Warning, TEXT("Enemy received: %f"), FinalDamage);
	StatsComp->OnReduceHealthRequestDelegate.Broadcast(FinalDamage, this, SafeCauser);
}


void AEnemyCharacter::Attack()
{
	if (bRandomAttacks) CombatComp->RandomAttack();
	else CombatComp->ComboAttack();
}


void AEnemyCharacter::SetResistances()
{
	FireStatusEffectManager->OnResistanceChangedDelegate.Broadcast(StatsComp->GetStatValue(EStats::FireDmgResistance));
	IceStatusEffectManager->OnResistanceChangedDelegate.Broadcast(StatsComp->GetStatValue(EStats::IceDmgResistance));
	PoisonStatusEffectManager->OnResistanceChangedDelegate.Broadcast(StatsComp->GetStatValue(EStats::PoisonDmgResistance));
}


float AEnemyCharacter::GetSightRadius() const
{
	UPawnSensingComponent* SensingComp = FindComponentByClass<UPawnSensingComponent>();
	if (SensingComp) return SensingComp->SightRadius;
	return 0;
}


float AEnemyCharacter::GetResistanceStatValue(const UDamageType* DamageType)
{
	if (!DamageType) return 0;
	const UDamageTypeBase* DT = Cast<UDamageTypeBase>(DamageType);
	if (!DT) return 0;
	return StatsComp->GetStatValue(DT->GetResistanceStat());
}


void AEnemyCharacter::SetInitialState(const EEnemyStates NewState){InitialState = NewState;}

void AEnemyCharacter::SetCanApplyDamage(bool NewCanApplyDamage){bCanApplyDamage = NewCanApplyDamage;}

UBlackboardComponent* AEnemyCharacter::GetBlackboardComp() const{return BlackboardComp;}

EEnemyStates AEnemyCharacter::GetInitialState() const{return InitialState;}

bool AEnemyCharacter::CanApplyDamage() const{return bCanApplyDamage;}

TSubclassOf<UDamageTypeBase> AEnemyCharacter::GetDamageType() const{return BaseAttackDamageType;}

float AEnemyCharacter::GetPhysicalDamage(){return StatsComp->GetStatValue(EStats::PhysicalStrength);}

float AEnemyCharacter::GetMagicalDamage() const{return StatsComp->GetStatValue(EStats::MagicalStrength);}

float AEnemyCharacter::GetAnimDuration() const{return CombatComp->AnimDuration;}

float AEnemyCharacter::GetMeleeRange() const{return StatsComp->GetStatValue(EStats::MeleeRange);}

float AEnemyCharacter::GetRangeDistance() const{return StatsComp->GetStatValue(EStats::RangeDistance);}

float AEnemyCharacter::GetElementalDamageModificator() const{return StatsComp->GetStatValue(EStats::ElementalDamageModificator);}

AAIController* AEnemyCharacter::GetAIController() const{return ControllerRef;}
