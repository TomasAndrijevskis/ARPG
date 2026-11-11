
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class EAttributes : uint8
{
	Nothing UMETA(DisplayName = "Nothing Selected"),
	Vigor UMETA(DisplayName = "Vigor"),
	Endurance UMETA(DisplayName = "Endurance"),
	Strength UMETA(DisplayName = "Strength"),
	Intelligence UMETA(DisplayName = "Intelligence"),
	Wisdom UMETA(DisplayName = "Wisdom"),
	Arcane UMETA(DisplayName = "Arcane"),
};