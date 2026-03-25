
#include "Combat/Abilities/PlayerAbilities/AbComp_ExplosiveArrow.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_ExplosiveArrow.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
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
	AProjectile_ExplosiveArrow* Projectile = GetWorld()->SpawnActor<AProjectile_ExplosiveArrow>(ArrowClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetProjectileOwner(GetOwner());
	Projectile->SetParams(ExplosionDamage, AliveTime, 0);
	Projectile->StartAliveTimer();
}


void UAbComp_ExplosiveArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	SetAbilityActive(false);
	StartCooldown();
}


FExplosiveArrowPropertiesData* UAbComp_ExplosiveArrow::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->ExplosiveArrowLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->ExplosiveArrowLevels[Level];
}


void UAbComp_ExplosiveArrow::SetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return;
	FExplosiveArrowPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetNumberOfShots(Data->NumberOfShots);
	SetDamage(Data->ExplosionDamage);
	SetCommonAbilityProperties(Data);
}


void UAbComp_ExplosiveArrow::SetNumberOfShots(int NewNumberOfShots){NumberOfShots = NewNumberOfShots;}

void UAbComp_ExplosiveArrow::SetDamage(float NewDamage){ExplosionDamage = NewDamage;}

float UAbComp_ExplosiveArrow::GetDefaultDamage() const{return ExplosionDamage;}

float UAbComp_ExplosiveArrow::GetEnhancedDamage() const{return ExplosionDamage + ExplosionDamage * PlayerRef->GetAbilityPowerPercent();}

int UAbComp_ExplosiveArrow::GetNumberOfShots() const{return NumberOfShots;}