
#include "Characters/Enemy/EnemyCharacter.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Data/EStats.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Components/CombatComponent_Enemy.h"
#include "Components/SphereComponent.h"
#include "Components/StatsComponent.h"
#include "Components/StatusEffectsComponent.h"
#include "Components/TraceComponent.h"
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "Perception/PawnSensingComponent.h"


AEnemyCharacter::AEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	StatusEffectsComp = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("Status Effects Component"));
	FireStatusEffectManager = CreateDefaultSubobject<UFireEffectManager>(TEXT("Fire Effects Manager"));
	IceStatusEffectManager = CreateDefaultSubobject<UIceEffectManager>(TEXT("Ice Effects Manager"));
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
	PlayerRef->AddXP(RewardXP);
}


void AEnemyCharacter::ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	StatsComp->OnReduceHealthRequestDelegate.Broadcast(Damage, this, SafeCauser);
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


float AEnemyCharacter::GetCurrentDamage() const
{
	return StatsComp->GetStatValue(EStats::Strength);
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