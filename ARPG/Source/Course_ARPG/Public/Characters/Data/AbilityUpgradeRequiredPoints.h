
#pragma once

#include "CoreMinimal.h"
#include "AbilityUpgradeRequiredPoints.generated.h"

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FAbilityUpgradeRequiredPoints: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int Level;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int RequiredPoints;
	
};