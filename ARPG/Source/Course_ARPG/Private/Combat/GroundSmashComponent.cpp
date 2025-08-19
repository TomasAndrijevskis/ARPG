
#include "Combat/GroundSmashComponent.h"

#include "Characters/Boss.h"
#include "Characters/StatsComponent.h"
#include "Combat/GroundSmashArea.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


void UGroundSmashComponent::BeginPlay()
{
	Super::BeginPlay();

	PawnRef = Cast<ACharacter>(GetOwner());
	if (!PawnRef)
	{
		return;
	}
}


void UGroundSmashComponent::SpawnParticles()
{
	if (ParticleClass)
	{
		ParticleRef = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ParticleClass, GetParticleSpawnLocation(SpawnSocketName), FRotator(180, 0, 0), FVector(2,2,2), true);
	}
	if (GroundSmashAreaClass)
	{
		FVector SpawnLocation = GetParticleSpawnLocation(SpawnSocketName);
		FRotator SpawnRotation = FRotator::ZeroRotator;
		
		FActorSpawnParameters Params;
		Params.Owner = GetOwner();
		GroundSmashAreaActor = GetWorld()->SpawnActor<AGroundSmashArea>(GroundSmashAreaClass,  SpawnLocation, SpawnRotation, Params);
		if (PawnRef)
		{
			GroundSmashAreaActor->SetParams(Cast<AEnemyCharacter_Base>(PawnRef)->StatsComp->GetStatValue(EStats::Strength) * DamageMultiplier);
		}
	}
}


FVector UGroundSmashComponent::GetParticleSpawnLocation(FName SocketName)
{
	if (!PawnRef)
	{
		return FVector::ZeroVector;
	}
	return PawnRef->GetMesh()->GetSocketLocation(SocketName);
}