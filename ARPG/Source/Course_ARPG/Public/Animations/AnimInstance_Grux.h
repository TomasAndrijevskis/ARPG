
#pragma once

#include "CoreMinimal.h"
#include "Animations/AnimInstance_Base.h"
#include "AnimInstance_Grux.generated.h"


class ABoss_Grux;

UCLASS()
class COURSE_ARPG_API UAnimInstance_Grux : public UAnimInstance_Base
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetIsCharging(bool IsCharging);
	
protected:

	UFUNCTION(BlueprintCallable)
	void HandleProjectileSpawn();

	UFUNCTION(BlueprintCallable)
	void HandleChargeStart(bool bIsReadyToCharge);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCharging = false;
	
private:

	UPROPERTY(EditAnywhere)
	FName BlackboardChargeKey;
};
