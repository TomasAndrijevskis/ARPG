#pragma once

#include "CoreMinimal.h"
#include "AbilityData.generated.h"

USTRUCT(BlueprintType)
struct FAbilityData
{
	GENERATED_BODY()

	UPROPERTY()
	bool bIsUnlocked = false;

	UPROPERTY()
	int32 CurrentLevel = 0;
};
