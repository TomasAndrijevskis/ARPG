
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "HealingAuraPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FHealingAuraPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float HealthRegenAmount;
};