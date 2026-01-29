
#pragma once

#include "CoreMinimal.h"
#include "PlayerPersistentData.generated.h"


USTRUCT()
struct FPlayerPersistentData
{
	GENERATED_BODY()

	int Endurance;
	int Intelligence;
	int Strength;
	int Arcane;
	int Wisdom;
	int Vigor;
	
	int32 CurrentLevel;
	int32 CurrentXP;
	int32 AttributePoints;
	int32 AbilityPoints;
};