
#pragma once

#include "CoreMinimal.h"
#include "Combat/CombatComponent_Base.h"
#include "CombatComponent_Enemy.generated.h"


UCLASS()
class COURSE_ARPG_API UCombatComponent_Enemy : public UCombatComponent_Base
{
	GENERATED_BODY()

public:

	void RandomAttack();

	UPROPERTY()
	float AnimDuration;
};
