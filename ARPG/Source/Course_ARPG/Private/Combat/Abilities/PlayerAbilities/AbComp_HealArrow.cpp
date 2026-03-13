
#include "Combat/Abilities/PlayerAbilities/AbComp_HealArrow.h"

#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_HealingArrow.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Kismet/KismetMathLibrary.h"


void UAbComp_HealArrow::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::FinishAnimation, AnimDuration, false);
	}
}


void UAbComp_HealArrow::FinishAnimation()
{
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	PlayerRef->PlayAnimMontage(ShootMontage);
}


void UAbComp_HealArrow::SpawnArrow()
{
	if (!ArrowClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector TargetLocation = PlayerRef->GetTargetLocation(1000.f);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_HealingArrow* Projectile = GetWorld()->SpawnActor<AProjectile_HealingArrow>(ArrowClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetOwner(GetOwner());
	Projectile->SetParams(0, AliveTime, 0);
	Projectile->StartAliveTimer();
	Projectile->OnHitEnemy.AddUObject(this, &UAbComp_HealArrow::OnHitEnemy);
	Projectile->OnHitNothing.AddUObject(this, &UAbComp_HealArrow::OnHitNothing);
	FinishAbilityCast();
}


void UAbComp_HealArrow::OnHitEnemy(AEnemyCharacter* NewEnemyRef)
{
	EnemyRef = NewEnemyRef;
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::StartAbilityTimer, 1, true, 1);
	CreateIcon();
}


void UAbComp_HealArrow::OnHitNothing()
{
	StartCooldown();
}


void UAbComp_HealArrow::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	SetAbilityActive(false);
}


void UAbComp_HealArrow::StartAbilityTimer()
{
	Super::StartAbilityTimer();
}


void UAbComp_HealArrow::CreateIcon()
{
	PlayerRef->CreateAbilityIconWithTimer(GetAbilityDuration(), GetIcon(), this);
	//UE_LOG(LogTemp, Warning, TEXT("Should be icon"));
}


FHealArrowPropertiesData* UAbComp_HealArrow::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->HealArrowLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->HealArrowLevels[Level];
}


void UAbComp_HealArrow::SetAbilityData(const int32 Level)
{
	const FHealArrowPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetCommonAbilityProperties(Data);
}


void UAbComp_HealArrow::HandleEnemyHit(float Damage)
{
	float HealthToAdd = Damage * HealPercent;
	UE_LOG(LogTemp, Error, TEXT("Enemy: %s"), *EnemyRef->GetName());
	UE_LOG(LogTemp, Error, TEXT("HealthToAdd %f"), HealthToAdd);
	HealedAmount += HealthToAdd;
	if (HealCap <= HealedAmount)
	{
		float NewHealth = FMath::Min(HealedAmount, HealCap);
		PlayerRef->HealPlayer(NewHealth);
		OnAbilityFinishedDelegate.Broadcast();
		HealedAmount = 0;
		EnemyRef->SetCanApplyDamage(true);
	}
	else PlayerRef->HealPlayer(HealthToAdd);
}