
#include "Combat/Abilities/PlayerAbilities/AbComp_Invincibility.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Characters/Player/MainCharacter_Warrior.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"


void UAbComp_Invincibility::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_Invincibility::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
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
	PlayerRef->CreateAbilityIconWithAmount(GetEnhancedArmor(), GetIcon(), PlayerRef->StatsComp, Keyword);
}


void UAbComp_Invincibility::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Make yourself invincible."
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f\nArmor: %.2f\n\nDefault armor: %.2f\nAP modifier: +%.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(),
	GetEnhancedArmor(), GetDefaultArmor(),
	GetEnhancedArmor() - GetDefaultArmor()));
}


void UAbComp_Invincibility::UpdateUpgradeDescription()
{
	const FInvincibilityPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nArmor: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDefaultArmor(), NextLevelData->Armor,
		GetCooldownDuration(), NextLevelData->CooldownDuration));
}


FInvincibilityPropertiesData* UAbComp_Invincibility::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->InvincibilityLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->InvincibilityLevels[Level];
}


void UAbComp_Invincibility::SetAbilityData(const int32 Level)
{
	const FInvincibilityPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetArmor(Data->Armor);
	SetCommonAbilityProperties(Data);
}


void UAbComp_Invincibility::SetArmor(const float NewArmor){Armor = NewArmor;}

float UAbComp_Invincibility::GetDefaultArmor() const{return Armor;}

float UAbComp_Invincibility::GetEnhancedArmor() const{return Armor + (Armor * PlayerRef->GetAbilityPowerPercent());}