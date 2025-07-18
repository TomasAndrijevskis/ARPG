
#include "Combat/Projectiles/RangeAttackProjectile_Ice.h"
#include "NiagaraComponent.h"
#include "Components/BoxComponent.h"


ARangeAttackProjectile_Ice::ARangeAttackProjectile_Ice()
{
	CollisionComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("BoxCollision"));
	CollisionComponent->SetupAttachment(RootComponent);
	
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(CollisionComponent);
	
	NiagaraEffect = CreateDefaultSubobject<UNiagaraComponent>(TEXT("NiagaraEffect"));
	NiagaraEffect->SetupAttachment(CollisionComponent);

	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);

}


bool ARangeAttackProjectile_Ice::IsPlayerControlledActor(AActor* OtherActor)
{
	APawn* PawnRef = Cast<APawn>(OtherActor);

	if (PawnRef->IsPlayerControlled())
	{
		return true;
	}
	return false;
}
