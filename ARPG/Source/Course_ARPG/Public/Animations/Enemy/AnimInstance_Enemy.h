
#pragma once

#include "CoreMinimal.h"
#include "Animations/AnimInstance_Base.h"
#include "AnimInstance_Enemy.generated.h"


class AEnemyCharacter;

UCLASS()
class COURSE_ARPG_API UAnimInstance_Enemy : public UAnimInstance_Base
{
	GENERATED_BODY()

public:
	
	virtual void NativeUpdateAnimation(const float DeltaSeconds) override;
	
};
