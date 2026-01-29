#pragma once

#include "CoreMinimal.h"
#include "AbilitySaveData.generated.h"


USTRUCT(BlueprintType)
struct FAbilitySaveData
{
	GENERATED_BODY()

	UPROPERTY()
	bool bIsUnlocked = false;

	UPROPERTY()
	int32 CurrentLevel = 0;
};
