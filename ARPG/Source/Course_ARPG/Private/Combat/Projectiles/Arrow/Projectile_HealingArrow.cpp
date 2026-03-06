
#include "Combat/Projectiles/Arrow/Projectile_HealingArrow.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "GameFramework/Character.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_HealingArrow::AProjectile_HealingArrow()
{
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(CollisionComponent);
}


void AProjectile_HealingArrow::HandleBeginOverlap(AActor* OtherActor)
{
	if (!OtherActor || OtherActor == this) return;
	ACharacter* CharacterRef = Cast<ACharacter>(OtherActor);
	if (!CharacterRef)
	{
		HandleDestruction();
		return;
	}
	if (!IsOpponentHit(OtherActor)) return;
	if (AEnemyCharacter* EnemyRef = Cast<AEnemyCharacter>(OtherActor)) EnemyRef->bCanApplyDamage = false; 
	HandleDestruction();
}
