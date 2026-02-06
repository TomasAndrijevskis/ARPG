
#include "Characters/Enemy/EnemyCharacter.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Data/EStats.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/DamageTypes.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Components/CombatComponent_Enemy.h"
#include "Components/SphereComponent.h"
#include "Components/StatsComponent.h"
#include "Components/TraceComponent.h"
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "Perception/PawnSensingComponent.h"


AEnemyCharacter::AEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
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
	PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>();
	if (PlayerRef) PlayerRef->StatsComp->OnZeroHealthDelegate.AddUObject(this, &AEnemyCharacter::HandlePlayerDeath);
	
	StatsComp->OnZeroHealthDelegate.AddUObject(this, &AEnemyCharacter::HandleDeath);
	OnTakeAnyDamage.AddDynamic(this, &AEnemyCharacter::ReceiveDamage);

	if (BlockingSphere)
	{
		BlockingSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
		BlockingSphere->SetCollisionResponseToChannel(CollisionChannel, ECR_Block);
	}
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
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), InitialState);
		if (InitialState == EEnemyStates::Patrol)
			BlackboardComp->SetValueAsBool(TEXT("IsPatrolling"), true);
	}
}


void AEnemyCharacter::HandlePlayerDeath()
{
	if (ControllerRef)
		ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GameOver);
}


void AEnemyCharacter::HandleDeath()
{
	if (DeathAnim == nullptr) return;
	float DeathAnimDuration = PlayAnimMontage(DeathAnim);
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
	if (!PlayerRef) return;
	PlayerRef->AddExperience(RewardXP);
}


void AEnemyCharacter::ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	float FinalDamage = Damage;
	if (DamageType && DamageType->IsA(UPhysicalDamageType::StaticClass()))
		FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage, SafeCauser, StatsComp->GetStatValue(EStats::PhysDmgResistance));
	else if (DamageType && DamageType->IsA(UMagicalDamageType::StaticClass()))
		FinalDamage = StatsComp->CalculateFinalReceivedDamage(Damage, SafeCauser,  StatsComp->GetStatValue(EStats::MagDmgResistance));
	StatsComp->OnReduceHealthRequestDelegate.Broadcast(FinalDamage, this, SafeCauser);
}


void AEnemyCharacter::Attack()
{
	if (bRandomAttacks) CombatComp->RandomAttack();
	else CombatComp->ComboAttack();
}


void AEnemyCharacter::ResetAttack()
{
	TraceComp->HandleResetAttack();
}


TSubclassOf<UDamageType> AEnemyCharacter::GetDamageType() const
{
	return UPhysicalDamageType::StaticClass();
}


float AEnemyCharacter::GetPhysicalDamage() const
{
	return StatsComp->GetStatValue(EStats::PhysicalStrength);
}


float AEnemyCharacter::GetMagicalDamage() const
{
	return StatsComp->GetStatValue(EStats::MagicalStrength);
}


float AEnemyCharacter::GetAnimDuration() const
{
	return CombatComp->AnimDuration;
}


float AEnemyCharacter::GetMeleeRange() const
{
	return StatsComp->GetStatValue(EStats::MeleeRange);
}


float AEnemyCharacter::GetRangeDistance() const
{
	return StatsComp->GetStatValue(EStats::RangeDistance);
}


AAIController* AEnemyCharacter::GetAIController() const
{
	return ControllerRef;
}


float AEnemyCharacter::GetSightRadius() const
{
	UPawnSensingComponent* SensingComp = FindComponentByClass<UPawnSensingComponent>();
	if (SensingComp) return SensingComp->SightRadius;
	return 0;
}


UBlackboardComponent* AEnemyCharacter::GetBlackboardComp() const
{
	return BlackboardComp;
}


TEnumAsByte<EEnemyStates> AEnemyCharacter::GetInitialState() const
{
	return InitialState;
}


void AEnemyCharacter::SetInitialState(const TEnumAsByte<EEnemyStates> NewState)
{
	InitialState = NewState;
}