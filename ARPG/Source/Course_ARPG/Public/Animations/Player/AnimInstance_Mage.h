
#pragma once

#include "CoreMinimal.h"
#include "Animations/Player/AnimInstance_Player.h"
#include "AnimInstance_Mage.generated.h"


DECLARE_MULTICAST_DELEGATE(FOnFrostBlastUnleashRequestDelegate)
UCLASS()
class COURSE_ARPG_API UAnimInstance_Mage : public UAnimInstance_Player
{
	GENERATED_BODY()

public:

	FOnFrostBlastUnleashRequestDelegate OnFrostBlastUnleashRequest;
	
protected:

	virtual void HandleLongRangeAttack() override;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void SpawnFrostBlast();
};
