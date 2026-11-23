
#include "Combat/Abilities/PlayerAbilities/AbComp_DamageIncrease.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/Abilities/DamageIncreasePropertiesData.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbComp_DamageIncrease::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_DamageIncrease::StartAbility()
{
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		Super::StartAbility();
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false, false, true);
	}
}


void UAbComp_DamageIncrease::SpawnParticle()
{
	const FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
	ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, ParticleSpawnSocketName, AbilitySocketLocation, FRotator::ZeroRotator,
			FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );
	FinishAbilityCast();
}


void UAbComp_DamageIncrease::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_DamageIncrease::StartAbilityTimer, 1, true, 1.f);
}


void UAbComp_DamageIncrease::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	SetAbilityActive(false);
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
		ParticleComp = nullptr;
	}
}


void UAbComp_DamageIncrease::UpdateAbilityDescription()
{
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Increase your current damage\nfor a certain period of time")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Increase your current damage\nfor a certain period of time"
		"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s\nDamage multiplier: x%.2f\n\nDefault multiplier: x%.2f\nAP modifier: +%.2f"),
		CurrentAbilityLevel, ManaCost, CooldownDuration, AbilityDuration,
		GetEnhancedDamageMultiplier(), DamageMultiplier,
		GetEnhancedDamageMultiplier() - DamageMultiplier));
	}
}


void UAbComp_DamageIncrease::UpdateUpgradeDescription()
{
	const FDamageIncreasePropertiesData* NextLevelData = GetAbilityData<FDamageIncreasePropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage multiplier: x %.2f -> x %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		ManaCost, NextLevelData->ManaCost,
		DamageMultiplier, NextLevelData->DamageMultiplier,
		CooldownDuration, NextLevelData->CooldownDuration,
		AbilityDuration, NextLevelData->AbilityDuration));
}


void UAbComp_DamageIncrease::SetAbilityData(const int32 Level)
{
	const FDamageIncreasePropertiesData* Data = GetAbilityData<FDamageIncreasePropertiesData>(Level);
	if (!Data) return;
	SetDamageMultiplier(Data->DamageMultiplier);
	SetCommonAbilityProperties(Data);
}


float UAbComp_DamageIncrease::GetEnhancedDamageMultiplier() const{return DamageMultiplier + DamageMultiplier * PlayerRef->GetAbilityPowerPercent();;}