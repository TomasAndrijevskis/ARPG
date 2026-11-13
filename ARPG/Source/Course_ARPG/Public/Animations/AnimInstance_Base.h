
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstance_Base.generated.h"


class AARPG_Character_Base;

UCLASS(Abstract)
class COURSE_ARPG_API UAnimInstance_Base : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeBeginPlay() override;

protected:

	UFUNCTION(BlueprintCallable)
	virtual void UpdateSpeed();

	UFUNCTION(BlueprintCallable)
	virtual void HandleResetAttack();

	UFUNCTION(BlueprintCallable)
	virtual void HandleLongRangeAttack() {};
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentSpeed = 0.0f ;

	UPROPERTY()
	AARPG_Character_Base* PawnRef;
	
};
