
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum EAttributes
{
	Nothing UMETA(DisplayName = "Nothing Selected"),
	Endurance UMETA(DisplayName = "Endurance"),
	Intelligence UMETA(DisplayName = "Intelligence"),
	Might UMETA(DisplayName = "Might"),
	Arcane UMETA(DisplayName = "Arcane"),
};