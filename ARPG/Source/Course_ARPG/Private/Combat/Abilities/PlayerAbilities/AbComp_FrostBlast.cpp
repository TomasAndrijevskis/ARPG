
#include "Combat/Abilities/PlayerAbilities/AbComp_FrostBlast.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/PlayerAbilities/FrostBlastRange.h"
#include "Data/Abilities/FrostBlastPropertiesData.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_FrostBlast::StartAbility()
{
	if (CanUseAbility())
	{
		if (!Warmup || !FrostBlastClass) return;
		Super::StartAbility();
		SetAbilityActive(true);
		SpawnEffect(Warmup);
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false, false, false);
	}
}


void UAbComp_FrostBlast::SpawnFrostBlast()
{
	const FVector SpawnLocation = GetOwner()->GetActorLocation();
	const FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	AFrostBlastRange* FrostBlastRangeActor = GetWorld()->SpawnActor<AFrostBlastRange>(FrostBlastClass, SpawnLocation, SpawnRotation, Params);
	if (!FrostBlastRangeActor) return;
	FrostBlastRangeActor->AttachToComponent(PlayerRef->GetRootComponent(),FAttachmentTransformRules::SnapToTargetNotIncludingScale);
	FrostBlastRangeActor->SetParams(GetEnhancedDamage(), SlowDuration);
	FrostBlastRangeActor->CheckEnemiesInRange();
	FinishAbilityCast();
}


void UAbComp_FrostBlast::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	if (!InitialBlast) return;
	SpawnEffect(InitialBlast);
	SetAbilityActive(false);
	StartCooldown();
}


void UAbComp_FrostBlast::SpawnEffect(const TObjectPtr<UParticleSystem>& VisualEffect)
{
	SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	UGameplayStatics::SpawnEmitterAttached(VisualEffect, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
	FVector3d(1, 1, 1),EAttachLocation::KeepWorldPosition,true, EPSCPoolMethod::None, true);
}


void UAbComp_FrostBlast::UpdateAbilityDescription()
{
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Summon blizzard which\nwill slow your enemies")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Summon blizzard which\nwill slow your enemies"
		"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nSlow duration: %.2f s\nDamage: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
		CurrentAbilityLevel, ManaCost, CooldownDuration, SlowDuration,
		GetEnhancedDamage(), Damage,
		GetEnhancedDamage() - Damage));
	}
}


void UAbComp_FrostBlast::UpdateUpgradeDescription()
{
	const FFrostBlastPropertiesData* NextLevelData = GetAbilityData<FFrostBlastPropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nDamage: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nSlow duration: %.2f -> %.2f s"),
		ManaCost, NextLevelData->ManaCost,
		Damage, NextLevelData->Damage,
		CooldownDuration, NextLevelData->CooldownDuration,
		SlowDuration, NextLevelData->SlowDuration));
}


void UAbComp_FrostBlast::SetAbilityData(const int32 Level)
{
	const FFrostBlastPropertiesData* Data = GetAbilityData<FFrostBlastPropertiesData>(Level);
	if (!Data) return;
	SetDamage(Data->Damage);
	SetSlowDuration(Data->SlowDuration);
	SetCommonAbilityProperties(Data);
}


float UAbComp_FrostBlast::GetEnhancedDamage() const{return Damage + Damage * PlayerRef->GetAbilityPowerPercent();}