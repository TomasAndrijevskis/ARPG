
#include "Components/StatHelpers/StaminaManager.h"
#include "Components/StatsComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"


void UStaminaManager::Init(UStatsComponent* StatsComponentRef, const double NewStaminaRegenRate, const float NewStaminaDelayDuration)
{
	StatsComponent = StatsComponentRef;
	StaminaRegenRate = NewStaminaRegenRate;
	StaminaDelayDuration = NewStaminaDelayDuration;
}


void UStaminaManager::ReduceStamina(const float Stamina)
{
	if (!StatsComponent) return;
	bCanRegenStamina = false;
	float CurrentStamina = StatsComponent->GetStatValue(EStats::Stamina);
	const float MaxStamina = StatsComponent->GetStatValue(EStats::MaxStamina);
	CurrentStamina -= Stamina;
	CurrentStamina = UKismetMathLibrary::FClamp(CurrentStamina, 0, MaxStamina);
	StatsComponent->SetStatValue(EStats::Stamina, CurrentStamina);
	FLatentActionInfo FunctionInfo{0, 100/*id любое не занятое число*/, TEXT("EnableStaminaRegen"), this };
	UKismetSystemLibrary::RetriggerableDelay(GetWorld(), StaminaDelayDuration,FunctionInfo);
	const float Percentage = StatsComponent->GetStatPercentage(EStats::Stamina, EStats::MaxStamina);
	StatsComponent->OnStaminaPercentUpdateDelegate.Broadcast(Percentage);
}


void UStaminaManager::RegenStamina()
{
	if (!StatsComponent || !bCanRegenStamina) return;
	const float CurrentStamina = StatsComponent->GetStatValue(EStats::Stamina);
	const float MaxStamina = StatsComponent->GetStatValue(EStats::MaxStamina);
	const float NewStamina = UKismetMathLibrary::FInterpTo_Constant(CurrentStamina, MaxStamina, GetWorld()->DeltaTimeSeconds, StaminaRegenRate);
	StatsComponent->SetStatValue(EStats::Stamina, NewStamina);
	const float Percentage = StatsComponent->GetStatPercentage(EStats::Stamina, EStats::MaxStamina);
	StatsComponent->OnStaminaPercentUpdateDelegate.Broadcast(Percentage);
}


void UStaminaManager::EnableStaminaRegen()
{
	bCanRegenStamina = true;
}