
#include "Combat/Abilities/PlayerAbilities/AbComp_FireStorm.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/PlayerAbilities/FireStorm.h"
#include "Data/Abilities/FireStormPropertiesData.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_FireStorm::StartAbility()
{
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		Super::StartAbility();
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false, false, false);
	}
}


void UAbComp_FireStorm::SpawnFireStorm()
{
	if (!PlayerRef) return;
	FTransform SpawnTransform = GetSpawnTransform(250.f);
	FireStormRef = GetWorld()->SpawnActorDeferred<AFireStorm>(FireStormClass, SpawnTransform);
	FireStormRef->SetParams(BurnDuration, GetEnhancedBurnDamage(), BurnRate);
	UGameplayStatics::FinishSpawningActor(FireStormRef, SpawnTransform);
	FinishAbilityCast();
}


void UAbComp_FireStorm::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_FireStorm::StartAbilityTimer, 1, true);
}


void UAbComp_FireStorm::OnAbilityTimerFinished()
{
	SetAbilityActive(false);
	if (FireStormRef)
	{
		FireStormRef->Destroy();
		FireStormRef = nullptr;
	}
}


void UAbComp_FireStorm::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon fire storm which\nwill burn your enemies"
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nAbility duration: %.2f s\nBurning duration: %.2f s\nBurn damage: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
	CurrentAbilityLevel, ManaCost, CooldownDuration, AbilityDuration, BurnDuration,
	GetEnhancedBurnDamage(), BurnDamage,
	GetEnhancedBurnDamage() - BurnDamage));
}


void UAbComp_FireStorm::UpdateUpgradeDescription()
{
	const FFireStormPropertiesData* NextLevelData = GetAbilityData<FFireStormPropertiesData>(CurrentAbilityLevel);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nBurn damage: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nAbility duration: %.2f -> %.2f s\nBurn duration: %.2f -> %.2f s"),
		ManaCost, NextLevelData->ManaCost,
		BurnDamage, NextLevelData->BurnDamage,
		CooldownDuration, NextLevelData->CooldownDuration,
		AbilityDuration, NextLevelData->AbilityDuration,
		BurnDuration, NextLevelData->BurnDuration));
}


void UAbComp_FireStorm::SetAbilityData(const int32 Level)
{
	const FFireStormPropertiesData* Data = GetAbilityData<FFireStormPropertiesData>(Level);
	if (!Data) return;
	SetBurnDuration(Data->BurnDuration);
	SetBurnDamage(Data->BurnDamage);
	SetCommonAbilityProperties(Data);
}


float UAbComp_FireStorm::GetEnhancedBurnDamage() const{return BurnDamage + BurnDamage * PlayerRef->GetAbilityPowerPercent();}