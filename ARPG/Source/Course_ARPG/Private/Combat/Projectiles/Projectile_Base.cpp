
#include "Combat/Projectiles/Projectile_Base.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/DamageTypes.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "Kismet/GameplayStatics.h"


void AProjectile_Base::BeginPlay()
{
	Super::BeginPlay();
	CollisionComponent->OnComponentBeginOverlap.AddDynamic(this, &AProjectile_Base::OnComponentBeginOverlap);
}


void AProjectile_Base::SetOwner(AActor* NewProjectileOwner)
{
	ProjectileOwner = NewProjectileOwner;
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
	if (!IsOpponentHit(OtherActor)) return;
	HandleDestruction();
	UGameplayStatics::ApplyDamage(PawnRef, Damage, PawnRef->GetController(), this, GetDamageType());
}


void AProjectile_Base::HandleDestruction()
{
	if (HitTemplate && Particle) Particle->SetTemplate(HitTemplate);
	FindComponentByClass<UProjectileMovementComponent>()->StopMovementImmediately();
	FTimerHandle DeathTimerHandle;
	GetWorldTimerManager().SetTimer(DeathTimerHandle, this, &AProjectile_Base::DestroyProjectile, 0.5f);
	FindComponentByClass<UPrimitiveComponent>()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}


bool AProjectile_Base::IsOpponentHit(AActor* OtherActor)
{
	if (Cast<AMainCharacter_Base>(ProjectileOwner) && Cast<AEnemyCharacter>(OtherActor)) return true;
	if (Cast<AEnemyCharacter>(ProjectileOwner) && Cast<AMainCharacter_Base>(OtherActor)) return true;
	return false;
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