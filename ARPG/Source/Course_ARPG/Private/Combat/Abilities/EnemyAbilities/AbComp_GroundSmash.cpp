
#include "Combat/Abilities/EnemyAbilities/AbComp_GroundSmash.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Data/EStats.h"
#include "Combat/Abilities/EnemyAbilities/GroundSmashArea.h"
#include "Components/StatsComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


void UAbComp_GroundSmash::StartAbility()
{
	if (!Cast<ACharacter>(GetOwner())) return;
	if (!ParticleClass || !GroundSmashAreaClass) return;
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleClass, GetParticleSpawnLocation(SpawnSocketName),
			FRotator(180, 0, 0), FVector(2,2,2), true);
	const FVector SpawnLocation = GetParticleSpawnLocation(SpawnSocketName);
	const FRotator SpawnRotation = FRotator::ZeroRotator;
	FActorSpawnParameters Params;
	Params.Owner = GetOwner();
	AGroundSmashArea* GroundSmashAreaActor = GetWorld()->SpawnActor<AGroundSmashArea>(GroundSmashAreaClass,  SpawnLocation, SpawnRotation, Params);
	GroundSmashAreaActor->SetParams(Cast<AEnemyCharacter>(GetOwner())->StatsComp->GetStatValue(EStats::PhysicalStrength) * DamageMultiplier);
}


FVector UAbComp_GroundSmash::GetParticleSpawnLocation(const FName& SocketName) const
{
	const ACharacter* PawnRef = Cast<ACharacter>(GetOwner());
	if (!PawnRef) return FVector::ZeroVector;
	return PawnRef->GetMesh()->GetSocketLocation(SocketName);
}