
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ExplosionArea.generated.h"

class UDamageTypeBase;
class USphereComponent;

UCLASS()
class COURSE_ARPG_API AExplosionArea : public AActor
{
	GENERATED_BODY()

public:

	AExplosionArea();

	void SetParams(float NewDamage, TSubclassOf<UDamageTypeBase> NewDamageType);
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	UPROPERTY(EditAnywhere)
	USceneComponent* Root;
	
	UPROPERTY(EditAnywhere)
	USphereComponent* SphereComp;

	UPROPERTY(EditAnywhere)
	UParticleSystemComponent* Particle;

	void CheckEnemiesInRange();

	float GetPercentage(float Part, float Whole) const;

	float CalculateFinalDamage(float DistancePercent);

	UFUNCTION()
	void HandleDestruction();
	
	void DestroyActor();
	
	UPROPERTY(EditDefaultsOnly)
	int DamageSections = 4;

	UPROPERTY()
	TSubclassOf<UDamageTypeBase> DamageType;
	
	float Damage;
};