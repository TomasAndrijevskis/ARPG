
#include "Combat/PoisonExplosionComponent.h"
#include "Combat/PoisonExplosionArea.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"
#include "Particles/ParticleSystemComponent.h"


void UPoisonExplosionComponent::SpawnArea()
{
	if (PoisonAreaClass)
	{
		FVector SpawnLocation = GetOwner()->GetActorLocation();
		FRotator SpawnRotation = FRotator::ZeroRotator;
		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		PoisonAreaRef = GetWorld()->SpawnActor<APoisonExplosionArea>(PoisonAreaClass, SpawnLocation, SpawnRotation, Params);
		if (PoisonAreaRef)
		{
			PoisonAreaRef->SetParams(ExplosionDamage, PoisonDamage, PoisonRate, PoisonDuration, PoisonEffect);
		}
	}
}


void UPoisonExplosionComponent::SpawnExplosion()
{
	if (ExplosionEndEffect)
	{
		FVector SpawnLocation = GetOwner()->GetActorLocation();
		FRotator SpawnRotation = FRotator::ZeroRotator;
		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEndEffect, SpawnLocation, SpawnRotation, FVector(2, 2, 2), true);
		PoisonAreaRef->OnExplosionTriggeredDelegate.Broadcast();
	}
}

