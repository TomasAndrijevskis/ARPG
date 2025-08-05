
#include "Characters/EnemyCharacter_Boss.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "UI/BossHealthBar.h"


AEnemyCharacter_Boss::AEnemyCharacter_Boss()
{
	ProjectileComp = CreateDefaultSubobject<UEnemyProjectileComponent>(TEXT("Projectile Component"));
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}


void AEnemyCharacter_Boss::CreateHealthWidget()
{
	if (!HealthBarWidget)
	{
		return;
	}
	HealthBarWidgetRef = Cast<UBossHealthBar>(CreateWidget(GetWorld(), HealthBarWidget));
	HealthBarWidgetRef->AddToViewport();
	HealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
	StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(HealthBarWidgetRef, &UBossHealthBar::SetHealth);
	StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(this, &AEnemyCharacter_Boss::CheckSecondPhase);
}


void AEnemyCharacter_Boss::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState)
{
	if (BlackboardComp)
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(BlackboardComp->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || CurrentState != EEnemyStates::Idle)
		{
			return;
		}
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), NewEnemyState);
	}
}

float AEnemyCharacter_Boss::GetAttackAnimReductionTime()
{
	if (!bSecondPhase)
	{
		return 0;
	}
	return AttackAnimReductionTime;
}


void AEnemyCharacter_Boss::HandleDeath()
{
	Super::HandleDeath();
	HealthBarWidgetRef->RemoveFromParent();
}


void AEnemyCharacter_Boss::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!bCanTakeDamage) return;
	Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
}


void AEnemyCharacter_Boss::CheckSecondPhase(float CurrentHealthPercent)
{
	if (CurrentHealthPercent <= SecondPhaseHealthPercent && !bSecondPhase)
	{
		bSecondPhase = true;
		bCanTakeDamage = false;
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::PhaseTransition);
		FTimerHandle TimerHandle;

		GetMesh()->GetAnimInstance()->Montage_Stop(0.01f);
		
		float AnimDuration = PlayAnimMontage(PhaseTransitionMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AEnemyCharacter_Boss::ActivateSecondPhase, AnimDuration, false);
	}
}


void AEnemyCharacter_Boss::ActivateSecondPhase()
{
	BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Charge);
	bCanTakeDamage = true;
	StatsComp->SetStatValue(EStats::Strength, StatsComp->GetStatValue(EStats::Strength) * 2);
}
