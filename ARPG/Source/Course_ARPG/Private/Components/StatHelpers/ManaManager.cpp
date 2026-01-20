
#include "Components/StatHelpers/ManaManager.h"
#include "Components/StatsComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"


void UManaManager::Init(UStatsComponent* StatsComponentRef, const double NewManaRegenRate, const float NewManaDelayDuration)
{
	StatsComponent = StatsComponentRef;
	ManaRegenRate = NewManaRegenRate;
	ManaDelayDuration = NewManaDelayDuration;
}


void UManaManager::ReduceMana(const float Mana)
{
	if (!StatsComponent) return;
	bCanRegenMana = false;
	float CurrentMana = StatsComponent->GetStatValue(EStats::Mana);
	float MaxMana = StatsComponent->GetStatValue(EStats::MaxMana);
	CurrentMana -= Mana;
	CurrentMana = UKismetMathLibrary::FClamp(CurrentMana, 0, MaxMana);
	StatsComponent->SetStatValue(EStats::Mana, CurrentMana);
	FLatentActionInfo FunctionInfo{0, 101/*id любое не занятое число*/, TEXT("EnableManaRegen"), this };
	UKismetSystemLibrary::RetriggerableDelay(GetWorld(), ManaDelayDuration,FunctionInfo );
	const float Percentage = StatsComponent->GetStatPercentage(EStats::Mana, EStats::MaxMana);
	StatsComponent->OnManaPercentUpdateDelegate.Broadcast(Percentage);
}


void UManaManager::RegenMana()
{
	if (!StatsComponent || !bCanRegenMana) return;
	float CurrentMana = StatsComponent->GetStatValue(EStats::Mana);
	const float MaxMana = StatsComponent->GetStatValue(EStats::MaxMana);
	CurrentMana = UKismetMathLibrary::FInterpTo_Constant(CurrentMana, MaxMana, GetWorld()->DeltaTimeSeconds, ManaRegenRate);
	StatsComponent->SetStatValue(EStats::Mana, CurrentMana);
	const float Percentage = StatsComponent->GetStatPercentage(EStats::Mana, EStats::MaxMana);
	StatsComponent->OnManaPercentUpdateDelegate.Broadcast(Percentage);
}


void UManaManager::EnableManaRegen()
{
	bCanRegenMana = true;
}