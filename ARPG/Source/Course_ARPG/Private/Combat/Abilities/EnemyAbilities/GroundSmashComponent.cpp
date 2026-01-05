
#include "Combat/Abilities/EnemyAbilities/GroundSmashComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Data/EStats.h"
#include "Combat/Abilities/EnemyAbilities/GroundSmashArea.h"
#include "Components/StatsComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


void UGroundSmashComponent::BeginPlay()
{
	Super::BeginPlay();
}


void UGroundSmashComponent::SpawnParticles()
{
	if (!Cast<ACharacter>(GetOwner())) return;
	if (ParticleClass)
		ParticleRef = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleClass, GetParticleSpawnLocation(SpawnSocketName),
			FRotator(180, 0, 0), FVector(2,2,2), true);
	if (GroundSmashAreaClass)
	{
		FVector SpawnLocation = GetParticleSpawnLocation(SpawnSocketName);
		FRotator SpawnRotation = FRotator::ZeroRotator;
		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		GroundSmashAreaActor = GetWorld()->SpawnActor<AGroundSmashArea>(GroundSmashAreaClass,  SpawnLocation, SpawnRotation, Params);
		GroundSmashAreaActor->SetParams(Cast<AEnemyCharacter>(GetOwner())->StatsComp->GetStatValue(EStats::Strength) * DamageMultiplier);
	}
}


FVector UGroundSmashComponent::GetParticleSpawnLocation(const FName& SocketName) const
{
	ACharacter* PawnRef = Cast<ACharacter>(GetOwner());
	if (!PawnRef) return FVector::ZeroVector;
	return PawnRef->GetMesh()->GetSocketLocation(SocketName);
}