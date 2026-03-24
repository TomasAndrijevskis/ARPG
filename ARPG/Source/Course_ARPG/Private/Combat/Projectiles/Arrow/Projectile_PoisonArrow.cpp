
#include "Combat/Projectiles/Arrow/Projectile_PoisonArrow.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_PoisonArrow::AProjectile_PoisonArrow()
{
	PoisonParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	PoisonParticle->SetupAttachment(Mesh);
}


void AProjectile_PoisonArrow::HandleDestruction()
{
	if (HitTemplate && PoisonParticle) PoisonParticle->SetTemplate(HitTemplate);
	Super::HandleDestruction();
}