
#include "Combat/Abilities/PlayerAbilities/AbilityComponent_RangeAttack.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Data/AbilitiesUpgradeData.h"
#include "Combat/Abilities/Data/RangeAttackPropertiesData.h"
#include "Combat/Projectiles/RangeAttackProjectile.h"
#include "Components/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include "Particles/ParticleSystemComponent.h"


void UAbilityComponent_RangeAttack::BeginPlay()
{
	Super::BeginPlay();
	OnAbilityFinishedDelegate.AddDynamic(this,&UAbilityComponent_RangeAttack::SpawnProjectile);
	SetAbilityData(0);
}


void UAbilityComponent_RangeAttack::StartAbility()
{
	Super::StartAbility();
	if (CanPlayMontage() && IsAbilityAvailable() && !IsAbilityActive() && !IsOnCooldown() && HasEnoughMana())
	{
		HandlePlayerActions(false);
		SetAbilityActive(true);
		OnAbilityStartedDelegate.Broadcast();
		const float AnimDuration = PlayerRef->PlayAnimMontage(AnimMontage);
		const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
		ParticleComponent = UGameplayStatics::SpawnEmitterAttached(Particle, SkeletalMeshComp, SocketName, SocketLocation, FRotator::ZeroRotator,
			FVector3d(.4f, .4f, .4f),EAttachLocation::KeepWorldPosition,false, EPSCPoolMethod::None, true);
		PlayerRef->StatsComp->OnReduceManaRequestDelegate.Broadcast(GetManaCost());
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_RangeAttack::FinishAbilityCast, AnimDuration/2, false);
	}
}


void UAbilityComponent_RangeAttack::FinishAbilityCast()
{
	Super::FinishAbilityCast();
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UAbilityComponent_RangeAttack::CompleteAbilityAttack, .1, false);
}


void UAbilityComponent_RangeAttack::CompleteAbilityAttack()
{
	HandlePlayerActions(true);
	SetAbilityActive(false);
	GetWorld()->GetTimerManager().ClearTimer(TimerHandle);
	StartCooldown();
	if (ParticleComponent) ParticleComponent->DestroyComponent();
}


void UAbilityComponent_RangeAttack::SpawnProjectile()
{
	if (!GetOwner() || !ProjectileClass) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	const FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	const FVector ForwardDirection = GetOwner()->GetActorForwardVector();
	const FVector TargetLocation = SpawnLocation + ForwardDirection * 1000.0f;
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClass, SpawnLocation, SpawnRotation);
	if (Projectile)
	{
		Projectile->SetStats(GetProjectileDamage(), AliveTime);
		Projectile->StartAliveTimer();
	}
}


void UAbilityComponent_RangeAttack::UpdateAbilityDescription()
{
	SetAbilityDescription(FString::Printf(TEXT("Throw an electric ball in your enemies."
	"\nCurrent level: %i\n\nMana cost: %.2f\nDamage: %.2f\nCooldown: %.2f s"),
	GetCurrentAbilityLevel(), GetManaCost(), GetProjectileDamage(), GetCooldownDuration()));
}


void UAbilityComponent_RangeAttack::UpdateUpgradeDescription()
{
	const FRangeAttackPropertiesData* NextLevelData = GetAbilityData(GetCurrentAbilityLevel());
	if (!NextLevelData) return;
	SetUpgradeDescription(FString::Printf(TEXT("Mana cost: %.2f -> %.2f \nDamage: %.2f -> %.2f\nCooldown: %.2f s -> %.2f s"),
		GetManaCost(), NextLevelData->ManaCost,
		GetProjectileDamage(), NextLevelData->ProjectileDamage,
		GetCooldownDuration(), NextLevelData->CooldownDuration));
}


FRangeAttackPropertiesData* UAbilityComponent_RangeAttack::GetAbilityData(const int32 Level)
{
	if (!AbilitiesUpgradeDataAsset) return nullptr;
	if (!AbilitiesUpgradeDataAsset->RangeAttackLevels.IsValidIndex(Level)) return nullptr;
	return &AbilitiesUpgradeDataAsset->RangeAttackLevels[Level];
}


void UAbilityComponent_RangeAttack::SetAbilityData(const int32 Level)
{
	const FRangeAttackPropertiesData* Data = GetAbilityData(Level);
	if (!Data) return;
	SetProjectileDamage(Data->ProjectileDamage);
	SetCommonAbilityProperties(Data);
	UpdateAbilityDescription();
}


float UAbilityComponent_RangeAttack::GetProjectileDamage() const
{
	return ProjectileDamage;
}


void UAbilityComponent_RangeAttack::SetProjectileDamage(const float NewProjectileDamage)
{
	ProjectileDamage = NewProjectileDamage;
}


