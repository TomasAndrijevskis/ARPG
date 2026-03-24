
#include "Combat/Projectiles/Arrow/Projectile_AllElementsArrow.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "GameFramework/Character.h"
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "Components/StatusEffectHelpers/IceEffectManager.h"
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"


AProjectile_AllElementsArrow::AProjectile_AllElementsArrow()
{
	EffectSpawnComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Effect Spawn Component"));
	EffectSpawnComponent->SetupAttachment(GetRootComponent());
}


void AProjectile_AllElementsArrow::BeginPlay()
{
	Super::BeginPlay();
	SpawnEffects();
}


void AProjectile_AllElementsArrow::HandleBeginOverlap(AActor* OtherActor)
{
	if (!OtherActor || OtherActor == this || OtherActor == GetProjectileOwner() || !IsOpponentHit(OtherActor))
	{
		OnHitNothing.Broadcast();
		HandleDestruction();
		return;
	}
	ACharacter* CharacterRef = Cast<ACharacter>(OtherActor);
	if (!CharacterRef)
	{
		OnHitNothing.Broadcast();
		HandleDestruction();
		return;
	}
	if (AEnemyCharacter* EnemyRef = Cast<AEnemyCharacter>(CharacterRef))
	{
		OnHitEnemy.Broadcast(EnemyRef);
		EnemyRef->IceStatusEffectManager->SetParams(Damage, EffectDuration, DamageRate, false);
		EnemyRef->IceStatusEffectManager->HandleEffect(true);
		EnemyRef->FireStatusEffectManager->SetParams(Damage, EffectDuration, DamageRate, false);
		EnemyRef->FireStatusEffectManager->HandleEffect(true);
		EnemyRef->PoisonStatusEffectManager->SetParams(Damage, EffectDuration, DamageRate, false);
		EnemyRef->PoisonStatusEffectManager->HandleEffect(true);
	}
	HandleDestruction();
}


void AProjectile_AllElementsArrow::SpawnEffects()
{
	for (const auto& Particle : Particles)
	{
		FVector SpawnLocation = EffectSpawnComponent->GetComponentLocation();
		FName SocketName = *EffectSpawnComponent->GetName();
		ParticleComponents.Add(UNiagaraFunctionLibrary::SpawnSystemAttached(Particle, EffectSpawnComponent, SocketName, SpawnLocation, GetRandomRotation(),
		VisualEffectScale,EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None, true, true));
	}
}


void AProjectile_AllElementsArrow::DestroyEffects()
{
	if (ParticleComponents.IsEmpty()) return;
	ParticleComponents.Empty();
}


void AProjectile_AllElementsArrow::HandleDestruction()
{
	DestroyEffects();
	Super::HandleDestruction();
}


FRotator AProjectile_AllElementsArrow::GetRandomRotation()
{
	FRotator Rotation;
	Rotation.Pitch = FMath::RandRange(1, 360);
	Rotation.Yaw = FMath::RandRange(1, 360);
	Rotation.Roll = FMath::RandRange(1, 360);
	return Rotation;
}


void AProjectile_AllElementsArrow::SetEffectsParams(float NewEffectDuration, float NewDamageRate){EffectDuration = NewEffectDuration; DamageRate = NewDamageRate;}
