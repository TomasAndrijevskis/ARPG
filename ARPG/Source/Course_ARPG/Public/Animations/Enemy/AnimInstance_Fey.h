
#pragma once

#include "CoreMinimal.h"
#include "AnimInstance_Enemy.h"
#include "AnimInstance_Fey.generated.h"


UCLASS()
class COURSE_ARPG_API UAnimInstance_Fey : public UAnimInstance_Enemy
{
	GENERATED_BODY()

protected:
	
	virtual void HandleLongRangeAttack() override;

	UFUNCTION(BlueprintCallable)
	void SpawnPoisonArea() const;

	UFUNCTION(BlueprintCallable)
	void ExplodePoisonArea() const;

	UFUNCTION(BlueprintCallable)
	void HandleSummonMinions() const;
	
};
