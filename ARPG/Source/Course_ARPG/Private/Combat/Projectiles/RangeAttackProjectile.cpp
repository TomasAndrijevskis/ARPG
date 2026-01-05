
#include "Combat/Projectiles/RangeAttackProjectile.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"


ARangeAttackProjectile::ARangeAttackProjectile()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}


bool ARangeAttackProjectile::IsPlayerControlledActor(AActor* OtherActor)
{
	if (Cast<APawn>(OtherActor)->IsPlayerControlled()) return true;
	return false;
}
