
#pragma once

#include "CoreMinimal.h"
#include "PlayerAttributeData.generated.h"


USTRUCT()
struct FPlayerAttributeData
{
	GENERATED_BODY()

	int32 Endurance;
	int32 Intelligence;
	int32 Strength;
	int32 Arcane;
	int32 Wisdom;
	int32 Vigor;
};