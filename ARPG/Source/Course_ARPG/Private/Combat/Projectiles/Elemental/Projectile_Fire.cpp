
#include "Combat/Projectiles/Elemental/Projectile_Fire.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_Fire::AProjectile_Fire()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}


TSubclassOf<UDamageType> AProjectile_Fire::GetDamageType() const
{
	return UFireDamageType::StaticClass();
}