
#include "Combat/Abilities/PlayerAbilities/AbComp_ArrowBarrage.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/PlayerAbilities/ArrowBarrage.h"
#include "Data/Abilities/ArrowBarragePropertiesData.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_ArrowBarrage::StartAbility()
{
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		Super::StartAbility();
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false, false, false);
	}
}


void UAbComp_ArrowBarrage::SpawnArrowBarrage()
{
	if (!ArrowBarrageClass) return;
	FTransform SpawnTransform = GetSpawnTransform(250.f);
	ArrowBarrageRef = GetWorld()->SpawnActorDeferred<AArrowBarrage>(ArrowBarrageClass, SpawnTransform);
	ArrowBarrageRef->SetParams(Damage, GetAbilityDuration(), DamageRate);
	UGameplayStatics::FinishSpawningActor(ArrowBarrageRef, SpawnTransform);
	ArrowBarrageRef->OnParticleFinishedDelegate.AddUObject(this, &UAbComp_ArrowBarrage::OnAbilityTimerFinished);
	FinishAbilityCast();
}


void UAbComp_ArrowBarrage::OnAbilityTimerFinished()
{
	SetAbilityActive(false);
	StartCooldown();
	if (ArrowBarrageRef) ArrowBarrageRef = nullptr;
}


void UAbComp_ArrowBarrage::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon arrow barrage"
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s\nDamage: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
	CurrentAbilityLevel, ManaCost, CooldownDuration, AbilityDuration,
	GetEnhancedDamage(), Damage,
	GetEnhancedDamage() - Damage));
}


void UAbComp_ArrowBarrage::UpdateUpgradeDescription()
{
	const FArrowBarragePropertiesData* NextLevelData = GetAbilityData<FArrowBarragePropertiesData>(CurrentAbilityLevel);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nDuration: %.2f -> %.2f s\nDamage: %.2f -> %.2f"),
		ManaCost, NextLevelData->ManaCost,
		CooldownDuration, NextLevelData->CooldownDuration,
		AbilityDuration, NextLevelData->AbilityDuration,
		Damage, NextLevelData->Damage));
}


void UAbComp_ArrowBarrage::SetAbilityData(const int32 Level)
{
	const FArrowBarragePropertiesData* Data = GetAbilityData<FArrowBarragePropertiesData>(Level);
	if (!Data) return;
	SetDamage(Data->Damage);
	SetCommonAbilityProperties(Data);
}


float UAbComp_ArrowBarrage::GetEnhancedDamage() const{ return Damage + Damage * PlayerRef->GetAbilityPowerPercent();}