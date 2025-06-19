
#pragma once

#include "CoreMinimal.h"
#include "XPLevels.generated.h"

USTRUCT(BlueprintType)
struct COURSE_ARPG_API FXPLevels: public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	int Level;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	float Experience;

	//добваляя поинтеры на объекты лучше это делать через soft references -> TSoftClassPts<...>...
};