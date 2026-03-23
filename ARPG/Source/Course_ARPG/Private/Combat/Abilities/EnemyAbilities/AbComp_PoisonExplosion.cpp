
#include "Combat/Abilities/EnemyAbilities/AbComp_PoisonExplosion.h"
#include "Combat/Abilities/EnemyAbilities/PoisonExplosionArea.h"
#include "Kismet/GameplayStatics.h"
#include "Particles/ParticleSystem.h"


void UAbComp_PoisonExplosion::StartAbility()
{
	if (!PoisonAreaClass) return;
	const FVector SpawnLocation = GetOwner()->GetActorLocation();
	const FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	PoisonAreaRef = GetWorld()->SpawnActor<APoisonExplosionArea>(PoisonAreaClass, SpawnLocation, SpawnRotation, Params);
	if (!PoisonAreaRef) return;
	PoisonAreaRef->SetParams(ExplosionDamage, PoisonDamage, PoisonRate, GetAbilityDuration());
}


void UAbComp_PoisonExplosion::FinishAbilityCast()
{
	if (!ExplosionEndEffect || !PoisonAreaRef) return;
	const FVector SpawnLocation = GetOwner()->GetActorLocation();
	const FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEndEffect, SpawnLocation, SpawnRotation, FVector(2, 2, 2), true);
	PoisonAreaRef->OnExplosionTriggeredDelegate.Broadcast();
}