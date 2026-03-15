
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "HealArrowPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FHealArrowPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float HealCap = 0;

	UPROPERTY(EditDefaultsOnly)
	float HealPercent = 0;
};