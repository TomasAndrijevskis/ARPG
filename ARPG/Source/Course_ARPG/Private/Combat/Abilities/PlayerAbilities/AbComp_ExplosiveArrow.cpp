
#include "Combat/Abilities/PlayerAbilities/AbComp_ExplosiveArrow.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_ExplosiveArrow.h"
#include "Data/Abilities/ExplosiveArrowPropertiesData.h"
#include "Kismet/KismetMathLibrary.h"


void UAbComp_ExplosiveArrow::StartAbility()
{
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		Super::StartAbility();
		TempNumberOfShots = NumberOfShots;
		PlayerRef->ReduceMana(GetManaCost());
		HandlePlayerActions(false,false,false);
		HandleAnimation();
	}
}


void UAbComp_ExplosiveArrow::HandleAnimation()
{
	if (TempNumberOfShots > 0)
	{
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		TempNumberOfShots--;
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_ExplosiveArrow::HandleAnimation, AnimDuration, false);
	}
	else
	{
		GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
		TempNumberOfShots = NumberOfShots;
		FinishAbilityCast();
	}
}


void UAbComp_ExplosiveArrow::SpawnArrow()
{
	if (!ArrowClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector TargetLocation = PlayerRef->GetTargetLocation(1000.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	if (AProjectile_ExplosiveArrow* Projectile = GetWorld()->SpawnActor<AProjectile_ExplosiveArrow>(ArrowClass, SpawnLocation, SpawnRotation))
	{
		Projectile->SetProjectileOwner(GetOwner());
		Projectile->SetParams(ExplosionDamage, AliveTime);
		Projectile->StartAliveTimer();
	}
}


void UAbComp_ExplosiveArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	SetAbilityActive(false);
	StartCooldown();
}


void UAbComp_ExplosiveArrow::UpdateAbilityDescription()
{
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Shoot explosive arrow")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Shoot explosive arrow"
		"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nNumbers of shots: %i\nExplosion damage: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
		CurrentAbilityLevel, ManaCost, CooldownDuration, NumberOfShots,
		GetEnhancedDamage(), ExplosionDamage,
		GetEnhancedDamage() - ExplosionDamage));
	}
}


void UAbComp_ExplosiveArrow::UpdateUpgradeDescription()
{
	const FExplosiveArrowPropertiesData* NextLevelData = GetAbilityData<FExplosiveArrowPropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nNumber of shots: %i -> %i\nExplosion damage: %.2f -> %.2f"),
		ManaCost, NextLevelData->ManaCost,
		CooldownDuration, NextLevelData->CooldownDuration,
		NumberOfShots, NextLevelData->NumberOfShots,
		ExplosionDamage, NextLevelData->ExplosionDamage));
}


void UAbComp_ExplosiveArrow::SetAbilityData(const int32 Level)
{
	const FExplosiveArrowPropertiesData* Data = GetAbilityData<FExplosiveArrowPropertiesData>(Level);
	if (!Data) return;
	SetNumberOfShots(Data->NumberOfShots);
	SetDamage(Data->ExplosionDamage);
	SetCommonAbilityProperties(Data);
}


float UAbComp_ExplosiveArrow::GetEnhancedDamage() const{return ExplosionDamage + ExplosionDamage * PlayerRef->GetAbilityPowerPercent();}