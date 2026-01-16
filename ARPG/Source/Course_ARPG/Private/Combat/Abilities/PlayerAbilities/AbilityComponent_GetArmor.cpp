
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_GetArmor.h"
#include "Characters/Data/EStats.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Components/StatsComponent.h"
#include "UI/PlayerWidget.h"


void UAbilityComponent_GetArmor::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Base::CreateIcon);
	SetAbilityData(0);
}


void UAbilityComponent_GetArmor::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		SetAbilityActive(true);
		HandlePlayerActions(false);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->StatsComp->SetStatValue(EStats::MaxArmor, Armor);
		PlayerRef->StatsComp->SetStatValue(EStats::Armor, Armor);
		OnAbilityStartedDelegate.Broadcast();
		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_GetArmor::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbilityComponent_GetArmor::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_GetArmor::CompleteAbility, .1, false);
}


void UAbilityComponent_GetArmor::CreateIcon()
{
	PlayerRef->GetPlayerWidget()->CreateStatusIconWithAmount(GetArmor(), GetIcon(), PlayerRef->StatsComp, Keyword);
}


void UAbilityComponent_GetArmor::CompleteAbility()
{
	SetAbilityActive(false);
	HandlePlayerActions(true);
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	StartCooldown();
}


void UAbilityComponent_GetArmor::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Give yourself protection."
	"\nCurrent level: %i\n\nMana cost: %.2f\nArmor: %.2f\nDamage reduction: %.2f%%\nCooldown: %.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetArmor(), GetDamageReductionPercent()*100, GetCooldownDuration()));
}


void UAbilityComponent_GetArmor::UpdateUpgradeDescription()
{
	const FGetArmorPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nArmor: %.2f -> %.2f\nDamage reduction: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetArmor(), NextLevelData->Armor,
		GetDamageReductionPercent() * 100, NextLevelData->DamageReductionPercent * 100,
		GetCooldownDuration(), NextLevelData->CooldownDuration));
}


FGetArmorPropertiesData* UAbilityComponent_GetArmor::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->GetArmorLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->GetArmorLevels[Level];
}


void UAbilityComponent_GetArmor::SetAbilityData(const int32 Level)
{
	const FGetArmorPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetArmor(Data->Armor);
	SetDamageReductionPercent(Data->DamageReductionPercent);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


float UAbilityComponent_GetArmor::GetArmor() const
{
	return Armor;
}


void UAbilityComponent_GetArmor::SetArmor(const float NewArmor)
{
	Armor = NewArmor;
}


float UAbilityComponent_GetArmor::GetDamageReductionPercent() const
{
	return DamageReductionPercent;
}


void UAbilityComponent_GetArmor::SetDamageReductionPercent(const float NewDamageReductionPercent)
{
	DamageReductionPercent = NewDamageReductionPercent;
}


