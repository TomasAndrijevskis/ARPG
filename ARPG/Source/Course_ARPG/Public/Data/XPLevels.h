
#pragma once

#include "CoreMinimal.h"
#include "XPLevels.generated.h"


USTRUCT(BlueprintType)
struct COURSE_ARPG_API FXPLevels: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 Level;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 Experience;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 AbilityPointsPerLevel;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int32 AttributePointsPerLevel;
};