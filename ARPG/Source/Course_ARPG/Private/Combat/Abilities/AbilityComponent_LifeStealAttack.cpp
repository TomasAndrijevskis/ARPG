
#include "Combat/Abilities/AbilityComponent_LifeStealAttack.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "SaveGame/AbilityData.h"


void UAbilityComponent_LifeStealAttack::BeginPlay()
{
	Super::BeginPlay();

	FighterRef = Cast<IFighter>(GetOwner());
	
}


float UAbilityComponent_LifeStealAttack::GetStolenHealthAmount()
{
	if (FighterRef)
	{
		float CurrentDamage = FighterRef->GetCurrentDamage();
		return CurrentDamage * StolenHealthPercent;
	}
	return 0;
}


void UAbilityComponent_LifeStealAttack::OnAbilityActivated()
{
	if (!CanPlayMontage() || !IsAbilityAvailable()) return;
	
	if (!IsAbilityActive() && !IsOnCooldown() && CheckMana())
	{
		FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		float TempDuration = 1-AnimDuration;

		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		
		ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, ParticleSpawnSocketName, AbilitySocketLocation, FRotator::ZeroRotator,
				FVector3d(.5f, .5f, .5f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );

		TimerDuration = GetAbilityDuration();
		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_LifeStealAttack::StartAbilityTimer, (AnimDuration + TempDuration), true);
	}
}


void UAbilityComponent_LifeStealAttack::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();

	SetAbilityActive(false);
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
	}
}


void UAbilityComponent_LifeStealAttack::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Gives you an ability to steal health\nfrom your enemies."
	"\nCurrent level: %i\n\nMana cost: %.2f\nStolen health: %.2f%% \nCooldown: %.2f s\nDuration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetStolenHealthPercent() * 100, GetCooldownDuration(), GetAbilityDuration()));
}


void UAbilityComponent_LifeStealAttack::UpdateUpgradeDescription()
{
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1 ;
	float NextDuration = GetAbilityDuration() + 1;
	
	float NextStolenHealth = GetStolenHealthPercent() + (GetStolenHealthPercent() * .2f);
	
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nStolen health: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextMana, GetStolenHealthPercent() * 100, NextStolenHealth * 100, GetCooldownDuration(), NextCooldown, GetAbilityDuration(), NextDuration));
}


void UAbilityComponent_LifeStealAttack::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();
	
	float NewStolenHealthPercent = GetStolenHealthPercent() + (GetStolenHealthPercent() * .2f);
	
	SetStolenHealthPercent(FMath::RoundToFloat(NewStolenHealthPercent * 100.0f) / 100.0f);
}


void UAbilityComponent_LifeStealAttack::SaveCustomProperties(FAbilityData& Data) 
{
	Super::SaveCustomProperties(Data);
	Data.CustomProperties.Add("SetStolenHealthPercent", GetStolenHealthPercent());
}

void UAbilityComponent_LifeStealAttack::LoadCustomProperties(FAbilityData& Data)
{
	Super::LoadCustomProperties(Data);
	SetStolenHealthPercent(Data.CustomProperties.FindRef("SetStolenHealthPercent"));
}



float UAbilityComponent_LifeStealAttack::GetStolenHealthPercent()
{
	return StolenHealthPercent;
}


void UAbilityComponent_LifeStealAttack::SetStolenHealthPercent(float NewStolenHealthPercent)
{
	StolenHealthPercent = NewStolenHealthPercent;
}
