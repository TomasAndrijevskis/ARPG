
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

	void SetParams(const float NewDamage, const float NewDuration);
	
	void CheckEnemiesInRange();
	
private:
	
	UPROPERTY(EditDefaultsOnly)
	USphereComponent* Collision;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraComponent* RangeEffect;

	FTimerHandle TimerHandle;

	float Damage;

	float SlowDuration;
};
