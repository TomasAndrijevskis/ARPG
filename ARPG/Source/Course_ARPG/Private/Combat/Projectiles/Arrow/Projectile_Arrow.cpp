
#include "Combat/Projectiles/Arrow/Projectile_Arrow.h"
#include "Components/BoxComponent.h"


AProjectile_Arrow::AProjectile_Arrow()
{
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = CollisionComponent;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Arrow"));
	Mesh->SetupAttachment(CollisionComponent);
}


TSubclassOf<UDamageType> AProjectile_Arrow::GetDamageType() const
{
	return Super::GetDamageType();
}
