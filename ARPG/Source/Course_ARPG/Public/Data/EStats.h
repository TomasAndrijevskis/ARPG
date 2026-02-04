
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum EStats
{
	None UMETA(DisplayName = "None Selected"),
	Health UMETA(DisplayName = "Health"),
	MaxHealth UMETA(DisplayName = "Maximum health"),
	PhysicalStrength UMETA(DisplayName = "Physical strength"),
	MagicalStrength UMETA(DisplayName = "Magical strength"),
	Stamina UMETA(DisplayName = "Stamina"),
	MaxStamina UMETA(DisplayName = "Maximum stamina"),
	MeleeRange UMETA(DisplayName = "Melee range"),
	RangeDistance UMETA(DisplayName = "Range distance"),
	Armor UMETA(DisplayName = "Armor"),
	MaxArmor UMETA(DisplayName = "Maximum armor"),
	Mana UMETA(DisplayName = "Mana"),
	MaxMana UMETA(DisplayName = "Maximum mana"),
	PhysDmgResistance UMETA(DisplayName = "Physical damage resistance"),
	MagDmgResistance UMETA(DisplayName = "Magical damage resistance"),
	AbilityPower UMETA(DisplayName = "Ability power"),
};