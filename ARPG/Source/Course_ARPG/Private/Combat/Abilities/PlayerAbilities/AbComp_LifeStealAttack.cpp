
#include "Combat/Abilities/PlayerAbilities/AbComp_LifeStealAttack.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Data/Abilities/LifeStealAttackPropertiesData.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbComp_LifeStealAttack::BeginPlay()
{
	Super::BeginPlay();
	FighterRef = Cast<IFighter>(GetOwner());
	OnAbilityStartedDelegate.AddUObject(this, &UAbilityComponent_Player::CreateIcon);
}


void UAbComp_LifeStealAttack::StartAbility()
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


void UAbComp_LifeStealAttack::SpawnParticle()
{
	const FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
	ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, ParticleSpawnSocketName, AbilitySocketLocation, FRotator::ZeroRotator,
				FVector3d(.5f, .5f, .5f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );
	FinishAbilityCast();
}


void UAbComp_LifeStealAttack::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_LifeStealAttack::StartAbilityTimer, 1, true, 1);
}


void UAbComp_LifeStealAttack::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();
	SetAbilityActive(false);
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
		ParticleComp = nullptr;
	}
}


void UAbComp_LifeStealAttack::HandleLifeStealOnHit()
{
	if (!IsAbilityActive()) return;
	PlayerRef->HealPlayer(GetStolenHealthAmount());
}


void UAbComp_LifeStealAttack::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Gives you an ability to steal\nhealth from your enemies"
	"\nCurrent level: %i\n\nMana cost: %.2f \nCooldown: %.2f s\nDuration: %.2f s\nStolen health: %.2f%%\n\nDefault stolen health: %.2f%%\nAP modifier: +%.2f%%"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetAbilityDuration(),
	GetEnhancedStolenHealthPercent() * 100, GetDefaultStolenHealthPercent() * 100,
	(GetEnhancedStolenHealthPercent() - GetDefaultStolenHealthPercent()) * 100));
}


void UAbComp_LifeStealAttack::UpdateUpgradeDescription()
{
	const FLifeStealAttackPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nStolen health: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDefaultStolenHealthPercent() * 100, NextLevelData->StolenHealthPercent * 100,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration));
}


FLifeStealAttackPropertiesData* UAbComp_LifeStealAttack::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->LifeStealAttackLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->LifeStealAttackLevels[Level];
}


void UAbComp_LifeStealAttack::SetAbilityData(const int32 Level)
{
	const FLifeStealAttackPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetStolenHealthPercent(Data->StolenHealthPercent);
	SetCommonAbilityProperties(Data);
}


void UAbComp_LifeStealAttack::SetStolenHealthPercent(const float NewStolenHealthPercent){StolenHealthPercent = NewStolenHealthPercent;}

float UAbComp_LifeStealAttack::GetDefaultStolenHealthPercent() const{return StolenHealthPercent;}

float UAbComp_LifeStealAttack::GetEnhancedStolenHealthPercent() const{return StolenHealthPercent + (StolenHealthPercent * PlayerRef->GetAbilityPowerPercent());}

float UAbComp_LifeStealAttack::GetStolenHealthAmount() const{if (!FighterRef) return 0;return FighterRef->GetPhysicalDamage() * GetEnhancedStolenHealthPercent();}