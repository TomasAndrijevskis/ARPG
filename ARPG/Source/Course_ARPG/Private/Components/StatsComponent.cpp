
#include "Components/StatsComponent.h"
#include "Characters/Data/DefaultStatsDataAsset.h"
#include "Characters/Data/EStats.h"
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_GetArmor.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Interfaces/Fighter.h"


void UStatsComponent::BeginPlay()
{
	Super::BeginPlay();
	OnStatUpdateDelegate.AddUniqueDynamic(this, &UStatsComponent::OnStatsUpdated);
	OnStatsRevertedToDefaultDelegate.AddUObject(this, &UStatsComponent::RevertStatsToDefault);
}


void UStatsComponent::RevertStatsToDefault()
{
	if (!DefaultStatsDataAsset) return;
	for (const auto& Stat : DefaultStatsDataAsset->DefaultStats)
	{
		SetStatValue(Stat.Key, Stat.Value);
	}
	RestoreStats();
}


void UStatsComponent::ReduceHealth(const float Damage, AActor* Opponent)
{
	if (Stats[EStats::Health] <=0) return;

	IFighter* FighterRef = GetOwner<IFighter>();

	if (!FighterRef->CanTakeDamage(Opponent)) return;

	Stats[EStats::Health] -= Damage;
	Stats[EStats::Health] = UKismetMathLibrary::FClamp(Stats[EStats::Health], 0, Stats[EStats::MaxHealth]);
	//цифра хп не упадет ниже нуля

	OnHealthPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Health, EStats::MaxHealth));
	if (Stats[EStats::Health] <= 0) OnZeroHealthDelegate.Broadcast();
}


void UStatsComponent::AddHealth(const float HealthToAdd)
{
	float CurrentHealth = Stats[EStats::Health];

	float NewHealth = FMath::Min(HealthToAdd + CurrentHealth, Stats[EStats::MaxHealth]);
	Stats[EStats::Health] = NewHealth;
	
	OnHealthPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Health, EStats::MaxHealth));
}


void UStatsComponent::OnStatsUpdated()
{
	OnHealthPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Health, EStats::MaxHealth));
	OnStaminaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
	OnManaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Mana, EStats::MaxMana));
}


void UStatsComponent::RestoreStats()
{
	SetStatValue(EStats::Health, Stats[EStats::MaxHealth]);
	SetStatValue(EStats::Stamina, Stats[EStats::MaxStamina]);
	SetStatValue(EStats::Mana, Stats[EStats::MaxMana]);
	OnStatsUpdated();
}


void UStatsComponent::ReduceStamina(const float Stamina)
{
	Stats[EStats::Stamina] -= Stamina;
	Stats[EStats::Stamina] = UKismetMathLibrary::FClamp(Stats[EStats::Stamina], 0, Stats[EStats::MaxStamina]);

	bCanRegenStamina = false;

	FLatentActionInfo FunctionInfo{0, 100/*id любое не занятое число*/, TEXT("EnableStaminaRegen"), this };
	UKismetSystemLibrary::RetriggerableDelay(GetWorld(), StaminaDelayDuration,FunctionInfo );
	OnStaminaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
}


void UStatsComponent::RegenStamina()
{
	if (!bCanRegenStamina) return;
	Stats[EStats::Stamina] = UKismetMathLibrary::FInterpTo_Constant(Stats[EStats::Stamina], Stats[EStats::MaxStamina], GetWorld()->DeltaTimeSeconds, StaminaRegenRate);
	OnStaminaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
}


void UStatsComponent::EnableStaminaRegen()
{
	bCanRegenStamina = true;
}


void UStatsComponent::ReduceMana(const float Mana)
{
	Stats[EStats::Mana] -= Mana;
	Stats[EStats::Mana] = UKismetMathLibrary::FClamp(Stats[EStats::Mana], 0, Stats[EStats::MaxMana]);

	bCanRegenMana = false;

	FLatentActionInfo FunctionInfo{0, 101/*id любое не занятое число*/, TEXT("EnableManaRegen"), this };
	UKismetSystemLibrary::RetriggerableDelay(GetWorld(), ManaDelayDuration,FunctionInfo );
	OnManaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Mana, EStats::MaxMana));
}


void UStatsComponent::RegenMana()
{
	if (!bCanRegenMana) return;
	Stats[EStats::Mana] = UKismetMathLibrary::FInterpTo_Constant(Stats[EStats::Mana], Stats[EStats::MaxMana], GetWorld()->DeltaTimeSeconds, ManaRegenRate);
	OnManaPercentUpdateDelegate.Broadcast(GetStatPercentage(EStats::Mana, EStats::MaxMana));
}


void UStatsComponent::EnableManaRegen()
{
	bCanRegenMana = true;
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


