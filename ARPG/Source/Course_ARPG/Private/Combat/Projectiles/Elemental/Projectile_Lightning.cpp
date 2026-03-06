
#include "Combat/Projectiles/Elemental/Projectile_Lightning.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"


AProjectile_Lightning::AProjectile_Lightning()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
}


TSubclassOf<UDamageType> AProjectile_Lightning::GetDamageType() const
{
	return UMagicalDamageType::StaticClass();
}
