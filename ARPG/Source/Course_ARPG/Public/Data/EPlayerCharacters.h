
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum EPlayerCharacters
{
	Void UMETA(DisplayName = "None Selected"),
	Archer UMETA(DisplayName = "Archer"),
	Mage UMETA(DisplayName = "Mage"),
	Warrior UMETA(DisplayName = "Warrior"),
};