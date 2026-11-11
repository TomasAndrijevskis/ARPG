
#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EInputModes : uint8
{
	UIOnly UMETA(DisplayName = "UIOnly"),
	GameOnly UMETA(DisplayName = "Game Only"),
	GameAndUI UMETA(DisplayName = "Game And UI"),
};