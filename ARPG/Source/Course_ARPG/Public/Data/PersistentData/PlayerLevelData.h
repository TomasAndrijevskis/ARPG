
#pragma once

#include "CoreMinimal.h"
#include "PlayerLevelData.generated.h"


USTRUCT()
struct FPlayerLevelData
{
	GENERATED_BODY()
	
	int32 CurrentLevel;
	int32 CurrentExperience;
	int32 RequiredExperience;
	int32 CurrentAttributePoints;
	int32 CurrentAbilityPoints;
};