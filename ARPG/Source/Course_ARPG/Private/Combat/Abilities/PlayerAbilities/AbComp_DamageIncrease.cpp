
#include "Combat/Abilities/PlayerAbilities/AbComp_DamageIncrease.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbComp_DamageIncrease::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_DamageIncrease::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
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
	SetAbilityDescription(FString::Printf(TEXT("Increase your current damage\n for a certain period of time\n to slay your enemies faster."
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s\nDamage multiplier: x%.2f\n\nDefault multiplier: x%.2f\nAP modifier: +%.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetAbilityDuration(),
	GetEnhancedDamageMultiplier(), GetDefaultDamageMultiplier(),
	GetEnhancedDamageMultiplier() - GetDefaultDamageMultiplier()));
}


void UAbComp_DamageIncrease::UpdateUpgradeDescription()
{
	const FDamageIncreasePropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage multiplier: x %.2f -> x %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDefaultDamageMultiplier(), NextLevelData->DamageMultiplier,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration));
}


FDamageIncreasePropertiesData* UAbComp_DamageIncrease::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->DamageIncreaseLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->DamageIncreaseLevels[Level];
}


void UAbComp_DamageIncrease::SetAbilityData(const int32 Level)
{
	const FDamageIncreasePropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetDamageMultiplier(Data->DamageMultiplier);
	SetCommonAbilityProperties(Data);
}


void UAbComp_DamageIncrease::SetDamageMultiplier(float NewDamageMultiplier){DamageMultiplier = NewDamageMultiplier;}

float UAbComp_DamageIncrease::GetDefaultDamageMultiplier() const{return DamageMultiplier;}

float UAbComp_DamageIncrease::GetEnhancedDamageMultiplier() const{return DamageMultiplier + DamageMultiplier * PlayerRef->GetAbilityPowerPercent();;}