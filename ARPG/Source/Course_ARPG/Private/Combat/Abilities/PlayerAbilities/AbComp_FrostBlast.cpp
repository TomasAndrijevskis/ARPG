
#include "Combat/Abilities/PlayerAbilities/AbComp_FrostBlast.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Combat/Abilities/PlayerAbilities/FrostBlastRange.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_FrostBlast::StartAbility()
{
	Super::StartAbility();
	if (CanUseAbility())
	{
		if (!Warmup || !FrostBlastClass) return;
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


void UAbComp_FrostBlast::SpawnEffect(UParticleSystem* VisualEffect)
{
	SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	UGameplayStatics::SpawnEmitterAttached(VisualEffect, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
	FVector3d(1, 1, 1),EAttachLocation::KeepWorldPosition,true, EPSCPoolMethod::None, true);
}


void UAbComp_FrostBlast::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Summon blizzard which\nwill slow your enemies"
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nSlow duration: %.2f s\nDamage: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetSlowDuration(),
	GetEnhancedDamage(), GetDefaultDamage(),
	GetEnhancedDamage() - GetDefaultDamage()));
}


void UAbComp_FrostBlast::UpdateUpgradeDescription()
{
	const FFrostBlastPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nDamage: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nSlow duration: %.2f -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetDefaultDamage(), NextLevelData->Damage,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetSlowDuration(), NextLevelData->SlowDuration));
}



FFrostBlastPropertiesData* UAbComp_FrostBlast::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->FrostBlastLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->FrostBlastLevels[Level];
}


void UAbComp_FrostBlast::SetAbilityData(const int32 Level)
{
	const FFrostBlastPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetDamage(Data->Damage);
	SetSlowDuration(Data->SlowDuration);
	SetCommonAbilityProperties(Data);
}


void UAbComp_FrostBlast::SetDamage(float NewDamage){Damage = NewDamage;}

void UAbComp_FrostBlast::SetSlowDuration(float NewSlowDuration){SlowDuration = NewSlowDuration;}

float UAbComp_FrostBlast::GetDefaultDamage() const{return Damage;}

float UAbComp_FrostBlast::GetEnhancedDamage() const{return Damage + Damage * PlayerRef->GetAbilityPowerPercent();}

float UAbComp_FrostBlast::GetSlowDuration() const{return SlowDuration;}