
#include "Components/CombatComponent_LongRange.h"
#include "Characters/Player/MainCharacter_Mage.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"


void UCombatComponent_LongRange::ComboAttack()
{
	if (!HasEnoughResource() || !bCanAttack) return;
	Super::ComboAttack();
	const float AnimDuration = CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
	GetWorld()->GetTimerManager().SetTimer(ProjectileTimerHandle, this, &UCombatComponent_LongRange::SpawnProjectile, AnimDuration / AnimDurationReducer, false);
}


void UCombatComponent_LongRange::ChangeProjectileClass(TSubclassOf<AActor> &NewProjectileClass)
{
	CurrentProjectileClass = NewProjectileClass;
}


void UCombatComponent_LongRange::RevertBaseProjectileClass()
{
	CurrentProjectileClass = BaseProjectileClass;
}


void UCombatComponent_LongRange::SpawnProjectile()
{
	GetWorld()->GetTimerManager().ClearTimer(ProjectileTimerHandle);
	const AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(CharacterRef);
	if (!PlayerRef || !GetOwner() || !CurrentProjectileClass) return;
	OnAttackPerformedDelegate.Broadcast(AttackCost);
	FVector SpawnLocation;
	FVector TargetLocation;
	GetLocations(SpawnLocation, TargetLocation, PlayerRef);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(CurrentProjectileClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetOwner(GetOwner());
	Projectile->SetStats(PlayerRef->GetMagicalDamage(), AliveTime, PlayerRef->GetElementalDamageModificator());
	Projectile->StartAliveTimer();
}


void UCombatComponent_LongRange::GetLocations(FVector& SpawnLocation, FVector& TargetLocation, const AMainCharacter_Base* PlayerRef)
{
	if (!PlayerRef) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	SpawnLocation = SpawnPointComp->GetComponentLocation();
	const FVector ForwardDirection = GetOwner()->GetActorForwardVector();
	if (PlayerRef->IsPlayerLockedOnEnemy() && PlayerRef->GetCurrentTargetActor()) TargetLocation = PlayerRef->GetCurrentTargetActor()->GetActorLocation();
	TargetLocation = SpawnLocation + ForwardDirection * 1000.0f;
}