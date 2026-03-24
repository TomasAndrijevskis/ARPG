
#pragma once

#include "CoreMinimal.h"
#include "Components/StatusEffectsComponent.h"
#include "FireEffectManager.generated.h"


UCLASS()
class COURSE_ARPG_API UFireEffectManager : public UStatusEffectsComponent
{
	GENERATED_BODY()
	
protected:

	virtual void SetEffectType() override;
	
};