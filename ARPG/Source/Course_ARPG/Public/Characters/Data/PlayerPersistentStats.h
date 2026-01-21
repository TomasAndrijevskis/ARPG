
#pragma once

#include "CoreMinimal.h"
#include "PlayerPersistentStats.generated.h"


USTRUCT()
struct FPlayerPersistentStats
{
	GENERATED_BODY()
	
	float MaxHealth;
	float Health;
	float MaxMana;
	float Mana;
	float MaxStamina;
	float Stamina;
	float Strength;

	int32 CurrentLevel;
	int32 CurrentXP;
	int32 StatPoints;
	int32 AbilityPoints;
};