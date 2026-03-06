
#include "Combat/Projectiles/Elemental/Projectile_Poison.h"
#include "Combat/DamageTypes.h"
#include "Components/SphereComponent.h"


AProjectile_Poison::AProjectile_Poison()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	RootComponent = CollisionComponent;
}


TSubclassOf<UDamageType> AProjectile_Poison::GetDamageType() const
{
	return UPoisonDamageType::StaticClass();
}
