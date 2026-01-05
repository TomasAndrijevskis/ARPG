
#include "Combat/Projectiles/Projectile_Base.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Engine/DamageEvents.h"


void AProjectile_Base::BeginPlay()
{
	Super::BeginPlay();
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectile_Base::OnComponentBeginOverlap);
}


void AProjectile_Base::OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	HandleBeginOverlap(OtherActor);
}


void AProjectile_Base::HandleBeginOverlap(AActor* OtherActor)
{
	if (!OtherActor || OtherActor == this) return;
	APawn* PawnRef = Cast<APawn>(OtherActor);
	if (!PawnRef)
	{
		HandleDestruction();
		return;
	}
	if (IsPlayerControlledActor(PawnRef)) return;
	HandleDestruction();
	FDamageEvent ProjectileAttackedEvent;
	PawnRef->TakeDamage(Damage, ProjectileAttackedEvent, PawnRef->GetController(), this );
}


void AProjectile_Base::HandleDestruction()
{
	if (HitTemplate && Particle) Particle->SetTemplate(HitTemplate);
	FindComponentByClass<UProjectileMovementComponent>()->StopMovementImmediately();
	FTimerHandle DeathTimerHandle;
	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &AProjectile_Base::DestroyProjectile, 0.5f);
	FindComponentByClass<UPrimitiveComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AProjectile_Base::DestroyProjectile()
{
	HitTemplate = nullptr;
	Particle = nullptr;
	Destroy();
}


void AProjectile_Base::SetStats(const float NewDamage, const float NewAliveTime)
{
	Damage = NewDamage;
	AliveTime = NewAliveTime;
}


void AProjectile_Base::StartAliveTimer()
{
	GetWorld()->GetTimerManager().SetTimer(AliveTimerHandle, this, &AProjectile_Base::HandleDestruction, AliveTime, false);
}



