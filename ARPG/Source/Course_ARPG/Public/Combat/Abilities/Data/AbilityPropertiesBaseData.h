
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float AbilityDuration = 0;

	UPROPERTY(EditDefaultsOnly)
	float CooldownDuration = 0;

	UPROPERTY(EditDefaultsOnly)
	float ManaCost = 0;
};