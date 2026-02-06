
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "Combat/Projectiles/Projectile_Base.h"
#include "Interfaces/Fighter.h"
#include "Kismet/KismetMathLibrary.h"


void UEnemyProjectileComponent::SpawnProjectile()
{
	float ProjectileDamage = GetProjectileDamage();
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp) return;
	const FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	const FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	const FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, PlayerLocation);
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClass, SpawnLocation, SpawnRotation);
	if (!Projectile) return;
	Projectile->SetStats(ProjectileDamage, AliveTime);
	Projectile->StartAliveTimer();
}


float UEnemyProjectileComponent::GetProjectileDamage() const
{
	APawn* PawnRef = Cast<APawn>(GetOwner());
	if (!PawnRef) return 0.f;
	IFighter* FighterRef = Cast<IFighter>(PawnRef);
	if (!FighterRef) return 0.f;
	return FighterRef->GetMagicalDamage();
}