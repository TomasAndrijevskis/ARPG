
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "AllElementsArrowPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FAllElementsArrowPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float ProjectileDamage = 0;

	UPROPERTY(EditDefaultsOnly)
	float EffectsDuration = 0;
};