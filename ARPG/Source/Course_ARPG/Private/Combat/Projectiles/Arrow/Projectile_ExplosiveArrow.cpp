
#include "Combat/Projectiles/Arrow/Projectile_ExplosiveArrow.h"
#include "Combat/Abilities/PlayerAbilities/ExplosionArea.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_ExplosiveArrow::AProjectile_ExplosiveArrow()
{
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(Mesh);
}


void AProjectile_ExplosiveArrow::HandleBeginOverlap(AActor* OtherActor)
{
	if (!ExplosionRangeClass)
	{
		HandleDestruction();
		return;
	}
	FVector HitLocation = this->GetActorLocation();
	HandleDestruction();
	FTransform SpawnTransform(FRotator::ZeroRotator, HitLocation);
	AExplosionArea* Projectile = GetWorld()->SpawnActorDeferred<AExplosionArea>(ExplosionRangeClass, SpawnTransform);
	Projectile->SetParams(Damage, DamageType);
	UGameplayStatics::FinishSpawningActor(Projectile, SpawnTransform);
}


void AProjectile_ExplosiveArrow::HandleDestruction()
{
	if (HitTemplate && Particle) Particle->SetTemplate(HitTemplate);
	Super::HandleDestruction();
}