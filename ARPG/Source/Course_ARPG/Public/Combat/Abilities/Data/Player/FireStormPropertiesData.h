
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "FireStormPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FFireStormPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float BurnDuration = 0;
	
	UPROPERTY(EditDefaultsOnly)
	float BurnDamage = 0;
};
