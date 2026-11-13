
#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EEnemyStates : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Range UMETA(DisplayName = "Range"),
	Charge UMETA(DisplayName = "Charge"),
	Melee UMETA(DisplayName = "Melee"),
	GameOver UMETA(DisplayName = "GameOver"),
	Patrol UMETA(DisplayName = "Patrol"),
	GoingBack UMETA(DisplayName = "GoingBack"),
	PhaseTransition UMETA(DisplayName = "PhaseTransition"),
	SpecialAttack UMETA(DisplayName = "SpecialAttack"),
	Summon UMETA(DisplayName = "Summon")
};