
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class EEffects : uint8
{
	Empty UMETA(DisplayName = "None Selected"),
	Fire UMETA(DisplayName = "Fire"),
	Ice UMETA(DisplayName = "Ice"),
	Poison UMETA(DisplayName = "Poison"),
};