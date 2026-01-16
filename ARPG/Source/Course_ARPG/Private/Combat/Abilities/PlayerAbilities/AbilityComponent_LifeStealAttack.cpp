
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_LifeStealAttack.h"
#include "Characters/Player/MainCharacter_Warrior.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Components/StatsComponent.h"
#include "Components/TraceComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


void UAbilityComponent_LifeStealAttack::BeginPlay()
{
	Super::BeginPlay();
	FighterRef = Cast<IFighter>(GetOwner());
	OnAbilityStartedDelegate.AddDynamic(this, &UAbilityComponent_Base::CreateIcon);
	const AMainCharacter_Warrior* PlayerWarriorRef = Cast<AMainCharacter_Warrior>(PlayerRef);
	if (!PlayerWarriorRef) return;
	PlayerWarriorRef->TraceComp->OnHitDelegate.AddDynamic(this, &UAbilityComponent_LifeStealAttack::HandleLifeStealOnHit);
	SetAbilityData(0);
}


void UAbilityComponent_LifeStealAttack::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		FVector AbilitySocketLocation = SkeletalMeshComp->GetSocketLocation(ParticleSpawnSocketName);
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		float TempDuration = 1 - AnimDuration;
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, ParticleSpawnSocketName, AbilitySocketLocation, FRotator::ZeroRotator,
				FVector3d(.5f, .5f, .5f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true );
		TimerDuration = GetAbilityDuration();
		PlayerRef->StatsComp->ReduceMana(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_LifeStealAttack::FinishAbilityCast, (AnimDuration + TempDuration), false);
	}
}


void UAbilityComponent_LifeStealAttack::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_LifeStealAttack::StartAbilityTimer, 1, true, 1);
}


void UAbilityComponent_LifeStealAttack::OnAbilityTimerFinished()
{
	Super::OnAbilityTimerFinished();

	SetAbilityActive(false);
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
		ParticleComp = nullptr;
	}
}


void UAbilityComponent_LifeStealAttack::HandleLifeStealOnHit()
{
	if (!IsAbilityActive()) return;
	PlayerRef->StatsComp->AddHealth(GetStolenHealthAmount());
}


void UAbilityComponent_LifeStealAttack::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Gives you an ability to steal health\nfrom your enemies."
	"\nCurrent level: %i\n\nMana cost: %.2f\nStolen health: %.2f%% \nCooldown: %.2f s\nDuration: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetStolenHealthPercent() * 100, GetCooldownDuration(), GetAbilityDuration()));
}


void UAbilityComponent_LifeStealAttack::UpdateUpgradeDescription()
{
	const FLifeStealAttackPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nStolen health: %.2f%% -> %.2f%%\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetStolenHealthPercent() * 100, NextLevelData->StolenHealthPercent * 100,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration));
}


FLifeStealAttackPropertiesData* UAbilityComponent_LifeStealAttack::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->LifeStealAttackLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->LifeStealAttackLevels[Level];
}


void UAbilityComponent_LifeStealAttack::SetAbilityData(const int32 Level)
{
	const FLifeStealAttackPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetStolenHealthPercent(Data->StolenHealthPercent);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


float UAbilityComponent_LifeStealAttack::GetStolenHealthPercent() const
{
	return StolenHealthPercent;
}


void UAbilityComponent_LifeStealAttack::SetStolenHealthPercent(const float NewStolenHealthPercent)
{
	StolenHealthPercent = NewStolenHealthPercent;
}


float UAbilityComponent_LifeStealAttack::GetStolenHealthAmount() const
{
	if (!FighterRef) return 0;
	return FighterRef->GetCurrentDamage() * StolenHealthPercent;
}
