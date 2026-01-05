

#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum EStats
{
	None UMETA(DisplayName = "None Selected"),
	Health UMETA(DisplayName = "Health"),
	MaxHealth UMETA(DisplayName = "Maximum Health"),
	Strength UMETA(DisplayName = "Strength"),
	Stamina UMETA(DisplayName = "Stamina"),
	MaxStamina UMETA(DisplayName = "Maximum Stamina"),
	MeleeRange UMETA(DisplayName = "MeleeRange"),
	RangeDistance UMETA(DisplayName = "Range Distance"),
	Armor UMETA(DisplayName = "Armor"),
	MaxArmor UMETA(DisplayName = "Maximum Armor"),
	Mana UMETA(DisplayName = "Mana"),
	MaxMana UMETA(DisplayName = "Maximum Mana")
};
