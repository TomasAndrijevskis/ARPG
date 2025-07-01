
#include "Characters/BossCharacter.h"
#include "Characters/StatsComponent.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/LevelingComponent.h"
#include "Combat/CombatComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"

ABossCharacter::ABossCharacter()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
}


void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();

	ControllerRef = GetController<AAIController>();
	
	BlackboardComp = ControllerRef->GetBlackboardComponent();
	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), InitialState);

	//из-за этой строки функция HandlePlayerDeath сработает когда у игрок умрет(OnZeroHealthDelegate) - таким образом можно триггерить функции через не связанные между собой классы
	GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>()->StatsComp->OnZeroHealthDelegate.AddDynamic(this, &ABossCharacter::HandlePlayerDeath);
}


void ABossCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void ABossCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void ABossCharacter::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect)
{
	EEnemyStates CurrentState = static_cast<EEnemyStates>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState")));
	if (DetectedPawn != PawnToDetect || CurrentState!=EEnemyStates::Idle)
	{
		return;
	}

	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
}


float ABossCharacter::GetCurrentDamage()
{
	return StatsComp->Stats[EStats::Strength];
}


void ABossCharacter::Attack()
{
	CombatComp->RandomAttack();
}


float ABossCharacter::GetAnimDuration()
{
	return CombatComp->AnimDuration;
}


float ABossCharacter::GetMeleeRange()
{
	return StatsComp->Stats[EStats::MeleeRange];
}


void ABossCharacter::HandlePlayerDeath()
{
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GameOver);
}


void ABossCharacter::HandleDeath()
{
	if (DeathAnim==nullptr)
	{
		return;
	}
	float DeathAnimDuration = PlayAnimMontage(DeathAnim);
	ControllerRef->GetBrainComponent()->StopLogic("Defeated");
	FindComponentByClass<UCapsuleComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	FTimerHandle DestroyTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, this, &ABossCharacter::FinishedDeathAnim, DeathAnimDuration, false);
	IMainPlayer* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<IMainPlayer>();
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->EndLockonWithActor(this);
	GiveRewardXP();
}


void ABossCharacter::FinishedDeathAnim()
{
	Destroy();
}


void ABossCharacter::GiveRewardXP()
{
	AMainCharacter_Base* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>();
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->LevelComp->AddExperience(RewardXP);
}
