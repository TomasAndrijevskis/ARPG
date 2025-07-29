
#include "Combat/Projectiles/EnemyProjectile.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/DamageEvents.h"


AEnemyProjectile::AEnemyProjectile()
{
	CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereCollision"));
	//CollisionComponent->SetupAttachment(RootComponent);
	RootComponent = CollisionComponent;
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}


bool AEnemyProjectile::IsPlayerControlledActor(AActor* OtherActor)
{
	APawn* PawnRef = Cast<APawn>(OtherActor);

	if (!PawnRef->IsPlayerControlled())
	{
		return true;
	}
	return false;
}

