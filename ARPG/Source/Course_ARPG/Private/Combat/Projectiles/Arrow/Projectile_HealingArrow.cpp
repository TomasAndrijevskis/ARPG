
#include "Combat/Projectiles/Arrow/Projectile_HealingArrow.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_HealingArrow::AProjectile_HealingArrow()
{
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}
