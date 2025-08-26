
#pragma once

#include "CoreMinimal.h"
#include "Animations/AnimInstance_Base.h"
#include "AnimInstance_Fey.generated.h"


UCLASS()
class COURSE_ARPG_API UAnimInstance_Fey : public UAnimInstance_Base
{
	GENERATED_BODY()

protected:

	UFUNCTION(BlueprintCallable)
	void HandleProjectileSpawn();

	UFUNCTION(BlueprintCallable)
	void SpawnPoisonArea();

	UFUNCTION(BlueprintCallable)
	void ExplodePoisonArea();

	UFUNCTION(BlueprintCallable)
	void HandleSummonMinions();
	
};
