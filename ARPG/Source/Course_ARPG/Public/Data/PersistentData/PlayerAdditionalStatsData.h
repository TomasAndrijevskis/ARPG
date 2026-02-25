
#pragma once

#include "CoreMinimal.h"
#include "PlayerAdditionalStatsData.generated.h"


USTRUCT()
struct FPlayerAdditionalStatsData
{
	GENERATED_BODY()
	
	float PhysicalStrength;
	float MagicalStrength;
	float PhysDamageResistance;
	float MagDamageResistance;
	float AbilityPower;
	float ElementalResistance;
	float ElementalDamageModificator;
};