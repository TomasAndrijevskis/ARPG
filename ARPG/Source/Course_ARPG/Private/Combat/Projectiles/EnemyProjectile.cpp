
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
	if (!Cast<APawn>(OtherActor)->IsPlayerControlled()) return true;
	return false;
}

