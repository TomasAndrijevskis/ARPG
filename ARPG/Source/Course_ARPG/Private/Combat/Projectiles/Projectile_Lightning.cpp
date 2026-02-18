
#include "Combat/Projectiles/Projectile_Lightning.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_Lightning::AProjectile_Lightning()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}


TSubclassOf<UDamageType> AProjectile_Lightning::GetDamageType() const
{
	return UMagicalDamageType::StaticClass();
}
