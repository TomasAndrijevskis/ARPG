
#pragma once

#include "CoreMinimal.h"
#include "AbilityPropertiesBaseData.h"
#include "FrostBlastPropertiesData.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FFrostBlastPropertiesData: public FAbilityPropertiesBaseData
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly)
	float Damage = 0;

	UPROPERTY(EditDefaultsOnly)
	float SlowDuration = 0;
};
