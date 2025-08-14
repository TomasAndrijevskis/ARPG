
#include "Combat/GroundSmashComponent.h"
#include "Combat/GroundSmashArea.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"


void UGroundSmashComponent::BeginPlay()
{
	Super::BeginPlay();
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
		GroundSmashAreaActor->SetParams(10);
	}
}


FVector UGroundSmashComponent::GetParticleSpawnLocation(FName SocketName)
{
	ACharacter* PawnRef = Cast<ACharacter>(GetOwner());
	if (!PawnRef)
	{
		return FVector::ZeroVector;
	}
	return PawnRef->GetMesh()->GetSocketLocation(SocketName);
}