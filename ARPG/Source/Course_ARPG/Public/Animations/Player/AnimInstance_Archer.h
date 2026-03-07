
#pragma once

#include "CoreMinimal.h"
#include "AnimInstance_Player.h"
#include "AnimInstance_Archer.generated.h"

UCLASS()
class COURSE_ARPG_API UAnimInstance_Archer : public UAnimInstance_Player
{
	GENERATED_BODY()

protected:

	virtual void HandleLongRangeAttack() override;
};
