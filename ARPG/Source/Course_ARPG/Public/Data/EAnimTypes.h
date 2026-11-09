
#pragma once

#include "CoreMinimal.h"


UENUM(BlueprintType)
enum class EAnimTypes : uint8
{
	FadeIn UMETA(DisplayName = "Fade In"),
	FadeOut UMETA(DisplayName = "Fade Out"),
	FullFade UMETA(DisplayName = "Full Fade"),
};