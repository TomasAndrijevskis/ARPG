
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "InvincibilityPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FInvincibilityPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float Armor = 0;
};