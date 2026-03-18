
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "ArrowBarragePropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FArrowBarragePropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float Damage = 0;
};