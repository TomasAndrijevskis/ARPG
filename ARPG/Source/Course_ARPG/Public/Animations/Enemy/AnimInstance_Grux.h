
#pragma once

#include "CoreMinimal.h"
#include "AnimInstance_Enemy.h"
#include "AnimInstance_Grux.generated.h"


class ABoss_Grux;

UCLASS()
class COURSE_ARPG_API UAnimInstance_Grux : public UAnimInstance_Enemy
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetIsCharging(const bool IsCharging);
	
protected:
	
	virtual void HandleLongRangeAttack() override;
	
	UFUNCTION(BlueprintCallable)
	void HandleChargeStart(const bool bIsReadyToCharge) const;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsCharging = false;
	
private:

	UPROPERTY(EditAnywhere)
	FName BlackboardChargeKey;
};
