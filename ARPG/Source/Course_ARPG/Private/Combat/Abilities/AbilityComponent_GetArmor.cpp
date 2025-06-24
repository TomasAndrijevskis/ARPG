
#include "Combat/Abilities/AbilityComponent_GetArmor.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"

void UAbilityComponent_GetArmor::BeginPlay()
{
	Super::BeginPlay();

	SetUpgradeRequirements(FString::Printf(TEXT("Test")));
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


void UAbilityComponent_GetArmor::UpdateDescription()
{
	SetDescription(FString::Printf(TEXT("Give yourself protection."
	"\nCurrent level: %i\n\nMana cost: %.2f\nArmor: %.2f\nDamage reduction: %.2f%%\nCooldown: %.2f"), GetCurrentAbilityLevel(), GetManaCost(), GetArmor(), GetDamageReductionPercent()*100, GetCooldownDuration()));
}

