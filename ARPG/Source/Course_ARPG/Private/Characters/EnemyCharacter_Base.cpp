
#include "Characters/EnemyCharacter_Base.h"
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

AEnemyCharacter_Base::AEnemyCharacter_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	StatusEffectsComp = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("Status Effects Component"));
	BlockingSphere = CreateDefaultSubobject<USphereComponent>(TEXT("Blocking Sphere"));
	BlockingSphere->SetupAttachment(GetRootComponent());
	
}


void AEnemyCharacter_Base::BeginPlay()
{
	Super::BeginPlay();

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemyCharacter_Base::SetupAI, .1f, false);
	//из-за этой строки функция HandlePlayerDeath сработает когда у игрок умрет(OnZeroHealthDelegate) - таким образом можно триггерить функции через не связанные между собой классы
	GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>()->StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter_Base::HandlePlayerDeath);
	
	StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter_Base::HandleDeath);
	OnTakeAnyDamage.AddDynamic(this, &AEnemyCharacter_Base::ReceiveDamage);

	if (BlockingSphere)
	{
		BlockingSphere->SetCollisionResponseToAllChannels(ECR_Ignore);
		BlockingSphere->SetCollisionResponseToChannel(CollisionChannel, ECR_Block);
	}
}


void AEnemyCharacter_Base::SetupAI()
{
	ControllerRef = GetController<AAIController>();
	if (ControllerRef)
	{
		ControllerRef->RunBehaviorTree(BehaviorTree);
		BlackboardComp = ControllerRef->GetBlackboardComponent();
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), InitialState);
		BlackboardComp->SetValueAsBool(TEXT("IsPatrolling"), true);
	}
}


void AEnemyCharacter_Base::HandlePlayerDeath()
{
	if (ControllerRef)
	{
		ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GameOver);
	}
}


void AEnemyCharacter_Base::HandleDeath()
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

	FTimerHandle DestroyTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, this, &AEnemyCharacter_Base::FinishedDeathAnim, DeathAnimDuration, false);
	IMainPlayer* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<IMainPlayer>();
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->EndLockonWithActor(this);
	GiveRewardXP();
}


void AEnemyCharacter_Base::FinishedDeathAnim()
{
	Destroy();
}


void AEnemyCharacter_Base::GiveRewardXP()
{
	AMainCharacter_Base* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>();
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->LevelComp->AddXP(RewardXP);
}


void AEnemyCharacter_Base::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	UE_LOG(LogTemp, Error, TEXT("Base|Received Damage: %f"), Damage);
	StatsComp->ReduceHealth(Damage, nullptr);
}


float AEnemyCharacter_Base::GetCurrentDamage()
{
	return StatsComp->GetStatValue(EStats::Strength);
}


void AEnemyCharacter_Base::Attack()
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


float AEnemyCharacter_Base::GetAnimDuration()
{
	return CombatComp->AnimDuration;
}


float AEnemyCharacter_Base::GetMeleeRange()
{
	return StatsComp->GetStatValue(EStats::MeleeRange);
}


float AEnemyCharacter_Base::GetRangeDistance()
{
	return StatsComp->GetStatValue(EStats::RangeDistance);
}


AAIController* AEnemyCharacter_Base::GetAIController()
{
	return ControllerRef;
}


float AEnemyCharacter_Base::GetSightRadius()
{
	UPawnSensingComponent* SensingComp = FindComponentByClass<UPawnSensingComponent>();
	if (SensingComp)
	{
		return SensingComp->SightRadius;
	}
	return 0;
}


UBlackboardComponent* AEnemyCharacter_Base::GetBlackboardComp()
{
	return BlackboardComp;
}
