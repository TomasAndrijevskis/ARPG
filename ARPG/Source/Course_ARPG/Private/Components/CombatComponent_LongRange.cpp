
#include "Components/CombatComponent_LongRange.h"
#include "Characters/Player/MainCharacter_Mage.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"


void UCombatComponent_LongRange::ComboAttack()
{
	if (!HasEnoughResource() || !bCanAttack) return;
	Super::ComboAttack();
	CharacterRef->PlayAnimMontage(AttackAnimations[ComboCounter]);
}


void UCombatComponent_LongRange::SpawnProjectile()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(CharacterRef);
	if (!PlayerRef || !GetOwner() || !CurrentProjectileClass) return;
	OnAttackPerformedDelegate.Broadcast(AttackCost);
	FVector SpawnLocation;
	FVector TargetLocation;
	GetLocations(SpawnLocation, TargetLocation, PlayerRef);
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, TargetLocation);
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(CurrentProjectileClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetProjectileOwner(GetOwner());
	Projectile->SetParams(GetDamage(), AliveTime, PlayerRef->GetElementalDamageModificator());
	Projectile->StartAliveTimer();
}


void UCombatComponent_LongRange::GetLocations(FVector& SpawnLocation, FVector& TargetLocation, AMainCharacter_Base* PlayerRef)
{
	if (!PlayerRef) return;
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	SpawnLocation = SpawnPointComp->GetComponentLocation();
	TargetLocation = PlayerRef->GetTargetLocation(1000.f);
}


float UCombatComponent_LongRange::GetDamage()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(CharacterRef);
	if (!PlayerRef) return 0;
	TSubclassOf<UDamageTypeBase> DamageType = PlayerRef->GetDamageType();
	if (DamageType == UPhysicalDamageType::StaticClass()) return PlayerRef->GetPhysicalDamage();
	return PlayerRef->GetMagicalDamage();
}


void UCombatComponent_LongRange::ChangeProjectileClass(TSubclassOf<AActor> &NewProjectileClass){CurrentProjectileClass = NewProjectileClass;}

void UCombatComponent_LongRange::RevertBaseProjectileClass(){CurrentProjectileClass = BaseProjectileClass;}