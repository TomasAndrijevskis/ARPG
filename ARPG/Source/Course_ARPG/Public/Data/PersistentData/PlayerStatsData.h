
#pragma once

#include "CoreMinimal.h"
#include "PlayerStatsData.generated.h"


USTRUCT()
struct FPlayerStatsData
{
	GENERATED_BODY()

	float Health;
	float MaxHealth;
	float PhysicalStrength;
	float MagicalStrength;
	float Stamina;
	float MaxStamina;
	float MeleeRange;
	float Armor;
	float MaxArmor;
	float Mana;
	float MaxMana;
};