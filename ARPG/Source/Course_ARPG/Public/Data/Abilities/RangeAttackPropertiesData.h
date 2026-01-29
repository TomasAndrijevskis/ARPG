
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "RangeAttackPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FRangeAttackPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float ProjectileDamage = 0;
};