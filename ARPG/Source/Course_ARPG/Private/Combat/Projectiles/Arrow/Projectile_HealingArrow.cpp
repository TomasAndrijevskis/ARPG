
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
		bHitEnemy = false;
		HandleDestruction();
		return;
	}
	if (!IsOpponentHit(OtherActor)) return;
	EnemyRef = Cast<AEnemyCharacter>(OtherActor);
	if (EnemyRef)
	{
		EnemyRef->SetCanApplyDamage(false);
		bHitEnemy = true;
		HandleDestruction();
	}
}


void AProjectile_HealingArrow::HandleDestruction()
{
	if (bHitEnemy) OnHitEnemy.Broadcast(EnemyRef);
	else OnHitNothing.Broadcast();
	Super::HandleDestruction();
}