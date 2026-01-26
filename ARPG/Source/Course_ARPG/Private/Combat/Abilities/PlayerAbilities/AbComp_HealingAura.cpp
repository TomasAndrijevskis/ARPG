
#include "Combat/Abilities/PlayerAbilities/AbComp_HealingAura.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/Player/AbilitiesUpgradeData.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbComp_HealingAura::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_HealingAura::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		const float TempDuration = 1 - AnimDuration;
		const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
		ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
			FVector3d(.5f, .5f, 1.f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );
		
		TimerDuration = GetAbilityDuration();
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealingAura::FinishAbilityCast, AnimDuration+TempDuration, false);
	}
}


void UAbComp_HealingAura::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealingAura::StartAbilityTimer, 1, true, 1);
}


void UAbComp_HealingAura::StartAbilityTimer()
{
	Super::StartAbilityTimer();
	if (TimerDuration > 0) PlayerRef->Heal(HealthRegenAmount);
}


void UAbComp_HealingAura::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	SetAbilityActive(false);
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
		ParticleComp = nullptr;
	}
}


void UAbComp_HealingAura::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon healing aura\nwhich will restore\nyour health"
	"\nCurrent level: %i\n\nMana cost: %.2f\nDuration: %.2f s\nCooldown: %.2f s\nRestored health per second: %.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetAbilityDuration(), GetCooldownDuration(), GetHealthRegenAmount()));
}


void UAbComp_HealingAura::UpdateUpgradeDescription()
{
	const FHealingAuraPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nAbility duration: %.2f -> %.2f s\nCooldown: %.2f -> %.2f s\nRestored health: %.2f -> %.2f"),
		GetManaCost(), NextLevelData->ManaCost,
		GetAbilityDuration(), NextLevelData->AbilityDuration,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetHealthRegenAmount(), NextLevelData->HealthRegenAmount));

}


FHealingAuraPropertiesData* UAbComp_HealingAura::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->HealingAuraLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->HealingAuraLevels[Level];
}


void UAbComp_HealingAura::SetAbilityData(const int32 Level)
{
	const FHealingAuraPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetHealthRegenAmount(Data->HealthRegenAmount);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


float UAbComp_HealingAura::GetHealthRegenAmount() const
{
	return HealthRegenAmount;
}


void UAbComp_HealingAura::SetHealthRegenAmount(const float NewAmount)
{
	HealthRegenAmount = NewAmount;
}