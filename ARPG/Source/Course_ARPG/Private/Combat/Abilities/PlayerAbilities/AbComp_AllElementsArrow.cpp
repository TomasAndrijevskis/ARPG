
#include "Combat/Abilities/PlayerAbilities/AbComp_AllElementsArrow.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_AllElementsArrow.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Kismet/KismetMathLibrary.h"


void UAbComp_AllElementsArrow::StartAbility()
{
	if (CanUseAbility())
	{
		SetAbilityActive(true);
		Super::StartAbility();
		PlayerRef->ReduceMana(GetManaCost());
		float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		HandlePlayerActions(false,false,false);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_AllElementsArrow::FinishAnimation, AnimDuration, false);
	}
}


void UAbComp_AllElementsArrow::FinishAnimation()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	PlayerRef->PlayAnimMontage(ShootMontage);
}


void UAbComp_AllElementsArrow::SpawnArrow()
{
	if (!ArrowClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector TargetLocation = PlayerRef->GetTargetLocation(1000.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_AllElementsArrow* Projectile = GetWorld()->SpawnActor<AProjectile_AllElementsArrow>(ArrowClass, SpawnLocation, SpawnRotation);
	if (Projectile)
	{
		Projectile->SetProjectileOwner(GetOwner());
		Projectile->SetEffectsParams(GetAbilityDuration(), DamageRate);
		Projectile->SetParams(EffectDamage, AliveTime, 0);
		Projectile->StartAliveTimer();
		Projectile->OnHitEnemy.AddUObject(this, &UAbComp_AllElementsArrow::OnHitEnemy);
		Projectile->OnHitNothing.AddUObject(this, &UAbComp_AllElementsArrow::OnHitNothing);
	}
	FinishAbilityCast();
}


void UAbComp_AllElementsArrow::OnHitEnemy(AEnemyCharacter* EnemyRef)
{
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_AllElementsArrow::StartCooldown, GetAbilityDuration(), false);
}


void UAbComp_AllElementsArrow::OnHitNothing()
{
	StartCooldown();
}


void UAbComp_AllElementsArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	SetAbilityActive(false);
}


void UAbComp_AllElementsArrow::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Shoot an overenchanted arrow"
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s\nDamage per tick: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetAbilityDuration(),
	GetEnhancedEffectDamage(), GetDefaultEffectDamage(),
	GetEnhancedEffectDamage() - GetDefaultEffectDamage()));
}


void UAbComp_AllElementsArrow::UpdateUpgradeDescription()
{
	const FAllElementsArrowPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s\nDamage: %.2f -> %.2f"),
		GetManaCost(), NextLevelData->ManaCost,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration,
		GetDefaultEffectDamage(), NextLevelData->EffectDamage));
}


FAllElementsArrowPropertiesData* UAbComp_AllElementsArrow::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->AllElementsArrowLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->AllElementsArrowLevels[Level];
}


void UAbComp_AllElementsArrow::SetAbilityData(const int32 Level)
{
	const FAllElementsArrowPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetEffectDamage(Data->EffectDamage);
	SetCommonAbilityProperties(Data);
}


void UAbComp_AllElementsArrow::SetEffectDamage(float NewEffectDamage){EffectDamage = NewEffectDamage;}

float UAbComp_AllElementsArrow::GetDefaultEffectDamage() const{return EffectDamage;}

float UAbComp_AllElementsArrow::GetEnhancedEffectDamage() const{return EffectDamage + EffectDamage * PlayerRef->GetAbilityPowerPercent();}