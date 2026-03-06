
#include "Combat/Projectiles/Elemental/Projectile_Wind.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"


AProjectile_Wind::AProjectile_Wind()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
}


TSubclassOf<UDamageType> AProjectile_Wind::GetDamageType() const
{
	return UMagicalDamageType::StaticClass();
}