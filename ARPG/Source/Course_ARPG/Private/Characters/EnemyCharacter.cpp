
#include "Characters/EnemyCharacter.h"
#include "Characters/StatsComponent.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Combat/StatusEffectsComponent.h"
#include "Components/SphereComponent.h"
#include "Perception/PawnSensingComponent.h"

AEnemyCharacter::AEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	StatusEffectsComp = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("Status Effects Component"));
	BlockingSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Blocking Sphere"));
	BlockingSphere->SetupAttachment(GetRootComponent());
}


void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemyCharacter::SetupAI, .1f, false);
	//из-за этой строки функция HandlePlayerDeath сработает когда у игрок умрет(OnZeroHealthDelegate) - таким образом можно триггерить функции через не связанные между собой классы
	PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>();
	if (PlayerRef)
	{
		PlayerRef->StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter::HandlePlayerDeath);
	}
	
	StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter::HandleDeath);
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
		{
			BlackboardComp->SetValueAsBool(TEXT("IsPatrolling"), true);
		}
	}
}


void AEnemyCharacter::HandlePlayerDeath()
{
	if (ControllerRef)
	{
		ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GameOver);
	}
}


void AEnemyCharacter::HandleDeath()
{
	if (DeathAnim == nullptr)
	{
		return;
	}
	float DeathAnimDuration = PlayAnimMontage(DeathAnim);
	if (ControllerRef)
	{
		ControllerRef->GetBrainComponent()->StopLogic("Defeated");
	}
	FindComponentByClass<UCapsuleComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	IMainPlayer* MainPlayerInterfaceRef = GetWorld()->GetFirstPlayerController()->GetPawn<IMainPlayer>();
	if (!MainPlayerInterfaceRef)
	{
		return;
	}
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
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->LevelComp->AddXP(RewardXP);
}


void AEnemyCharacter::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	UE_LOG(LogTemp, Error, TEXT("Base|Received Damage: %f"), Damage);
	StatsComp->ReduceHealth(Damage, nullptr);
}


float AEnemyCharacter::GetCurrentDamage()
{
	return StatsComp->GetStatValue(EStats::Strength);
}


void AEnemyCharacter::Attack()
{
	if (bRandomAttacks)
	{
		CombatComp->RandomAttack();
	}
	else
	{
		CombatComp->ComboAttack();
	}
}


float AEnemyCharacter::GetAnimDuration()
{
	return CombatComp->AnimDuration;
}


float AEnemyCharacter::GetMeleeRange()
{
	return StatsComp->GetStatValue(EStats::MeleeRange);
}


float AEnemyCharacter::GetRangeDistance()
{
	return StatsComp->GetStatValue(EStats::RangeDistance);
}


AAIController* AEnemyCharacter::GetAIController()
{
	return ControllerRef;
}


float AEnemyCharacter::GetSightRadius()
{
	UPawnSensingComponent* SensingComp = FindComponentByClass<UPawnSensingComponent>();
	if (SensingComp)
	{
		return SensingComp->SightRadius;
	}
	return 0;
}


UBlackboardComponent* AEnemyCharacter::GetBlackboardComp()
{
	return BlackboardComp;
}


TEnumAsByte<EEnemyStates> AEnemyCharacter::GetInitialState()
{
	return InitialState;
}


void AEnemyCharacter::SetInitialState(TEnumAsByte<EEnemyStates> NewState)
{
	InitialState = NewState;
}
