
#include "Characters/Boss.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Enemy.h"
#include "Combat/TraceComponent.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "UI/BossHealthBar.h"


ABoss::ABoss()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
	TraceComp = CreateDefaultSubobject<UTraceComponent>(TEXT("Trace Component"));
}


void ABoss::CreateHealthWidget()
{
	if (!HealthBarWidget)
	{
		return;
	}
	HealthBarWidgetRef = Cast<UBossHealthBar>(CreateWidget(GetWorld(), HealthBarWidget));
	if (HealthBarWidgetRef)
	{
		HealthBarWidgetRef->AddToViewport();
		HealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
		HealthBarWidgetRef->SetBossName(GetBossName());
		StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(HealthBarWidgetRef, &UBossHealthBar::SetHealth);
		StatsComp->OnHealthPercentUpdateDelegate.AddDynamic(this, &ABoss::CheckSecondPhase);
	}
}


void ABoss::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState)
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

float ABoss::GetAttackAnimReductionTime()
{
	if (!bSecondPhase)
	{
		return 0;
	}
	return AttackAnimReductionTime;
}


void ABoss::HandleDeath()
{
	Super::HandleDeath();
	HealthBarWidgetRef->RemoveFromParent();
}


void ABoss::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!bCanTakeDamage) return;
	Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
}


void ABoss::CheckSecondPhase(float CurrentHealthPercent)
{
	if (CurrentHealthPercent <= SecondPhaseHealthPercent && !IsSecondPhaseActive())
	{
		bCanTakeDamage = false;
		BlackboardComp->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::PhaseTransition);
	}
}


void ABoss::ActivateSecondPhase()
{
	bSecondPhase = true;
	bCanTakeDamage = true;
	StatsComp->SetStatValue(EStats::Strength, StatsComp->GetStatValue(EStats::Strength) * DamageMultiplier);
}



bool ABoss::IsSecondPhaseActive()
{
	return bSecondPhase;
}


FText ABoss::GetBossName()
{
	return BossName;
}
