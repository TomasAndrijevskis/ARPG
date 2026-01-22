
#include "Components/StatsComponent.h"
#include "Characters/Data/DefaultStatsDataAsset.h"
#include "Characters/Data/EStats.h"
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_GetArmor.h"
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
	OnStatsRevertedToDefaultDelegate.AddUObject(this, &ThisClass::SetDefaultStats);
	OnRegenStaminaRequestDelegate.AddUObject(StaminaManager, &UStaminaManager::RegenStamina);
	OnReduceStaminaRequestDelegate.AddUObject(StaminaManager, &UStaminaManager::ReduceStamina);
	OnRegenManaRequestDelegate.AddUObject(ManaManager, &UManaManager::RegenMana);
	OnReduceManaRequestDelegate.AddUObject(ManaManager, &UManaManager::ReduceMana);
	OnAddHealthRequestDelegate.AddUObject(HealthManager, &UHealthManager::AddHealth);
	OnReduceHealthRequestDelegate.AddUObject(HealthManager, &UHealthManager::ReduceHealth);
}


void UStatsComponent::SetDefaultStats()
{
	if (!DefaultStatsDataAsset) return;
	for (const auto& Stat : DefaultStatsDataAsset->DefaultStats)
	{
		SetStatValue(Stat.Key, Stat.Value);
	}
	RestoreStats();
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


float UStatsComponent::GetReducedDamage(const float Damage, AActor* Opponent)
{
	if (Stats[EStats::Armor] <= 0) return Damage;
	IFighter* FighterRef = GetOwner<IFighter>();
	
	if (!FighterRef->CanTakeDamage(Opponent)) return 0;
	
	UAbilityComponent_GetArmor* AbilityRef = GetOwner()->FindComponentByClass<UAbilityComponent_GetArmor>();

	if (!AbilityRef) return Damage;
	//на всякий случай вдруг % блокированного урона измениться
	float ClampedReduction = FMath::Clamp(AbilityRef->GetDamageReductionPercent(), 0.f, 1.f);
	float BlockedDamage = Damage * ClampedReduction;

	// гарантирует что блокированый урон не будет больше чем есть брони у игрока
	float ArmorBlock = FMath::Min(BlockedDamage, Stats[EStats::Armor]);
	float FinalDamage = Damage - ArmorBlock;
	Stats[EStats::Armor] -= ArmorBlock;
	
	if (Stats[EStats::Armor] == 0)
	{
		OnZeroArmorDelegate.Broadcast();
		return FinalDamage;
	}
	
	OnArmorUpdateDelegate.Broadcast(Stats[EStats::Armor]);
	return FinalDamage;
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
	Stats[Stat] = NewValue;
}