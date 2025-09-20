#pragma once

#include "CoreMinimal.h"
#include "BonfireData.generated.h"

USTRUCT(BlueprintType)
struct FBonfireData
{
	GENERATED_BODY()

	UPROPERTY()
	FVector Location;

	UPROPERTY()
	FString MapName;
};
