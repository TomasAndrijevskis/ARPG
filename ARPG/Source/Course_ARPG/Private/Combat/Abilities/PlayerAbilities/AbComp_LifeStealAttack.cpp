
#include "Combat/Abilities/PlayerAbilities/AbComp_LifeStealAttack.h"
#include "Characters/Player/MainCharacter_Base.h"
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
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Gives you an ability to steal\nhealth from your enemies")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Gives you an ability to steal\nhealth from your enemies"
		"\nCurrent level: %i\n\nMana cost: %.2f \nCooldown: %.2f s\nDuration: %.2f s\nStolen health: %.2f%%\n\nDefault stolen health: %.2f%%\nAP modifier: +%.2f%%"),
		CurrentAbilityLevel, ManaCost, CooldownDuration, AbilityDuration,
		GetEnhancedStolenHealthPercent() * 100, StolenHealthPercent * 100,
		(GetEnhancedStolenHealthPercent() - StolenHealthPercent) * 100));
	}
}


void UAbComp_LifeStealAttack::UpdateUpgradeDescription()
{
	const FLifeStealAttackPropertiesData* NextLevelData = GetAbilityData<FLifeStealAttackPropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nStolen health: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		ManaCost, NextLevelData->ManaCost,
		StolenHealthPercent * 100, NextLevelData->StolenHealthPercent * 100,
		CooldownDuration, NextLevelData->CooldownDuration,
		AbilityDuration, NextLevelData->AbilityDuration));
}


void UAbComp_LifeStealAttack::SetAbilityData(const int32 Level)
{
	const FLifeStealAttackPropertiesData* Data = GetAbilityData<FLifeStealAttackPropertiesData>(Level);
	if (!Data) return;
	SetStolenHealthPercent(Data->StolenHealthPercent);
	SetCommonAbilityProperties(Data);
}


float UAbComp_LifeStealAttack::GetEnhancedStolenHealthPercent() const{return StolenHealthPercent + (StolenHealthPercent * PlayerRef->GetAbilityPowerPercent());}

float UAbComp_LifeStealAttack::GetStolenHealthAmount() const{if (!FighterRef) return 0;return FighterRef->GetPhysicalDamage() * GetEnhancedStolenHealthPercent();}