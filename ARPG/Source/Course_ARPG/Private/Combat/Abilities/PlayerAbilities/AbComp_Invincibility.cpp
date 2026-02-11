
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
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		SetAbilityActive(true);
		HandlePlayerActions(false);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		Cast<AMainCharacter_Warrior>(PlayerRef)->SetArmor(GetEnhancedArmor());
		OnAbilityStartedDelegate.Broadcast();
		PlayerRef->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_Invincibility::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbComp_Invincibility::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	CompleteAbility();
}


void UAbComp_Invincibility::CreateIcon()
{
	PlayerRef->CreateAbilityIconWithAmount(GetEnhancedArmor(), GetIcon(), PlayerRef->StatsComp, Keyword);
}


void UAbComp_Invincibility::CompleteAbility()
{
	SetAbilityActive(false);
	HandlePlayerActions(true);
	StartCooldown();
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
	const FGetArmorPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nArmor: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDefaultArmor(), NextLevelData->Armor,
		GetCooldownDuration(), NextLevelData->CooldownDuration));
}


FGetArmorPropertiesData* UAbComp_Invincibility::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->GetArmorLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->GetArmorLevels[Level];
}


void UAbComp_Invincibility::SetAbilityData(const int32 Level)
{
	const FGetArmorPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetArmor(Data->Armor);
	SetCommonAbilityProperties(Data);
}


float UAbComp_Invincibility::GetDefaultArmor() const
{
	return Armor;
}


float UAbComp_Invincibility::GetEnhancedArmor() const
{
	return Armor + (Armor * PlayerRef->GetAbilityPowerPercent());
}


void UAbComp_Invincibility::SetArmor(const float NewArmor)
{
	Armor = NewArmor;
}