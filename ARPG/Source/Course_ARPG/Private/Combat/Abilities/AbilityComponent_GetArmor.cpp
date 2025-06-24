
#include "Combat/Abilities/AbilityComponent_GetArmor.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"

void UAbilityComponent_GetArmor::BeginPlay()
{
	Super::BeginPlay();
	
}


void UAbilityComponent_GetArmor::GiveArmor()
{
	if (!CanPlayMontage() || !GetAbilityAvailability()) return;
	
	if (!bIsOnCooldown && !bIsCasting && CheckMana())
	{
		bIsCasting = true;
		HandlePlayerActions(false);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->StatsComp->SetStatValue(EStats::MaxArmor, Armor);
		PlayerRef->StatsComp->SetStatValue(EStats::Armor, Armor);
		OnAbilityStartedDelegate.Broadcast();
		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_GetArmor::CompleteAbility, AnimDuration, false);
	}
}


void UAbilityComponent_GetArmor::CompleteAbility()
{
	bIsCasting = false;
	HandlePlayerActions(true);
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	StartCooldown();
}


float UAbilityComponent_GetArmor::GetArmor()
{
	return Armor;
}


void UAbilityComponent_GetArmor::SetArmor(float NewArmor)
{
	Armor = NewArmor;
}


float UAbilityComponent_GetArmor::GetDamageReductionPercent()
{
	return DamageReductionPercent;
}


void UAbilityComponent_GetArmor::SetDamageReductionPercent(float NewDamageReductionPercent)
{
	DamageReductionPercent = NewDamageReductionPercent;
}


void UAbilityComponent_GetArmor::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Give yourself protection."
	"\nCurrent level: %i\n\nMana cost: %.2f\nArmor: %.2f\nDamage reduction: %.2f%%\nCooldown: %.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetArmor(), GetDamageReductionPercent()*100, GetCooldownDuration()));
}


void UAbilityComponent_GetArmor::UpdateUpgradeDescription()
{
	
	float NextMana = GetManaCost() - (GetManaCost() * .1f);
	float NextCooldown = GetCooldownDuration() - (GetCooldownDuration() * .1f);
	float NextArmor = GetArmor() + (GetArmor() * .1f);
	float NextDamageReduction = GetDamageReductionPercent() + (GetDamageReductionPercent() * .1f);
	

	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nArmor: %.2f -> %.2f\nDamage reduction: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextMana, GetArmor(), NextArmor,  GetDamageReductionPercent() * 100, NextDamageReduction * 100, GetCooldownDuration(), NextCooldown));
}


void UAbilityComponent_GetArmor::UpdateAbilityStats()
{
	Super::UpdateAbilityStats();

	SetArmor(Armor += (Armor * 0.1f));
	SetDamageReductionPercent(DamageReductionPercent += (DamageReductionPercent* 0.1f));
}

