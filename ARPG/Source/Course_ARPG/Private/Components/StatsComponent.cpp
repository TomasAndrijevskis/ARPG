
#include "Components/StatsComponent.h"
#include "Data/EStats.h"
#include "Components/StatHelpers/HealthManager.h"
#include "Components/StatHelpers/ManaManager.h"
#include "Components/StatHelpers/StaminaManager.h"
#include "Interfaces/Fighter.h"


void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();
	SetStatHelpers();
	if (!HealthManager || !StaminaManager || !ManaManager) return;
	BindDelegates();
}


void UStatsComponent::SetStatHelpers()
{
	HealthManager = NewObject<UHealthManager>(this);
	StaminaManager = NewObject<UStaminaManager>(this);
	ManaManager = NewObject<UManaManager>(this);
	if (!HealthManager || !StaminaManager || !ManaManager) return;
	HealthManager->Init(this);
	StaminaManager->Init(this, StaminaRegenRate, StaminaDelayDuration);
	ManaManager->Init(this, ManaRegenRate, ManaDelayDuration);
}


void UStatsComponent::BindDelegates()
{
	OnStatUpdateDelegate.AddUObject(this, &ThisClass::OnStatsUpdated);
	OnRegenStaminaRequestDelegate.AddUObject(StaminaManager, &UStaminaManager::RegenStamina);
	OnReduceStaminaRequestDelegate.AddUObject(StaminaManager, &UStaminaManager::ReduceStamina);
	OnRegenManaRequestDelegate.AddUObject(ManaManager, &UManaManager::RegenMana);
	OnReduceManaRequestDelegate.AddUObject(ManaManager, &UManaManager::ReduceMana);
	OnAddHealthRequestDelegate.AddUObject(HealthManager, &UHealthManager::AddHealth);
	OnReduceHealthRequestDelegate.AddUObject(HealthManager, &UHealthManager::ReduceHealth);
}


void UStatsComponent::RestoreStats()
{
	SetStatValue(EStats::Health, Stats[EStats::MaxHealth]);
	SetStatValue(EStats::Stamina, Stats[EStats::MaxStamina]);
	SetStatValue(EStats::Mana, Stats[EStats::MaxMana]);
	OnStatsUpdated();
}


void UStatsComponent::OnStatsUpdated()
{
	OnHealthPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Health, EStats::MaxHealth));
	OnStaminaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
	OnManaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Mana, EStats::MaxMana));
}


void UStatsComponent::ReduceHealth(const float Damage)
{
	OnReduceHealthRequestDelegate.Broadcast(Damage,GetOwner(), nullptr);
}


void UStatsComponent::UpgradeStat(const TEnumAsByte<EStats> Stat, const float Value)
{
	Stats[Stat] += Value;
}


float UStatsComponent::GetStatIncreasePreview(const EStats Stat, const float Delta)
{
	return Stats[Stat] + Delta;
}


FString UStatsComponent::GetStatUpgradeDescription(EStats Stat, float Delta)
{
	const FText DisplayName = StaticEnum<EStats>()->GetDisplayNameTextByValue(Stat);
	FString Coefficient;
	for (const auto PercentageStat : PercentageStats)
	{
		if (Stat == PercentageStat)
		{
			Coefficient = FString::SanitizeFloat(Delta * 100);
			break;
		}
		Coefficient = FString::SanitizeFloat(Delta);
	}
	FString Result = DisplayName.ToString() + " will be increased by " + Coefficient;
	for (const auto PercentageStat : PercentageStats)
	{
		if (Stat == PercentageStat) Result += " %";
	}
	return Result += "\n";
}


FString UStatsComponent::GetStatUpgradePreview(EStats Stat, float Delta)
{
	const float NextValue = GetStatIncreasePreview(Stat, Delta);
	for (const auto PercentageStat : PercentageStats)
	{
		if (Stat == PercentageStat)
		{
			if (NextValue <= PercentStatCap) return FString::Printf(TEXT("%.3f %% -> %.3f %%"), GetStatValue(Stat) * 100, NextValue * 100);
			return "Cap reached";
		}
	}
	return FString::Printf(TEXT("%.2f -> %.2f"), GetStatValue(Stat), NextValue);
}


float UStatsComponent::CalculateFinalReceivedDamage(const float Damage, AActor* Opponent, const float ReductionPercent)
{
	float FinalDamage = GetReducedDamage(Damage, ReductionPercent);
	if (!Stats.Contains(Armor) || Stats[EStats::Armor] <= 0) return FinalDamage;
	//IFighter* FighterRef = GetOwner<IFighter>();
	//if (!FighterRef->CanTakeDamage(Opponent)) return 0;
	// гарантирует что блокированый урон не будет больше чем есть брони у игрока
	float ArmorBlock = FMath::Min(Damage, Stats[EStats::Armor]);
	FinalDamage = Damage - ArmorBlock;
	Stats[EStats::Armor] -= ArmorBlock;
	
	if (Stats[EStats::Armor] == 0)
	{
		OnZeroArmorDelegate.Broadcast();
		return FinalDamage;
	}
	
	OnArmorUpdateDelegate.Broadcast(Stats[EStats::Armor]);
	return FinalDamage;
}


float UStatsComponent::GetReducedDamage(const float Damage, const float ReductionPercent)
{
	return Damage - (ReductionPercent * Damage);
}


float UStatsComponent::GetStatPercentage(const EStats Current, const EStats Max) const
{
	return Stats[Current] / Stats[Max];
}


float UStatsComponent::GetStatValue(const EStats Stat) const
{
	return Stats[Stat];
}


FString UStatsComponent::GetStatName(const EStats Stat) const
{
	FString Name = UEnum::GetValueAsString(Stat); 
	return Name;
}


void UStatsComponent::SetStatValue(const EStats Stat, const float NewValue)
{
	if ((Stat == MagDmgResistance || Stat == PhysDmgResistance || Stat == AbilityPower) && NewValue >= PercentStatCap)
		Stats[Stat] = PercentStatCap;
	else Stats[Stat] = NewValue;
}