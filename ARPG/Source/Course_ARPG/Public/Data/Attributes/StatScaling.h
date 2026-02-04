
#pragma once

#include "CoreMinimal.h"
#include "Data/EStats.h"
#include "StatScaling.generated.h"


USTRUCT(BlueprintType)
struct FStatScaling
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EStats>, float> StatsCoefficients;
};
