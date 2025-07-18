
#include "Combat/Projectiles/RangeAttackProjectile.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"


ARangeAttackProjectile::ARangeAttackProjectile()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	CollisionComponent->SetupAttachment(RootComponent);

	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
	
}


bool ARangeAttackProjectile::IsPlayerControlledActor(AActor* OtherActor)
{
	APawn* PawnRef = Cast<APawn>(OtherActor);

	if (PawnRef->IsPlayerControlled())
	{
		return true;
	}
	return false;
}
