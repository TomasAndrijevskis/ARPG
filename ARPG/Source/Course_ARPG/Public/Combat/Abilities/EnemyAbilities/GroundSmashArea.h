
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GroundSmashArea.generated.h"


class UNiagaraComponent;
class USphereComponent;

UCLASS()
class COURSE_ARPG_API AGroundSmashArea : public AActor
{
	GENERATED_BODY()
	
public:	

	AGroundSmashArea();

	void SetParams(const float NewDamage);

protected:

	virtual void BeginPlay() override;
	
private:

	UFUNCTION()
	void CheckPlayerInRange();
	
	UPROPERTY(EditDefaultsOnly)
	USphereComponent* Collision;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraComponent* RangeEffect;
	
	FVector SpawnLocation;
	
	float Damage;
};
