
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum EAttributes
{
	Nothing UMETA(DisplayName = "Nothing Selected"),
	Endurance UMETA(DisplayName = "Endurance"),
	Intelligence UMETA(DisplayName = "Intelligence"),
	Strength UMETA(DisplayName = "Strength"),
	Wisdom UMETA(DisplayName = "Wisdom"),
	Arcane UMETA(DisplayName = "Arcane"),
	Vigor UMETA(DisplayName = "Vigor"),
};