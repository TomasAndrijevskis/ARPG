


#include "Combat/EnemyProjectileComponent.h"
#include "Combat/Projectile_Base.h"
#include "Kismet/KismetMathLibrary.h"


UEnemyProjectileComponent::UEnemyProjectileComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UEnemyProjectileComponent::SpawnProjectile()
{
	USceneComponent* SpawnPointComp = Cast<USceneComponent>(GetOwner()->GetDefaultSubobjectByName(ComponentName));
	if (!SpawnPointComp)
	{
		return;
	}
	FVector SpawnLocation = SpawnPointComp->GetComponentLocation();
	FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	FRotator SpawnRotation = UKismetMathLibrary::FindLookAtRotation(SpawnLocation, PlayerLocation);
	
	AProjectile_Base* Projectile = GetWorld()->SpawnActor<AProjectile_Base>(ProjectileClass, SpawnLocation, SpawnRotation);

	if (Projectile)
	{
		Projectile->SetStats(ProjectileDamage, AliveTime);
		Projectile->StartAliveTimer();
	}
}


