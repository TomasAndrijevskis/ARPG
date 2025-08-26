
#include "Characters/Boss.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Characters/ARPG_PlayerController.h"
#include "Characters/StatsComponent.h"
#include "Combat/CombatComponent_Enemy.h"
#include "UI/BossHealthBar.h"


ABoss::ABoss()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
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
	if (GetBlackboardComp())
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(GetBlackboardComp()->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || CurrentState != EEnemyStates::Idle)
		{
			return;
		}
		GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), NewEnemyState);
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
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController)
	{
		return;
	}
	PlayerController->AddDefeatedBoss(FName(*GetClass()->GetName()));
	Super::HandleDeath();
	HealthBarWidgetRef->RemoveFromParent();
}


void ABoss::ReceiveDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!GetCanTakeDamage()) return;
	Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
}


void ABoss::CheckSecondPhase(float CurrentHealthPercent)
{
	if (CurrentHealthPercent <= SecondPhaseHealthPercent && !IsSecondPhaseActive())
	{
		SetCanTakeDamage(false);
		GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::PhaseTransition);
	}
}


void ABoss::ActivateSecondPhase()
{
	bSecondPhase = true;
	SetCanTakeDamage(true);
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


void ABoss::SetCanTakeDamage(bool CanTakeDamage)
{
	bCanTakeDamage = CanTakeDamage;
}


bool ABoss::GetCanTakeDamage()
{
	return bCanTakeDamage;
}