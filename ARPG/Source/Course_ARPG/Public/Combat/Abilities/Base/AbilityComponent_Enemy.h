
#pragma once

#include "CoreMinimal.h"
#include "AbilityComponent_Base.h"
#include "AbilityComponent_Enemy.generated.h"


UCLASS()
class COURSE_ARPG_API UAbilityComponent_Enemy : public UAbilityComponent_Base
{
	GENERATED_BODY()

public:

	virtual void StartAbility() override;
	
	virtual void FinishAbilityCast() override;
	
protected:

	virtual void StartAbilityTimer() override;

	virtual void OnAbilityTimerFinished() override;
};
