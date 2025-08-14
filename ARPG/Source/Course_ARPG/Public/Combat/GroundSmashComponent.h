
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GroundSmashComponent.generated.h"


class AGroundSmashArea;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UGroundSmashComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	UGroundSmashComponent(){};

	void SpawnParticles();
	
protected:

	virtual void BeginPlay() override;

private:

	FVector GetParticleSpawnLocation(FName SocketName);
	
	UPROPERTY(EditAnywhere)
	FName SpawnSocketName; //FX_Trail_L_03
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* ParticleClass;
	
	UParticleSystemComponent* ParticleRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> GroundSmashAreaClass;
	
	UPROPERTY()
	AGroundSmashArea* GroundSmashAreaActor;
};
