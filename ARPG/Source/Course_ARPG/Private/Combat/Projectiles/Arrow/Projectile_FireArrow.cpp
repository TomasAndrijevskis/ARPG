
#include "Combat/Projectiles/Arrow/Projectile_FireArrow.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_FireArrow::AProjectile_FireArrow()
{
	FireParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	FireParticle->SetupAttachment(Mesh);
}


void AProjectile_FireArrow::HandleDestruction()
{
	if (HitTemplate && FireParticle) FireParticle->SetTemplate(HitTemplate);
	Super::HandleDestruction();
}