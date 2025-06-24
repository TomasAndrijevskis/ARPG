
#include "Combat/Abilities/AbilityComponent_DamageIncrease.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbilityComponent_DamageIncrease::BeginPlay()
{
	Super::BeginPlay();
}


void UAbilityComponent_DamageIncrease::IncreaseDamage()
{
	if (!CanPlayMontage() || !GetAbilityAvailability()) return;

	//UE_LOG(LogTemp, Error, TEXT("Can play montage: %s"), CanPlayMontage() ? TEXT("True") : TEXT("False"));
	//UE_LOG(LogTemp, Error, TEXT("Ability available: %s"), GetAbilityAvailability() ? TEXT("True") : TEXT("False"));
	
	if (!bIsDamageIncreased && !bIsOnCooldown && CheckMana())
	{
		//DefaultDamage = CharacterRef->StatsComp->GetStatValue(EStats::Strength);
		
		FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
		
		OnAbilityStartedDelegate.Broadcast();
		TimerDuration = GetAbilityDuration();
		
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		float tempDuration = 1.0f - AnimDuration;//анимация не длится 1 секунду, а переделать ее я не могу. это чтобы таймер срабатывал каждую секунду

		//CharacterRef->StatsComp->SetStatValue(EStats::Strength, DefaultDamage*DamageMultiplier);
		
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

	//CharacterRef->StatsComp->SetStatValue(EStats::Strength, DefaultDamage);
	bIsDamageIncreased = false;
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
	}
}


void UAbilityComponent_DamageIncrease::StartAbilityTimer()
{
	Super::StartAbilityTimer();
}


float UAbilityComponent_DamageIncrease::GetDamageMultiplier()
{
	return DamageMultiplier;
}


void UAbilityComponent_DamageIncrease::SetDamageMultiplier(float NewDamageMultiplier)
{
	DamageMultiplier = NewDamageMultiplier;
}


void UAbilityComponent_DamageIncrease::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Increase your current damage\n for a certain period of time\n to slay your enemies faster."
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage multiplier: x %.2f\nCooldown: %.2f s\nDuration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), DamageMultiplier, GetCooldownDuration(), GetAbilityDuration()));
}


void UAbilityComponent_DamageIncrease::UpdateUpgradeDescription()
{
	float NextMana = GetManaCost() - (GetManaCost() * .1f);
	float NextCooldown = GetCooldownDuration() - (GetCooldownDuration() * .1f);
	float NextMultiplier = GetDamageMultiplier() + (GetDamageMultiplier() * .1f);
	float NextDuration = GetAbilityDuration() + (GetAbilityDuration() * .1f);
	
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage multiplier: x %.2f -> x %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextMana, DamageMultiplier, NextMultiplier, GetCooldownDuration(), NextCooldown, GetAbilityDuration(), NextDuration));
}


void UAbilityComponent_DamageIncrease::UpdateAbilityStats()
{
	Super::UpdateAbilityStats();

	SetDamageMultiplier(DamageMultiplier += DamageMultiplier * 0.1f);
	
}
