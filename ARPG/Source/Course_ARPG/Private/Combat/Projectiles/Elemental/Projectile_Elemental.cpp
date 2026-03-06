
#include "Combat/Projectiles/Elemental/Projectile_Elemental.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_Elemental::AProjectile_Elemental()
{
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}


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


TSubclassOf<UDamageType> AProjectile_Elemental::GetDamageType() const
{
	return Super::GetDamageType();
}