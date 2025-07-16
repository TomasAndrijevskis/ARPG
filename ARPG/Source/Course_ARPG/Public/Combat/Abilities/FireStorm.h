
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireStorm.generated.h"

class UNiagaraSystem;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API AFireStorm : public AActor
{
	GENERATED_BODY()
	
public:	

	AFireStorm(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	void HandleBeginOverlap(AActor* OtherActor);

	void SetProperties(float Duration, float Damage);

private:
	
	
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* FireStormEffect;

	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;

	UPROPERTY(EditAnywhere)
	UNiagaraSystem* BurnEffect;
	
	float BurnDuration;
	
	float BurnDamage;

	float TimerDuration;
	
	FTimerHandle TimerHandle;
};
