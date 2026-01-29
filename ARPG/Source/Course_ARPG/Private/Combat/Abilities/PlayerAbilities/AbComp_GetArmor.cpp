
#include "Combat/Abilities/PlayerAbilities/AbComp_GetArmor.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Characters/Player/MainCharacter_Warrior.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"


void UAbComp_GetArmor::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_GetArmor::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		SetAbilityActive(true);
		HandlePlayerActions(false);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		Cast<AMainCharacter_Warrior>(PlayerRef)->SetArmor(Armor);
		OnAbilityStartedDelegate.Broadcast();
		PlayerRef->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_GetArmor::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbComp_GetArmor::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	CompleteAbility();
}


void UAbComp_GetArmor::CreateIcon()
{
	PlayerRef->CreateAbilityIconWithAmount(GetArmor(), GetIcon(), PlayerRef->StatsComp, Keyword);
}


void UAbComp_GetArmor::CompleteAbility()
{
	SetAbilityActive(false);
	HandlePlayerActions(true);
	StartCooldown();
}


void UAbComp_GetArmor::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Give yourself protection."
	"\nCurrent level: %i\n\nMana cost: %.2f\nArmor: %.2f\nDamage reduction: %.2f%%\nCooldown: %.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetArmor(), GetDamageReductionPercent()*100, GetCooldownDuration()));
}


void UAbComp_GetArmor::UpdateUpgradeDescription()
{
	const FGetArmorPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nArmor: %.2f -> %.2f\nDamage reduction: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetArmor(), NextLevelData->Armor,
		GetDamageReductionPercent() * 100, NextLevelData->DamageReductionPercent * 100,
		GetCooldownDuration(), NextLevelData->CooldownDuration));
}


FGetArmorPropertiesData* UAbComp_GetArmor::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->GetArmorLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->GetArmorLevels[Level];
}


void UAbComp_GetArmor::SetAbilityData(const int32 Level)
{
	const FGetArmorPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetArmor(Data->Armor);
	SetDamageReductionPercent(Data->DamageReductionPercent);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


float UAbComp_GetArmor::GetArmor() const
{
	return Armor;
}


void UAbComp_GetArmor::SetArmor(const float NewArmor)
{
	Armor = NewArmor;
}


float UAbComp_GetArmor::GetDamageReductionPercent() const
{
	return DamageReductionPercent;
}


void UAbComp_GetArmor::SetDamageReductionPercent(const float NewDamageReductionPercent)
{
	DamageReductionPercent = NewDamageReductionPercent;
}