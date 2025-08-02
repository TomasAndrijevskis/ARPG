
#include "Combat/Abilities/AbilityComponent_FireStorm.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Combat/Abilities/FireStorm.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "SaveGame/AbilityData.h"


void UAbilityComponent_FireStorm::StartAbility()
{
	if (!CanPlayMontage() || !IsAbilityAvailable()) return;
	if (IsEnoughMana() && !IsAbilityActive() && !IsOnCooldown())
	{
		SetAbilityActive(true);
		
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->StatsComp->ReduceMana(GetManaCost());

		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_FireStorm::SpawnFireStorm, AnimDuration, false);
	}
}


void UAbilityComponent_FireStorm::SpawnFireStorm()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	FVector PlayerLocation = GetOwner()->GetActorLocation();
	FVector ForwardDirection = GetOwner()->GetActorForwardVector();
	FVector TargetLocation = PlayerLocation + ForwardDirection * 250.0f;

	FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(PlayerLocation, TargetLocation);

	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	FTransform SpawnTransform(SpawnRotation, TargetLocation);
	FireStormRef = GetWorld()->SpawnActorDeferred<AFireStorm>(FireStormClass, SpawnTransform);

	if (FireStormRef)
	{
		FireStormRef->SetProperties(BurnDuration, BurnDamage);
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
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1 ;
	float NextAbilityDuration = GetAbilityDuration() + 1;
	
	float NextDamage = GetBurnDamage() + 2;
	float NextBurnDuration = GetBurnDuration() + 1;
	
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nBurn damage per tick: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nAbility duration: %.2f -> %.2f s\nBurn duration: %.2f -> %.2f s"),
		GetManaCost(), NextMana, GetBurnDamage(), NextDamage, GetCooldownDuration(), NextCooldown, GetAbilityDuration(), NextAbilityDuration, GetBurnDuration(), NextBurnDuration));

	
}


void UAbilityComponent_FireStorm::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();

	SetAbilityDuration(GetAbilityDuration() + 1);
	SetBurnDamage(GetBurnDamage() + 2);
	SetBurnDuration(GetBurnDuration() + 1);
}


void UAbilityComponent_FireStorm::SaveCustomProperties(FAbilityData& Data)
{
	Super::SaveCustomProperties(Data);
	Data.CustomProperties.Add("BurnDuration", GetBurnDuration());
	Data.CustomProperties.Add("BurnDamage", GetBurnDamage());
}


void UAbilityComponent_FireStorm::LoadCustomProperties(FAbilityData& SavedData)
{
	Super::LoadCustomProperties(SavedData);
	SetBurnDuration(SavedData.CustomProperties.FindRef("BurnDuration"));
	SetBurnDamage(SavedData.CustomProperties.FindRef("BurnDamage"));
}



float UAbilityComponent_FireStorm::GetBurnDamage()
{
	return BurnDamage;
}


void UAbilityComponent_FireStorm::SetBurnDamage(float NewDamage)
{
	BurnDamage = NewDamage;
}


float UAbilityComponent_FireStorm::GetBurnDuration()
{
	return BurnDuration;
}


void UAbilityComponent_FireStorm::SetBurnDuration(float NewDuration)
{
	BurnDuration = NewDuration;
}
