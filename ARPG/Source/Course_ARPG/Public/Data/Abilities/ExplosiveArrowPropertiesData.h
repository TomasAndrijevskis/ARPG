
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "ExplosiveArrowPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FExplosiveArrowPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float ExplosionDamage = 0;

	UPROPERTY(EditDefaultsOnly)
	int NumberOfShots = 0;
};