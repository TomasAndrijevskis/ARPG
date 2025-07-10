
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FrostBlastRange.generated.h"

class UNiagaraComponent;
class USphereComponent;

UCLASS()
class COURSE_ARPG_API AFrostBlastRange : public AActor
{
	GENERATED_BODY()
	
public:
	
	AFrostBlastRange();

protected:

	virtual void BeginPlay() override;
	
private:

	UFUNCTION()
	void CheckEnemiesInRange();
	
	UPROPERTY(EditDefaultsOnly)
	USphereComponent* Collision;

	UPROPERTY(EditDefaultsOnly)
	UNiagaraComponent* RangeEffect;

	FTimerHandle TimerHandle;

};
