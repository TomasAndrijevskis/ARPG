
#include "Combat/Projectiles/Arrow/Projectile_IceArrow.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_IceArrow::AProjectile_IceArrow()
{
	IceParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	IceParticle->SetupAttachment(Mesh);
}


void AProjectile_IceArrow::HandleDestruction()
{
	if (HitTemplate && IceParticle) IceParticle->SetTemplate(HitTemplate);
	Super::HandleDestruction();
}