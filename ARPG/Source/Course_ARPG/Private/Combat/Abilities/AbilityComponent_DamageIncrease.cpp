
#include "Combat/Abilities/AbilityComponent_DamageIncrease.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "SaveGame/AbilityData.h"


void UAbilityComponent_DamageIncrease::BeginPlay()
{
	Super::BeginPlay();
}


void UAbilityComponent_DamageIncrease::StartAbilityTimer()
{
	Super::StartAbilityTimer();
}


void UAbilityComponent_DamageIncrease::IncreaseDamage()
{
	if (!CanPlayMontage() || !GetAbilityAvailability()) return;

	if (!bIsDamageIncreased && !bIsOnCooldown && CheckMana())
	{
		FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
		
		OnAbilityStartedDelegate.Broadcast();
		TimerDuration = GetAbilityDuration();
		
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		float tempDuration = 1.0f - AnimDuration;//анимация не длится 1 секунду, а переделать ее я не могу. это чтобы таймер срабатывал каждую секунду
		
		ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, ParticleSpawnSocketName, AbilitySocketLocation, FRotator::ZeroRotator,
			FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );//спавн эффекта

		bIsDamageIncreased = true;

		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_DamageIncrease::StartAbilityTimer, (AnimDuration+tempDuration), true);
	}
}


void UAbilityComponent_DamageIncrease::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	
	bIsDamageIncreased = false;
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
	}
}


void UAbilityComponent_DamageIncrease::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Increase your current damage\n for a certain period of time\n to slay your enemies faster."
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage multiplier: x %.2f\nCooldown: %.2f s\nDuration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetDamageMultiplier(), GetCooldownDuration(), GetAbilityDuration()));
}


void UAbilityComponent_DamageIncrease::UpdateUpgradeDescription()
{
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1;
	float NextDuration = GetAbilityDuration() + 1;
	
	float NextMultiplier = GetDamageMultiplier() + (GetDamageMultiplier() * .2f);
	
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage multiplier: x %.2f -> x %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextMana, GetDamageMultiplier(), NextMultiplier, GetCooldownDuration(), NextCooldown, GetAbilityDuration(), NextDuration));
}


void UAbilityComponent_DamageIncrease::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();
	
	float NewDamageMultiplier = GetDamageMultiplier() + GetDamageMultiplier() * .2f;
	
	SetDamageMultiplier(FMath::RoundToFloat(NewDamageMultiplier * 100.0f) / 100.0f);
}

void UAbilityComponent_DamageIncrease::SaveCustomProperties(FAbilityData& Data) 
{
	Super::SaveCustomProperties(Data);
	Data.CustomProperties.Add("DamageMultiplier", GetDamageMultiplier());
}

void UAbilityComponent_DamageIncrease::LoadCustomProperties(FAbilityData& Data)
{
	Super::LoadCustomProperties(Data);
	SetDamageMultiplier(Data.CustomProperties.FindRef("DamageMultiplier"));
}



float UAbilityComponent_DamageIncrease::GetDamageMultiplier()
{
	return DamageMultiplier;
}


void UAbilityComponent_DamageIncrease::SetDamageMultiplier(float NewDamageMultiplier)
{
	DamageMultiplier = NewDamageMultiplier;
}


bool UAbilityComponent_DamageIncrease::GetIsDamageIncreased()
{
	return bIsDamageIncreased;
}


