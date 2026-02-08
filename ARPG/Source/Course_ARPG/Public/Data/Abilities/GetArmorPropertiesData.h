
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "GetArmorPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FGetArmorPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float Armor = 0;
};