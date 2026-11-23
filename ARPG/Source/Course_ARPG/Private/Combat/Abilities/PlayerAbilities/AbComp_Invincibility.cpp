
#include "Combat/Abilities/PlayerAbilities/AbComp_Invincibility.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Characters/Player/MainCharacter_Warrior.h"
#include "Data/Abilities/InvincibilityPropertiesData.h"


void UAbComp_Invincibility::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_Invincibility::StartAbility()
{
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		Super::StartAbility();
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false, false, true);
	}
}


void UAbComp_Invincibility::ApplyInvincibility()
{
	Cast<AMainCharacter_Warrior>(PlayerRef)->SetArmor(GetEnhancedArmor());
	FinishAbilityCast();
}


void UAbComp_Invincibility::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	SetAbilityActive(false);
	StartCooldown();
}


void UAbComp_Invincibility::CreateIcon()
{
	//PlayerRef->CreateAbilityIconWithAmount(GetEnhancedArmor(), GetIcon(), PlayerRef->StatsComp, Keyword);
}


void UAbComp_Invincibility::UpdateAbilityDescription()
{
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Make yourself invincible")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Make yourself invincible"
		"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f\nArmor: %.2f\n\nDefault armor: %.2f\nAP modifier: +%.2f"),
		CurrentAbilityLevel, ManaCost, CooldownDuration,
		GetEnhancedArmor(), Armor,
		GetEnhancedArmor() - Armor));
	}
}


void UAbComp_Invincibility::UpdateUpgradeDescription()
{
	const FInvincibilityPropertiesData* NextLevelData = GetAbilityData<FInvincibilityPropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nArmor: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s"),
		ManaCost, NextLevelData->ManaCost,
		Armor, NextLevelData->Armor,
		CooldownDuration, NextLevelData->CooldownDuration));
}


void UAbComp_Invincibility::SetAbilityData(const int32 Level)
{
	const FInvincibilityPropertiesData* Data = GetAbilityData<FInvincibilityPropertiesData>(Level);
	if (!Data) return;
	SetArmor(Data->Armor);
	SetCommonAbilityProperties(Data);
}


float UAbComp_Invincibility::GetEnhancedArmor() const{return Armor + (Armor * PlayerRef->GetAbilityPowerPercent());}