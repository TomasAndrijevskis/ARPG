
#include "Combat/Projectiles/Projectile_Fire.h"
#include "Combat/DamageTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "Components/SphereComponent.h"


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