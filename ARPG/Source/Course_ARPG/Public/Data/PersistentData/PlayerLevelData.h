
#pragma once

#include "CoreMinimal.h"
#include "PlayerLevelData.generated.h"


USTRUCT(BlueprintType)
struct FPlayerLevelData
{
	GENERATED_BODY()

	UPROPERTY()
	int32 CurrentLevel = 1;
	UPROPERTY()
	int32 CurrentExperience = 0;
	UPROPERTY()
	int32 RequiredExperience = 0;
	UPROPERTY()
	int32 CurrentAttributePoints = 0;
	UPROPERTY()
	int32 CurrentAbilityPoints = 0;
};