
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum EStats
{
	None UMETA(DisplayName = "None Selected"),
	Health UMETA(DisplayName = "Health"),
	MaxHealth UMETA(DisplayName = "Maximum Health"),
	PhysicalStrength UMETA(DisplayName = "Physical Strength"),
	MagicalStrength UMETA(DisplayName = "Magical Strength"),
	Stamina UMETA(DisplayName = "Stamina"),
	MaxStamina UMETA(DisplayName = "Maximum Stamina"),
	MeleeRange UMETA(DisplayName = "MeleeRange"),
	RangeDistance UMETA(DisplayName = "Range Distance"),
	Armor UMETA(DisplayName = "Armor"),
	MaxArmor UMETA(DisplayName = "Maximum Armor"),
	Mana UMETA(DisplayName = "Mana"),
	MaxMana UMETA(DisplayName = "Maximum Mana")
};