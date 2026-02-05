
#pragma once

#include "CoreMinimal.h"
#include "PlayerMainStatsData.generated.h"


USTRUCT()
struct FPlayerMainStatsData
{
	GENERATED_BODY()

	float Health;
	float MaxHealth;
	float Stamina;
	float MaxStamina;
	float Mana;
	float MaxMana;
};