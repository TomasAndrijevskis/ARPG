
#pragma once

#include "CoreMinimal.h"
#include "Animations/Player/AnimInstance_Player.h"
#include "AnimInstance_Mage.generated.h"


UCLASS()
class COURSE_ARPG_API UAnimInstance_Mage : public UAnimInstance_Player
{
	GENERATED_BODY()

protected:

	virtual void HandleLongRangeAttack() override;
};
