
#include "Components/StatHelpers/HealthManager.h"
#include "Components/StatsComponent.h"
#include "Interfaces/Fighter.h"
#include "Kismet/KismetMathLibrary.h"


void UHealthManager::Init(UStatsComponent* StatsComponentRef)
{
	StatsComponent = StatsComponentRef;
}


void UHealthManager::AddHealth(const float HealthToAdd)
{
	if (!StatsComponent) return;
	float CurrentHealth = StatsComponent->GetStatValue(EStats::Health);
	float NewHealth = FMath::Min(HealthToAdd + CurrentHealth, StatsComponent->GetStatValue(EStats::MaxHealth));
	StatsComponent->SetStatValue(EStats::Health, NewHealth);
	const float Percentage = StatsComponent->GetStatPercentage(EStats::Health, EStats::MaxHealth);
	StatsComponent->OnHealthPercentUpdateDelegate.Broadcast(Percentage);
}


void UHealthManager::ReduceHealth(const float Damage, AActor* Owner, AActor* Opponent)
{
	if (!StatsComponent) return;
	float CurrentHealth = StatsComponent->GetStatValue(EStats::Health);
	if (CurrentHealth <= 0) return;
	//IFighter* FighterRef = Cast<IFighter>(Owner);
	//if (!FighterRef || !FighterRef->CanTakeDamage(Opponent)) return;
	CurrentHealth -= Damage;
	CurrentHealth = UKismetMathLibrary::FClamp(CurrentHealth, 0, StatsComponent->GetStatValue(EStats::MaxHealth));
	StatsComponent->SetStatValue(EStats::Health, CurrentHealth);
	const float Percentage = StatsComponent->GetStatPercentage(EStats::Health, EStats::MaxHealth);
	StatsComponent->OnHealthPercentUpdateDelegate.Broadcast(Percentage);
	if (CurrentHealth <= 0) StatsComponent->OnZeroHealthDelegate.Broadcast();
}