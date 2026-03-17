
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ArrowBarrage.generated.h"

class AEnemyCharacter;
class UDamageTypeBase;
class UCapsuleComponent;

DECLARE_MULTICAST_DELEGATE(FOnParticleFinished);
UCLASS()
class COURSE_ARPG_API AArrowBarrage : public AActor
{
	GENERATED_BODY()
	
public:
	
	AArrowBarrage();

	UFUNCTION()
	void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
	void SetParams(float NewDamage, float NewDuration, float NewDamageRate);
	
	UFUNCTION()
	void DeactivateParticle();

	FOnParticleFinished OnParticleFinishedDelegate;
	
protected:

	virtual void BeginPlay() override;
	
private:

	void ApplyDamage(AActor* OtherActor);

	void HandleOverlap();
	
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;

	UPROPERTY(EditAnywhere)
	UCapsuleComponent* CollisionComponent;
	
	UPROPERTY(EditDefaultsOnly)
	UParticleSystemComponent* Particle;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDamageTypeBase> DamageType;
	
	UPROPERTY()
	TMap<AActor*, FTimerHandle> OverlappingActorMap;
	
	float Damage;

	float Duration;

	float DamageRate;
};