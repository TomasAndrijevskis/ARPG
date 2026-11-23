
#include "Combat/Abilities/PlayerAbilities/AbComp_RangeAttack.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Elemental/Projectile_Lightning.h"
#include "Data/Abilities/RangeAttackPropertiesData.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"


void UAbComp_RangeAttack::StartAbility()
{
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		Super::StartAbility();
		PlayerRef->PlayAnimMontage(AnimMontage);
		PlayerRef->ReduceMana(GetManaCost());
		SpawnParticle();
		HandlePlayerActions(false, false, false);
	}
}


void UAbComp_RangeAttack::SpawnParticle()
{
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	ParticleComp = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
		FVector3d(.4f, .4f, .4f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
}


void UAbComp_RangeAttack::SpawnProjectile()
{
	if (!PlayerRef || !ProjectileClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	const FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector TargetLocation = PlayerRef->GetTargetLocation(1000.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClass, SpawnLocation, SpawnRotation);
	if (Projectile)
	{
		Projectile->SetProjectileOwner(GetOwner());
		Projectile->SetParams(GetEnhancedProjectileDamage(), AliveTime, PlayerRef->GetElementalDamageModificator());
		Projectile->StartAliveTimer();
	}
	FinishAbilityCast();
}


void UAbComp_RangeAttack::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	SetAbilityActive(false);
	StartCooldown();
	if (ParticleComp)
	{
		ParticleComp->DestroyComponent();
		ParticleComp = nullptr;
	}
}


void UAbComp_RangeAttack::UpdateAbilityDescription()
{
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Throw an electric ball\nin your enemies")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Throw an electric ball\nin your enemies"
		"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDamage: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
		CurrentAbilityLevel, ManaCost, CooldownDuration,
		GetEnhancedProjectileDamage(), ProjectileDamage,
		GetEnhancedProjectileDamage() - ProjectileDamage));
	}
}


void UAbComp_RangeAttack::UpdateUpgradeDescription()
{
	const FRangeAttackPropertiesData* NextLevelData = GetAbilityData<FRangeAttackPropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s"),
		ManaCost, NextLevelData->ManaCost,
		ProjectileDamage, NextLevelData->ProjectileDamage,
		CooldownDuration, NextLevelData->CooldownDuration));
}


void UAbComp_RangeAttack::SetAbilityData(const int32 Level)
{
	const FRangeAttackPropertiesData* Data = GetAbilityData<FRangeAttackPropertiesData>(Level);
	if (!Data) return;
	SetProjectileDamage(Data->ProjectileDamage);
	SetCommonAbilityProperties(Data);
}


float UAbComp_RangeAttack::GetEnhancedProjectileDamage() const{return ProjectileDamage + (ProjectileDamage * PlayerRef->GetAbilityPowerPercent());}