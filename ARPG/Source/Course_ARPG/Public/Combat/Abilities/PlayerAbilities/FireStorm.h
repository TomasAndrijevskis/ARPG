
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FireStorm.generated.h"


class AEnemyCharacter;
class UNiagaraSystem;
class UBoxComponent;

UCLASS()
class COURSE_ARPG_API AFireStorm : public AActor
{
	GENERATED_BODY()
	
public:	

	AFireStorm(const FObjectInitializer& ObjectInitializer);
	
	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex,bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	
	void SetProperties(const float NewDuration, const float NewDamage, const float NewBurnRate);

private:

	void HandleOverlap(AActor* OtherActor, bool bIsOverlapping);
	
	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* FireStormEffect;

	UPROPERTY(EditAnywhere)
	UBoxComponent* CollisionBox;

	UPROPERTY()
	AEnemyCharacter* OverlappedActor;
	
	float BurnDuration;
	
	float BurnDamage;

	float BurnRate;

	float TimerDuration;
	
	FTimerHandle TimerHandle;
};
