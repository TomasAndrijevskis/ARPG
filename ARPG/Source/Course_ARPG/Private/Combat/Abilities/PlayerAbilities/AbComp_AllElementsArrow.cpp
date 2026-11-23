
#include "Combat/Abilities/PlayerAbilities/AbComp_AllElementsArrow.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_AllElementsArrow.h"
#include  "Data/Abilities/AllElementsArrowPropertiesData.h"
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
	if (CurrentAbilityLevel == 0) SetAbilityDescription(FString::Printf(TEXT("Shoot an overenchanted arrow")));
	else
	{
		SetAbilityDescription(FString::Printf(TEXT("Shoot an overenchanted arrow"
		"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nDuration: %.2f s\nDamage per tick: %.2f\n\nDefault damage: %.2f\nAP modifier: +%.2f"),
		CurrentAbilityLevel, ManaCost, CooldownDuration, AbilityDuration,
		GetEnhancedEffectDamage(), EffectDamage,
		GetEnhancedEffectDamage() - EffectDamage));
	}
}


void UAbComp_AllElementsArrow::UpdateUpgradeDescription()
{
	const FAllElementsArrowPropertiesData* NextLevelData = GetAbilityData<FAllElementsArrowPropertiesData>(CurrentAbilityLevel + 1);
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s\nDuration: %.2f s -> %.2f s\nDamage: %.2f -> %.2f"),
		ManaCost, NextLevelData->ManaCost,
		CooldownDuration, NextLevelData->CooldownDuration,
		AbilityDuration, NextLevelData->AbilityDuration,
		EffectDamage, NextLevelData->EffectDamage));
}


void UAbComp_AllElementsArrow::SetAbilityData(const int32 Level)
{
	const FAllElementsArrowPropertiesData* Data = GetAbilityData<FAllElementsArrowPropertiesData>(Level);
	if (!Data) return;
	SetEffectDamage(Data->EffectDamage);
	SetCommonAbilityProperties(Data);
}


float UAbComp_AllElementsArrow::GetEnhancedEffectDamage() const{return EffectDamage + EffectDamage * PlayerRef->GetAbilityPowerPercent();}