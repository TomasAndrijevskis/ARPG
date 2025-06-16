

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BossAnimInstance.generated.h"


UCLASS()
class COURSE_ARPG_API UBossAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCharging = false;
	
protected:

	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float CurrentSpeed = 0.0f;

	UFUNCTION(BlueprintCallable)
	void UpdateSpeed();
};
