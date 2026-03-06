
#include "Combat/Projectiles/Elemental/Projectile_Ice.h"
#include "NiagaraComponent.h"
#include "Combat/DamageTypes.h"
#include "Components/BoxComponent.h"


AProjectile_Ice::AProjectile_Ice()
{
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	RootComponent = CollisionComponent;
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionComponent);
	NiagaraEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraEffect"));
	NiagaraEffect->SetupAttachment(CollisionComponent);
}


TSubclassOf<UDamageType> AProjectile_Ice::GetDamageType() const
{
	return UIceDamageType::StaticClass();
}