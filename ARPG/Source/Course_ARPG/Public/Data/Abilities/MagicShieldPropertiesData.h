
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "MagicShieldPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FMagicShieldPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float DamageReflectionPercent = 0;
};