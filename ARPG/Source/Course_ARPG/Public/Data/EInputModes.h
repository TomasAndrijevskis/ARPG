
#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum EInputModes
{
	UIOnly UMETA(DisplayName = "UIOnly"),
	GameOnly UMETA(DisplayName = "Game Only"),
	GameAndUI UMETA(DisplayName = "Game And UI"),
};