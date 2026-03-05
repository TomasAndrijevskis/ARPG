
#include "Combat/Abilities/PlayerAbilities/AbComp_FireStorm.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/FireStorm.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


void UAbComp_FireStorm::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		SetAbilityActive(true);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_FireStorm::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbComp_FireStorm::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	SpawnFireStorm();
}


void UAbComp_FireStorm::SpawnFireStorm()
{
	if (!PlayerRef) return;
	const FVector PlayerLocation = GetOwner()->GetActorLocation();
	const FVector TargetLocation = PlayerRef->GetTargetLocation(250.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, TargetLocation);
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	FTransform SpawnTransform(SpawnRotation, TargetLocation);
	FireStormRef = GetWorld()->SpawnActorDeferred<AFireStorm>(FireStormClass, SpawnTransform);
	FireStormRef->SetProperties(BurnDuration, GetEnhancedBurnDamage(), BurnRate);
	UGameplayStatics::FinishSpawningActor(FireStormRef, SpawnTransform);
	OnAbilityStartedDelegate.Broadcast();
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
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetAbilityDuration(), GetBurnDuration(),
	GetEnhancedBurnDamage(), GetDefaultBurnDamage(),
	GetEnhancedBurnDamage() - GetDefaultBurnDamage()));
}


void UAbComp_FireStorm::UpdateUpgradeDescription()
{
	const FFireStormPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nBurn damage: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nAbility duration: %.2f -> %.2f s\nBurn duration: %.2f -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDefaultBurnDamage(), NextLevelData->BurnDamage,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration,
		GetBurnDuration(), NextLevelData->BurnDuration));
}


FFireStormPropertiesData* UAbComp_FireStorm::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->FireStormLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->FireStormLevels[Level];
}


void UAbComp_FireStorm::SetAbilityData(const int32 Level)
{
	const FFireStormPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetBurnDuration(Data->BurnDuration);
	SetBurnDamage(Data->BurnDamage);
	SetCommonAbilityProperties(Data);
}


float UAbComp_FireStorm::GetDefaultBurnDamage() const
{
	return BurnDamage;
}


float UAbComp_FireStorm::GetEnhancedBurnDamage() const
{
	return BurnDamage + (BurnDamage * PlayerRef->GetAbilityPowerPercent());
}


void UAbComp_FireStorm::SetBurnDamage(float NewDamage)
{
	BurnDamage = NewDamage;
}


float UAbComp_FireStorm::GetBurnDuration() const
{
	return BurnDuration;
}


void UAbComp_FireStorm::SetBurnDuration(float NewDuration)
{
	BurnDuration = NewDuration;
}