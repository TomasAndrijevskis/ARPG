
#pragma once

#include "CoreMinimal.h"
#include "AnimInstance_Player.h"
#include "AnimInstance_Archer.generated.h"

DECLARE_MULTICAST_DELEGATE(FOnHealingArrowFireRequestedDelegate);
UCLASS()
class COURSE_ARPG_API UAnimInstance_Archer : public UAnimInstance_Player
{
	GENERATED_BODY()

public:

	FOnHealingArrowFireRequestedDelegate OnHealingArrowFireRequested;
	
protected:

	virtual void HandleLongRangeAttack() override;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void FireHealingArrow();
};
