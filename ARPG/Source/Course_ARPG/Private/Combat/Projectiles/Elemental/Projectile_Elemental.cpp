
#include "Combat/Projectiles/Elemental/Projectile_Elemental.h"
#include "Particles/ParticleSystemComponent.h"


void AProjectile_Elemental::DestroyProjectile()
{
	Particle = nullptr;
	Super::DestroyProjectile();
}


void AProjectile_Elemental::HandleDestruction()
{
	if (HitTemplate && Particle) Particle->SetTemplate(HitTemplate);
	Super::HandleDestruction();
}