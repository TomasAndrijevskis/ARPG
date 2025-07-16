
#include "Characters/EnemyCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Combat/StatusEffectsComponent.h"

AEnemyCharacter_Base::AEnemyCharacter_Base()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
	StatusEffectsComp = CreateDefaultSubobject<UStatusEffectsComponent>(TEXT("Status Effects Component"));
}


void AEnemyCharacter_Base::BeginPlay()
{
	Super::BeginPlay();

	ControllerRef = GetController<AAIController>();
	
	BlackboardComp = ControllerRef->GetBlackboardComponent();
	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), InitialState);

	//из-за этой строки функция HandlePlayerDeath сработает когда у игрок умрет(OnZeroHealthDelegate) - таким образом можно триггерить функции через не связанные между собой классы
	GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>()->StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter_Base::HandlePlayerDeath);
	
	StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter_Base::HandleDeath);
	OnTakeAnyDamage.AddDynamic(this, &AEnemyCharacter_Base::ReceiveDamage);
	
}


void AEnemyCharacter_Base::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void AEnemyCharacter_Base::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect)
{
	EEnemyStates CurrentState = static_cast<EEnemyStates>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState")));
	if (DetectedPawn != PawnToDetect || CurrentState!=EEnemyStates::Idle)
	{
		return;
	}

	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
}


void AEnemyCharacter_Base::HandlePlayerDeath()
{
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GameOver);
}


void AEnemyCharacter_Base::HandleDeath()
{
	if (DeathAnim==nullptr)
	{
		return;
	}
	float DeathAnimDuration = PlayAnimMontage(DeathAnim);
	ControllerRef->GetBrainComponent()->StopLogic("Defeated");
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
	PlayerRef->LevelComp->AddExperience(RewardXP);
}


void AEnemyCharacter_Base::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	UE_LOG(LogTemp, Error, TEXT("Boss|Received Damage: %f"), Damage);
	StatsComp->ReduceHealth(Damage, nullptr);
}


float AEnemyCharacter_Base::GetCurrentDamage()
{
	return StatsComp->GetStatValue(EStats::Strength);
}


void AEnemyCharacter_Base::Attack()
{
	CombatComp->RandomAttack();
}


float AEnemyCharacter_Base::GetAnimDuration()
{
	return CombatComp->AnimDuration;
}


float AEnemyCharacter_Base::GetMeleeRange()
{
	return StatsComp->GetStatValue(EStats::MeleeRange);
}
