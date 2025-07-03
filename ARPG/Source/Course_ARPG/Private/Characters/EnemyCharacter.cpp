
#include "Characters/EnemyCharacter.h"
#include "Characters/StatsComponent.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/LevelingComponent.h"
#include "Combat/CombatComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "UI/EnemyHealthBar.h"


AEnemyCharacter::AEnemyCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
}


void AEnemyCharacter::BeginPlay()
{
	Super::BeginPlay();

	ControllerRef = GetController<AAIController>();
	
	BlackboardComp = ControllerRef->GetBlackboardComponent();
	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), InitialState);

	//из-за этой строки функция HandlePlayerDeath сработает когда у игрок умрет(OnZeroHealthDelegate) - таким образом можно триггерить функции через не связанные между собой классы
	GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>()->StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter::HandlePlayerDeath);
	
	StatsComp->OnZeroHealthDelegate.AddDynamic(this, &AEnemyCharacter::HandleDeath);
	OnTakeAnyDamage.AddDynamic(this, &AEnemyCharacter::ReceiveDamage);
}


void AEnemyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}


void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}


void AEnemyCharacter::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect)
{
	EEnemyStates CurrentState = static_cast<EEnemyStates>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState")));
	if (DetectedPawn != PawnToDetect || CurrentState!=EEnemyStates::Idle)
	{
		return;
	}

	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
}


void AEnemyCharacter::HandlePlayerDeath()
{
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GameOver);
}


void AEnemyCharacter::HandleDeath()
{
	if (DeathAnim==nullptr)
	{
		return;
	}
	float DeathAnimDuration = PlayAnimMontage(DeathAnim);
	ControllerRef->GetBrainComponent()->StopLogic("Defeated");
	FindComponentByClass<UCapsuleComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	FTimerHandle DestroyTimerHandle;
	GetWorld()->GetTimerManager().SetTimer(DestroyTimerHandle, this, &AEnemyCharacter::FinishedDeathAnim, DeathAnimDuration, false);
	IMainPlayer* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<IMainPlayer>();
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->EndLockonWithActor(this);
	GiveRewardXP();
	//EnemyHealthBarWidgetRef->RemoveFromParent();
}


void AEnemyCharacter::FinishedDeathAnim()
{
	Destroy();
}


void AEnemyCharacter::GiveRewardXP()
{
	AMainCharacter_Base* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>();
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->LevelComp->AddExperience(RewardXP);
}


void AEnemyCharacter::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	UE_LOG(LogTemp, Error, TEXT("Boss|Received Damage: %f"), Damage);
	StatsComp->ReduceHealth(Damage, nullptr);
}


void AEnemyCharacter::CreateHealthWidget()
{
	if (!EnemyHealthBarWidget)
	{
		return;
	}
	EnemyHealthBarWidgetRef = Cast<UEnemyHealthBar>(CreateWidget(GetWorld(), EnemyHealthBarWidget));
	EnemyHealthBarWidgetRef->AddToViewport();
	EnemyHealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
	StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(EnemyHealthBarWidgetRef, &UEnemyHealthBar::SetHealth);
}



float AEnemyCharacter::GetCurrentDamage()
{
	return StatsComp->GetStatValue(EStats::Strength);
}


void AEnemyCharacter::Attack()
{
	CombatComp->RandomAttack();
}


float AEnemyCharacter::GetAnimDuration()
{
	return CombatComp->AnimDuration;
}


float AEnemyCharacter::GetMeleeRange()
{
	return StatsComp->GetStatValue(EStats::MeleeRange);
}
