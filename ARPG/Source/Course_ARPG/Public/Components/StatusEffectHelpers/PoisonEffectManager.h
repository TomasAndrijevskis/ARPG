
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "PoisonEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UPoisonEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()

public:
	
	virtual void HandleEffect() override;
	
protected:
	
	virtual void SetEffectType() override;
	
};