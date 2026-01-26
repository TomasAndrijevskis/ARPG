
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionComponent.h"
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionArea.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"


void UPoisonExplosionComponent::SpawnArea()
{
	if (PoisonAreaClass)
	{
		const FVector SpawnLocation = GetOwner()->GetActorLocation();
		const FRotator SpawnRotation = FRotator::ZeroRotator;
		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		PoisonAreaRef = GetWorld()->SpawnActor<APoisonExplosionArea>(PoisonAreaClass, SpawnLocation, SpawnRotation, Params);
		if (PoisonAreaRef)
			PoisonAreaRef->SetParams(ExplosionDamage, PoisonDamage, PoisonRate, GetAbilityDuration(), this, GetIcon());
	}
}


void UPoisonExplosionComponent::SpawnExplosion() const
{
	if (ExplosionEndEffect)
	{
		const FVector SpawnLocation = GetOwner()->GetActorLocation();
		const FRotator SpawnRotation = FRotator::ZeroRotator;
		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEndEffect, SpawnLocation, SpawnRotation, FVector(2, 2, 2), true);
		PoisonAreaRef->OnExplosionTriggeredDelegate.Broadcast();
	}
}