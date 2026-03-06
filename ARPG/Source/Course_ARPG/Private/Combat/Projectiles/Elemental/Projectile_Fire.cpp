
#include "Combat/Projectiles/Elemental/Projectile_Fire.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"


AProjectile_Fire::AProjectile_Fire()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
}


TSubclassOf<UDamageType> AProjectile_Fire::GetDamageType() const
{
	return UFireDamageType::StaticClass();
}