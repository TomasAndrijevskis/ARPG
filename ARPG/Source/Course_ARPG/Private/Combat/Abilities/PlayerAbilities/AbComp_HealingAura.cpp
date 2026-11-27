
#include "Combat/Abilities/PlayerAbilities/AbComp_HealingAura.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/StatsComponent.h"
#include "Data/Abilities/HealingAuraPropertiesData.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbComp_HealingAura::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_HealingAura::StartAbility()
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


void UAbComp_HealingAura::SpawnHealingAura()
{
	if (!SkeletalMeshComp) return;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
		FVector3d(.5f, .5f, 1.f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );
	FinishAbilityCast();
}


void UAbComp_HealingAura::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealingAura::StartAbilityTimer, 1, true, 1);
}


void UAbComp_HealingAura::StartAbilityTimer()
{
	Super::StartAbilityTimer();
	if (TimerDuration > 0)
	{
		if (UStatsComponent* StatsComp = PlayerRef->GetComponentByClass<UStatsComponent>())
		{
			StatsComp->OnAddHealthRequestDelegate.Broadcast(GetEnhancedHealthRegenAmount());
		}
	}
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
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Summon healing aura\nwhich will restore\nyour health")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Summon healing aura\nwhich will restore\nyour health"
		"\nCurrent level: %i\n\nMana cost: %.2f\nDuration: %.2f s\nCooldown: %.2f s\nRestored health per second: %.2f\n\nDefault restored health: %.2f\nAP modifier: +%.2f"),
		CurrentAbilityLevel, ManaCost, AbilityDuration, CooldownDuration,
		GetEnhancedHealthRegenAmount(), HealthRegenAmount,
		GetEnhancedHealthRegenAmount() - HealthRegenAmount));
	}
}


void UAbComp_HealingAura::UpdateUpgradeDescription()
{
	const FHealingAuraPropertiesData* NextLevelData = GetAbilityData<FHealingAuraPropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nAbility duration: %.2f -> %.2f s\nCooldown: %.2f -> %.2f s\nRestored health: %.2f -> %.2f"),
		ManaCost, NextLevelData->ManaCost,
		AbilityDuration, NextLevelData->AbilityDuration,
		CooldownDuration, NextLevelData->CooldownDuration,
		HealthRegenAmount, NextLevelData->HealthRegenAmount));
}


void UAbComp_HealingAura::SetAbilityData(const int32 Level)
{
	const FHealingAuraPropertiesData* Data = GetAbilityData<FHealingAuraPropertiesData>(Level);
	if (!Data) return;
	SetHealthRegenAmount(Data->HealthRegenAmount);
	SetCommonAbilityProperties(Data);
}


float UAbComp_HealingAura::GetEnhancedHealthRegenAmount() const{return HealthRegenAmount + HealthRegenAmount * PlayerRef->GetAbilityPowerPercent();}