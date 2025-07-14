
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FrostBlastRange.generated.h"

class UNiagaraComponent;
class USphereComponent;
class UNiagaraSystem;

UCLASS()
class COURSE_ARPG_API AFrostBlastRange : public AActor
{
	GENERATED_BODY()
	
public:
	
	AFrostBlastRange();

	void SetParams(float NewDamage, float NewDuration);
	
protected:

	virtual void BeginPlay() override;
	
private:

	UFUNCTION()
	void CheckEnemiesInRange();
	
	UPROPERTY(EditDefaultsOnly)
	USphereComponent* Collision;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraComponent* RangeEffect;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraSystem* FrozenEffectClass;

	FTimerHandle TimerHandle;

	float Damage;

	float SlowDuration;
};
