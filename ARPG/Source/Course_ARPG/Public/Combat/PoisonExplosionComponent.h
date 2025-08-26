
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PoisonExplosionComponent.generated.h"


class UNiagaraSystem;
class APoisonExplosionArea;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UPoisonExplosionComponent : public UActorComponent
{
	GENERATED_BODY()

public:

	void SpawnArea();

	void SpawnExplosion();

private:
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* ExplosionStartEffect;
	
	UPROPERTY(EditAnywhere)
	UParticleSystem* ExplosionEndEffect;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> PoisonAreaClass;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* PoisonEffect;
	
	UPROPERTY(EditAnywhere)
	float ExplosionDamage;

	UPROPERTY(EditAnywhere)
	float PoisonDamage;

	UPROPERTY(EditAnywhere)
	float PoisonRate;

	UPROPERTY(EditAnywhere)
	float PoisonDuration;
	
	UPROPERTY()
	APoisonExplosionArea* PoisonAreaRef;
};
