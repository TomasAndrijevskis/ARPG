
#include "Combat/Projectiles/Projectile_Poison.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_Poison::AProjectile_Poison()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}


TSubclassOf<UDamageType> AProjectile_Poison::GetDamageType() const
{
	return UPoisonDamageType::StaticClass();
}
