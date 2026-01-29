
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "DamageIncreasePropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FDamageIncreasePropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float DamageMultiplier = 0;
};
