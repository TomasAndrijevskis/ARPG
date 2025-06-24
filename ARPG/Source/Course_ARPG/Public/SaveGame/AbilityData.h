#pragma once

#include "CoreMinimal.h"
#include "AbilityData.generated.h"

USTRUCT(BlueprintType)
struct FAbilityData
{
	GENERATED_BODY()

	UPROPERTY()
	bool bIsUnlocked = false;

	UPROPERTY()
	int32 CurrentLevel = 0;

	UPROPERTY()
	int32 ManaCost = 0;

	UPROPERTY()
	float AbilityDuration = 0;

	UPROPERTY()
	float CooldownDuration = 0;

	UPROPERTY()
	TMap<FString, float> CustomProperties;
	
};
