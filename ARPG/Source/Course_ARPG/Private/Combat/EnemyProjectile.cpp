
#include "Combat/EnemyProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/DamageEvents.h"

AEnemyProjectile::AEnemyProjectile()
{
	PrimaryActorTick.bCanEverTick = true;
}


bool AEnemyProjectile::IsPlayerControlledActor(AActor* OtherActor)
{
	APawn* PawnRef = Cast<APawn>(OtherActor);

	if (!PawnRef->IsPlayerControlled())
	{
		return true;
	}
	return false;
}

