
#include "Characters/Enemy/Boss.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Blueprint/UserWidget.h"
#include "Data/EStats.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/CombatComponent_Enemy.h"
#include "Components/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Course_ARPG/Public/Objects/BossLocationDoor.h"
#include "UI/BossHealthBar.h"


ABoss::ABoss()
{
	CombatComp = CreateDefaultSubobject<UCombatComponent_Enemy>(TEXT("Combat Component"));
}


void ABoss::CreateHealthWidget()
{
	if (!HealthBarWidget) return;
	HealthBarWidgetRef = Cast<UBossHealthBar>(CreateWidget(GetWorld(), HealthBarWidget));
	if (HealthBarWidgetRef)
	{
		HealthBarWidgetRef->AddToViewport();
		HealthBarWidgetRef->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
		HealthBarWidgetRef->SetBossName(GetBossName());
		StatsComp->OnHealthPercentUpdateDelegate.AddUObject(HealthBarWidgetRef, &UBossHealthBar::SetHealth);
		StatsComp->OnHealthPercentUpdateDelegate.AddUObject(this, &ABoss::CheckSecondPhase);
	}
}


void ABoss::DetectPawn(APawn* DetectedPawn, APawn* PawnToDetect, EEnemyStates NewEnemyState)
{
	if (GetBlackboardComp())
	{
		EEnemyStates CurrentState = static_cast<EEnemyStates>(GetBlackboardComp()->GetValueAsEnum(TEXT("CurrentState")));
		if (DetectedPawn != PawnToDetect || CurrentState != EEnemyStates::Idle) return;
		GetBlackboardComp()->SetValueAsEnum(TEXT("CurrentState"), NewEnemyState);
	}
}


void ABoss::HandleDeath()
{
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController) return;
	AActor* BossDoor = UGameplayStatics::GetActorOfClass(GetWorld(), ABossLocationDoor::StaticClass());
	if (BossDoor) Cast<ABossLocationDoor>(BossDoor)->OnBossDiedDelegate.Broadcast();
	PlayerController->AddDefeatedBoss(FName(*GetClass()->GetName()));
	PlayerController->SaveAll();
	Super::HandleDeath();
	HealthBarWidgetRef->RemoveFromParent();
}


void ABoss::ReceiveDamage(AActor* DamagedActor, const float Damage, const class UDamageType* DamageType,class AController* InstigatedBy, AActor* DamageCauser)
{
	if (!GetCanTakeDamage()) return;
	Super::ReceiveDamage(DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
}


void ABoss::CheckSecondPhase(const float CurrentHealthPercent)
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
	StatsComp->SetStatValue(EStats::PhysicalStrength, StatsComp->GetStatValue(EStats::PhysicalStrength) * DamageMultiplier);
}


void ABoss::CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef)
{
	HealthBarWidgetRef->CreateStatusEffectIcon(Icon, StatusEffectsCompRef);
}


void ABoss::ChangeHealthBarColor(bool IsMarked)
{
	HealthBarWidgetRef->SetHealthBarColor(IsMarked);
}


float ABoss::GetAttackAnimReductionTime() const
{
	if (!bSecondPhase) return 0;
	return AttackAnimReductionTime;
}


void ABoss::SetCanTakeDamage(const bool CanTakeDamage){bCanTakeDamage = CanTakeDamage;}

bool ABoss::IsSecondPhaseActive() const{return bSecondPhase;}

bool ABoss::GetCanTakeDamage() const{return bCanTakeDamage;}

FText ABoss::GetBossName() const{return BossName;}

UBossHealthBar* ABoss::GetBossWidget() const{return HealthBarWidgetRef;}