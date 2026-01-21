
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_DamageIncrease.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbilityComponent_DamageIncrease::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Base::CreateIcon);
}


void UAbilityComponent_DamageIncrease::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		const FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
		
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		
		TimerDuration = GetAbilityDuration();
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		float tempDuration = 1.0f - AnimDuration;//анимация не длится 1 секунду, а переделать ее я не могу. это чтобы таймер срабатывал каждую секунду
		
		ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, ParticleSpawnSocketName, AbilitySocketLocation, FRotator::ZeroRotator,
			FVector3d(.3f, .3f, .3f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );
		
		PlayerRef->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_DamageIncrease::FinishAbilityCast, (AnimDuration+tempDuration), false);
	}
}


void UAbilityComponent_DamageIncrease::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_DamageIncrease::StartAbilityTimer, 1, true, 1.f);
}


void UAbilityComponent_DamageIncrease::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	SetAbilityActive(false);
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
		ParticleComp = nullptr;
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
	const FDamageIncreasePropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage multiplier: x %.2f -> x %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDamageMultiplier(), NextLevelData->DamageMultiplier,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration));
}


FDamageIncreasePropertiesData* UAbilityComponent_DamageIncrease::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->DamageIncreaseLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->DamageIncreaseLevels[Level];
}


void UAbilityComponent_DamageIncrease::SetAbilityData(const int32 Level)
{
	const FDamageIncreasePropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetDamageMultiplier(Data->DamageMultiplier);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


float UAbilityComponent_DamageIncrease::GetDamageMultiplier() const
{
	return DamageMultiplier;
}


void UAbilityComponent_DamageIncrease::SetDamageMultiplier(float NewDamageMultiplier)
{
	DamageMultiplier = NewDamageMultiplier;
}