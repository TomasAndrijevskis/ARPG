
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_FireStorm.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/FireStorm.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"


void UAbilityComponent_FireStorm::StartAbility()
{
	Super::StartAbility();
	if (!CanPlayMontage() || !IsAbilityAvailable()) return;
	if (HasEnoughMana() && !IsAbilityActive() && !IsOnCooldown())
	{
		SetAbilityActive(true);
		
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());

		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_FireStorm::FinishAbilityCast, AnimDuration, false);
	}
}


void UAbilityComponent_FireStorm::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_FireStorm::SpawnFireStorm, .1, false);

}


void UAbilityComponent_FireStorm::SpawnFireStorm()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	const FVector PlayerLocation = GetOwner()->GetActorLocation();
	const FVector ForwardDirection = GetOwner()->GetActorForwardVector();
	const FVector TargetLocation = PlayerLocation + ForwardDirection * 250.0f;
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, TargetLocation);

	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	FTransform SpawnTransform(SpawnRotation, TargetLocation);
	FireStormRef = GetWorld()->SpawnActorDeferred<AFireStorm>(FireStormClass, SpawnTransform);

	if (FireStormRef)
	{
		FireStormRef->SetProperties(BurnDuration, BurnDamage, BurnRate);
		UGameplayStatics::FinishSpawningActor(FireStormRef, SpawnTransform);
	}
	OnAbilityStartedDelegate.Broadcast();
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_FireStorm::StartAbilityTimer, 1, true);
}


void UAbilityComponent_FireStorm::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();

	SetAbilityActive(false);
	if (FireStormRef)
	{
		FireStormRef -> Destroy();
		FireStormRef = nullptr;
	}
}


void UAbilityComponent_FireStorm::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon fire storm which\nwill burn your enemies"
	"\nCurrent level: %i\n\nMana cost: %.2f\nBurn damage per tick: %.2f\nCooldown: %.2f s\nAbility duration: %.2f s\nBurning duration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetBurnDamage(), GetCooldownDuration(), GetAbilityDuration(), GetBurnDuration()));
}


void UAbilityComponent_FireStorm::UpdateUpgradeDescription()
{
	const FFireStormPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nBurn damage per tick: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nAbility duration: %.2f -> %.2f s\nBurn duration: %.2f -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetBurnDamage(), NextLevelData->BurnDamage,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration,
		GetBurnDuration(), NextLevelData->BurnDuration));
}


FFireStormPropertiesData* UAbilityComponent_FireStorm::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->FireStormLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->FireStormLevels[Level];
}


void UAbilityComponent_FireStorm::SetAbilityData(const int32 Level)
{
	const FFireStormPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetBurnDuration(Data->BurnDuration);
	SetBurnDamage(Data->BurnDamage);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


float UAbilityComponent_FireStorm::GetBurnDamage() const
{
	return BurnDamage;
}


void UAbilityComponent_FireStorm::SetBurnDamage(float NewDamage)
{
	BurnDamage = NewDamage;
}


float UAbilityComponent_FireStorm::GetBurnDuration() const
{
	return BurnDuration;
}


void UAbilityComponent_FireStorm::SetBurnDuration(float NewDuration)
{
	BurnDuration = NewDuration;
}