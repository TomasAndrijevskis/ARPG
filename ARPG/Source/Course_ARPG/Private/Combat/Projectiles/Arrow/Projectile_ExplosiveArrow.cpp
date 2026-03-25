
#include "Combat/Projectiles/Arrow/Projectile_ExplosiveArrow.h"
#include "Particles/ParticleSystemComponent.h"


AProjectile_ExplosiveArrow::AProjectile_ExplosiveArrow()
{
	Particle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));
	Particle->SetupAttachment(Mesh);
}


void AProjectile_ExplosiveArrow::HandleBeginOverlap(AActor* OtherActor)
{
	HandleDestruction();
	if (ExplosionRangeClassRef) return;
	//Super::HandleBeginOverlap(OtherActor);
	/*if (!OtherActor || OtherActor == this) return;
	ACharacter* CharacterRef = Cast<ACharacter>(OtherActor);
	if (!CharacterRef)
	{
		HandleDestruction();
		return;
	}
	if (!IsOpponentHit(OtherActor)) return;
	UGameplayStatics::ApplyDamage(CharacterRef, Damage + Damage * ElementalDamageModificator, Cast<ACharacter>(ProjectileOwner)->GetController(), this, DamageType);
	HandleDestruction();*/
}


void AProjectile_ExplosiveArrow::HandleDestruction()
{
	if (HitTemplate && Particle) Particle->SetTemplate(HitTemplate);
	Super::HandleDestruction();
}