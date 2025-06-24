
#pragma once

#include "CoreMinimal.h"
#include "AbilityUpgradeRequirements.generated.h"

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FAbilityUpgradeRequirements: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int Level;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int RequiredPoints;
	
};