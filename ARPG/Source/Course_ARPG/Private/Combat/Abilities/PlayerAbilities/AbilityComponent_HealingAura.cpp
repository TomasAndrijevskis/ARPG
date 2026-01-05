
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_HealingAura.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"
#include "SaveGame/AbilityData.h"


void UAbilityComponent_HealingAura::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Base::CreateIcon);
}


void UAbilityComponent_HealingAura::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && IsEnoughMana())
	{
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		float TempDuration = 1 - AnimDuration;
		FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
		ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
			FVector3d(.5f, .5f, 1.f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );
		
		TimerDuration = GetAbilityDuration();
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_HealingAura::FinishAbilityCast, AnimDuration+TempDuration, false);
	}
}


void UAbilityComponent_HealingAura::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_HealingAura::StartAbilityTimer, 1, true, 1);
}


void UAbilityComponent_HealingAura::StartAbilityTimer()
{
	Super::StartAbilityTimer();
	if (TimerDuration > 0) PlayerRef->StatsComp->AddHealth(HealthRegenAmount);
}


void UAbilityComponent_HealingAura::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	SetAbilityActive(false);
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
		ParticleComp = nullptr;
	}
}


void UAbilityComponent_HealingAura::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon healing aura\nwhich will restore\nyour health"
	"\nCurrent level: %i\n\nMana cost: %.2f\nDuration: %.2f s\nCooldown: %.2f s\nRestored health per tick: %.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetAbilityDuration(), GetCooldownDuration(), GetHealthRegenAmount()));
}


void UAbilityComponent_HealingAura::UpdateUpgradeDescription()
{
	float NextMana = GetManaCost() - (GetManaCost() * .2f);
	float NextCooldown = GetCooldownDuration() - 1 ;
	float NextAbilityDuration = GetAbilityDuration() - 1;
	float NextRegenAmount = GetHealthRegenAmount() + 2.5f;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nAbility duration: %.2f -> %.2f s\nCooldown: %.2f -> %.2f s\nRestored health: %.2f -> %.2f"),
		GetManaCost(), NextMana, GetAbilityDuration(), NextAbilityDuration, GetCooldownDuration(), NextCooldown, GetHealthRegenAmount(), NextRegenAmount));

}


void UAbilityComponent_HealingAura::UpdateAbilityProperties()
{
	Super::UpdateAbilityProperties();
	float NextRegenAmount = GetHealthRegenAmount() + 2.5f;
	SetHealthRegenAmount(NextRegenAmount);
	SetAbilityDuration(GetAbilityDuration() + 1);
}


void UAbilityComponent_HealingAura::SaveCustomProperties(FAbilityData& Data)
{
	Super::SaveCustomProperties(Data);
	Data.CustomProperties.Add("HealthRegenAmount", GetHealthRegenAmount());
}


void UAbilityComponent_HealingAura::LoadCustomProperties(FAbilityData& SavedData)
{
	Super::LoadCustomProperties(SavedData);
	SetHealthRegenAmount(SavedData.CustomProperties.FindRef("HealthRegenAmount"));
}



float UAbilityComponent_HealingAura::GetHealthRegenAmount() const
{
	return HealthRegenAmount;
}


void UAbilityComponent_HealingAura::SetHealthRegenAmount(const float NewAmount)
{
	HealthRegenAmount = NewAmount;
}
