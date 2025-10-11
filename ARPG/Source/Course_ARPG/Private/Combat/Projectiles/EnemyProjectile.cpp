
#include "Combat/Projectiles/EnemyProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"


AEnemyProjectile::AEnemyProjectile()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
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

