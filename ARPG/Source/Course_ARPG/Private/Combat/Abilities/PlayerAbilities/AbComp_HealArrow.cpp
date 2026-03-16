
#include "Combat/Abilities/PlayerAbilities/AbComp_HealArrow.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Combat/Projectiles/Arrow/Projectile_HealingArrow.h"
#include "Data/Abilities/AbilitiesUpgradeData.h"
#include "Kismet/KismetMathLibrary.h"



void UAbComp_HealArrow::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityFinishedDelegate.AddUObject(this, &UAbComp_HealArrow::OnAbilityFinished);
}


void UAbComp_HealArrow::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana() && PlayerRef)
	{
		SetAbilityActive(true);
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::FinishAnimation, AnimDuration, false);
		HandlePlayerActions(false, false, false);
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
	Projectile->SetProjectileOwner(GetOwner());
	Projectile->SetParams(0, AliveTime, 0);
	Projectile->StartAliveTimer();
	Projectile->OnHitEnemy.AddUObject(this, &UAbComp_HealArrow::OnHitEnemy);
	Projectile->OnHitNothing.AddUObject(this, &UAbComp_HealArrow::OnHitNothing);
	FinishAbilityCast();
}


void UAbComp_HealArrow::OnHitEnemy(AEnemyCharacter* NewEnemyRef)
{
	SetAbilityActive(false);
	EnemyRef = NewEnemyRef;
	EnemyRef->OnEnemyDiedDelegate.AddUObject(this, &UAbComp_HealArrow::OnEnemyDied);
	TimerDuration = GetAbilityDuration();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbComp_HealArrow::StartAbilityTimer, 1, true, 1);
	CreateIcon();
}


void UAbComp_HealArrow::OnHitNothing()
{
	SetAbilityActive(false);
	StartCooldown();
}


void UAbComp_HealArrow::StartAbilityTimer()
{
	Super::StartAbilityTimer();
}


void UAbComp_HealArrow::HandleEnemyHit(float Damage)
{
	float HealthToAdd = Damage * HealPercent;
	if (HealthToAdd <= HealCap)
	{
		PlayerRef->HealPlayer(HealthToAdd);
		HealCap -= HealthToAdd;
	}
	else
	{
		float RemainingHealAmount = HealCap;
		float RemainingDamage = HealthToAdd - HealCap;
		PlayerRef->HealPlayer(RemainingHealAmount);
		PlayerRef->ReduceHealth(RemainingDamage, EnemyRef);
		OnAbilityFinishedDelegate.Broadcast();
		InterruptAbilityTimer();
	}
}


void UAbComp_HealArrow::OnAbilityFinished()
{
	if (EnemyRef) EnemyRef->SetCanApplyDamage(true);
	EnemyRef = nullptr;
	HealCap = MaxHealCap;
}


void UAbComp_HealArrow::InterruptAbilityTimer()
{
	TimerDuration = 0;
}


void UAbComp_HealArrow::OnEnemyDied(AEnemyCharacter* Enemy)
{
	OnAbilityFinishedDelegate.Broadcast();
	InterruptAbilityTimer();
}


void UAbComp_HealArrow::CreateIcon()
{
	PlayerRef->CreateAbilityIconWithTimer(GetAbilityDuration(), GetIcon(), this);
}


void UAbComp_HealArrow::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Mark an enemy and\nheal from their attacks"
	"\nCurrent level: %i\n\nMana cost: %.2f\nCooldown: %.2f s\nAbility duration: %.2f s\nMax heal amount: %.2f\nHeal percent: %.2f\n\nDefault heal percent: %.2f%%\nAP modifier: +%.2f%%"),
	GetCurrentAbilityLevel(), GetManaCost(), GetCooldownDuration(), GetAbilityDuration(), GetHealCap(),
	GetEnhancedHealPercent(), GetDefaultHealPercent(),
	GetEnhancedHealPercent() - GetDefaultHealPercent()));
}


void UAbComp_HealArrow::UpdateUpgradeDescription()
{
	const FHealArrowPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f\nCooldown: %.2f -> %.2f s\nAbility duration: %.2f -> %.2f s\nMax heal amount: %.2f -> %.2f\nHeal percent: %.2f%% -> %.2f%%"),
		GetManaCost(), NextLevelData->ManaCost,
		GetCooldownDuration(), NextLevelData->CooldownDuration,
		GetAbilityDuration(), NextLevelData->AbilityDuration,
		GetHealCap(), NextLevelData->HealCap,
		GetDefaultHealPercent(), NextLevelData->HealPercent));
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
	SetHealCap(Data->HealCap);
	SetHealPercent(Data->HealPercent);
	SetCommonAbilityProperties(Data);
}


void UAbComp_HealArrow::SetHealCap(float NewHealCap){MaxHealCap = NewHealCap; HealCap = MaxHealCap;}

void UAbComp_HealArrow::SetHealPercent(float NewHealPercent){HealPercent = NewHealPercent;}

float UAbComp_HealArrow::GetHealCap() const{return MaxHealCap;}

float UAbComp_HealArrow::GetDefaultHealPercent() const{return HealPercent;}

float UAbComp_HealArrow::GetEnhancedHealPercent() const{ return HealPercent + HealPercent * PlayerRef->GetAbilityPowerPercent(); }