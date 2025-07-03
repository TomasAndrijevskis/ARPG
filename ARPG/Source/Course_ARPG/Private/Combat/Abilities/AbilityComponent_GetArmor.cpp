
#include "Combat/Abilities/AbilityComponent_GetArmor.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "SaveGame/AbilityData.h"
#include "UI/PlayerWidget.h"

void UAbilityComponent_GetArmor::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Base::CreateIcon);
}


void UAbilityComponent_GetArmor::GiveArmor()
{
	if (!CanPlayMontage() || !IsAbilityAvailable()) return;
	
	if (!IsOnCooldown() && !IsAbilityActive() && CheckMana())
	{
		SetAbilityActive(true);
		
		HandlePlayerActions(false);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->StatsComp->SetStatValue(EStats::MaxArmor, Armor);
		PlayerRef->StatsComp->SetStatValue(EStats::Armor, Armor);
		OnAbilityStartedDelegate.Broadcast();
		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_GetArmor::CompleteAbility, AnimDuration, false);
	}
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
	
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1;

	float NextArmor = GetArmor() + (GetArmor() * .4f);
	float NextDamageReduction = GetDamageReductionPercent() + (GetDamageReductionPercent() * .2f);
	

	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nArmor: %.2f -> %.2f\nDamage reduction: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextMana, GetArmor(), NextArmor,  GetDamageReductionPercent() * 100, NextDamageReduction * 100, GetCooldownDuration(), NextCooldown));
}


void UAbilityComponent_GetArmor::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();
	
	float NewArmor = GetArmor() + (GetArmor() * .4f);
	float NewReductionPercent = GetDamageReductionPercent() + (GetDamageReductionPercent() * .2f);
	//round -> 0.22
	// *1000 -> 0.333 ...
	SetArmor(FMath::RoundToFloat(NewArmor * 100.0f) / 100.0f);
	SetDamageReductionPercent(FMath::RoundToFloat(NewReductionPercent * 100.0f) / 100.0f);
}


void UAbilityComponent_GetArmor::SaveCustomProperties(FAbilityData& Data) 
{
	Super::SaveCustomProperties(Data);
	Data.CustomProperties.Add("Armor", GetArmor());
	Data.CustomProperties.Add("DamageReductionPercent", GetDamageReductionPercent());
}


void UAbilityComponent_GetArmor::LoadCustomProperties(FAbilityData& Data)
{
	Super::LoadCustomProperties(Data);
	SetArmor(Data.CustomProperties.FindRef("Armor"));
	SetDamageReductionPercent(Data.CustomProperties.FindRef("DamageReductionPercent"));
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


