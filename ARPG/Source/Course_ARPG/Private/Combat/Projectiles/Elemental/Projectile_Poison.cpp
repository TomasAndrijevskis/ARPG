
#include "Combat/Projectiles/Elemental/Projectile_Poison.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_Poison::AProjectile_Poison()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}