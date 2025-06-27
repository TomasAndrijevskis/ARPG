
#include "Combat/Projectile_Base.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Engine/DamageEvents.h"
#include "Kismet/KismetMathLibrary.h"

AProjectile_Base::AProjectile_Base()
{
 	PrimaryActorTick.bCanEverTick = true;
}


void AProjectile_Base::HandleBeginOverlap(AActor* OtherActor)
{
	if (!OtherActor || OtherActor == this)
	{
		return;
	}
	APawn* PawnRef = Cast<APawn>(OtherActor);
	if (!PawnRef)
	{
		HandleDestruction();
		return;
	}
	
	if (IsPlayerControlledActor(PawnRef))
	{
		return;
	}
	
	HandleDestruction();
	FDamageEvent ProjectileAttackedEvent;
	PawnRef->TakeDamage(Damage, ProjectileAttackedEvent, PawnRef->GetController(), this );
}


void AProjectile_Base::HandleDestruction()
{
	FindComponentByClass<UParticleSystemComponent>()->SetTemplate(HitTemplate);
	FindComponentByClass<UProjectileMovementComponent>()->StopMovementImmediately();
	FTimerHandle DeathTimerHandle;
	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &AProjectile_Base::DestroyProjectile, 0.5f);
	FindComponentByClass<USphereComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


void AProjectile_Base::DestroyProjectile()
{
	Destroy();
}


void AProjectile_Base::SetStats(float NewDamage, float NewAliveTime)
{
	Damage = NewDamage;
	AliveTime = NewAliveTime;
}


void AProjectile_Base::StartAliveTimer()
{
	GetWorld()->GetTimerManager().SetTimer(AliveTimerHandle, this, &AProjectile_Base::HandleDestruction, AliveTime, false);
}

