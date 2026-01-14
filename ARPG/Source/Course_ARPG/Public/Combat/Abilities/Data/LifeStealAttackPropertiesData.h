
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "LifeStealAttackPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FLifeStealAttackPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float StolenHealthPercent = 0;
};