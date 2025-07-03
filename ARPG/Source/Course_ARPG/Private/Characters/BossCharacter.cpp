
#include "Characters/BossCharacter.h"
#include "Characters/StatsComponent.h"
#include "AIController.h"
#include "BrainComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/LevelingComponent.h"
#include "Combat/CombatComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/EnemyProjectileComponent.h"
#include "Combat/TraceComponent.h"
#include "Components/CapsuleComponent.h"
#include "Interfaces/MainPlayer.h"
#include "UI/BossHealthBar.h"
#include "UI/EnemyHealthBar.h"


ABossCharacter::ABossCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	StatsComp = CreateDefaultSubobject<UStatsComponent>(TEXT("Stats Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent>(TEXT("Combat Component"));
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}


void ABossCharacter::BeginPlay()
{
	Super::BeginPlay();

	ControllerRef = GetController<AAIController>();

	
	BlackboardComp = ControllerRef->GetBlackboardComponent();
	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), InitialState);

	//из-за этой строки функция HandlePlayerDeath сработает когда у игрок умрет(OnZeroHealthDelegate) - таким образом можно триггерить функции через не связанные между собой классы
	GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>()->StatsComp->OnZeroHealthDelegate.AddDynamic(this, &ABossCharacter::HandlePlayerDeath);
	
	StatsComp->OnZeroHealthDelegate.AddDynamic(this, &ABossCharacter::HandleDeath);
	OnTakeAnyDamage.AddDynamic(this, &ABossCharacter::ReceiveDamage);
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


void ABossCharacter::HandlePlayerDeath()
{
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GameOver);
}


void ABossCharacter::HandleDeath()
{
	if (DeathAnim == nullptr)
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
	BossHealthBarWidgetRef->RemoveFromParent();
}


void ABossCharacter::FinishedDeathAnim()
{
	Destroy();
}


void ABossCharacter::GiveRewardXP()
{
	GetWorld()->GetFirstPlayerController()->GetPawn<AMainCharacter_Base>()->LevelComp->AddExperience(RewardXP);
}


void ABossCharacter::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	AActor* SafeCauser = IsValid(DamageCauser) ? DamageCauser : nullptr;
	UE_LOG(LogTemp, Error, TEXT("Boss|Received Damage: %f"), Damage);
	StatsComp->ReduceHealth(Damage, nullptr);
}


void ABossCharacter::CreateBossWidget()
{
	if (!BossHealthBarWidget)
	{
		return;
	}
	BossHealthBarWidgetRef = Cast<UBossHealthBar>(CreateWidget(GetWorld(), BossHealthBarWidget));
	BossHealthBarWidgetRef->AddToViewport();
	BossHealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
	StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(BossHealthBarWidgetRef, &UBossHealthBar::SetHealth);
}



float ABossCharacter::GetCurrentDamage()
{
	return StatsComp->GetStatValue(EStats::Strength);
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
	return StatsComp->GetStatValue(EStats::MeleeRange);
}


UBossHealthBar* ABossCharacter::GetBossHealthBarWidget()
{
	return BossHealthBarWidgetRef;
}


