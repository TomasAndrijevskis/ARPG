
#pragma once

#include "CoreMinimal.h"
#include "AbilityData.h"
#include "Objects/BonfireData.h"
#include "GameFramework/SaveGame.h"
#include "ARPG_SaveGame.generated.h"

class ABoss;
class UAbilityComponent_Base;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UARPG_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UARPG_SaveGame(){};

	UPROPERTY()
	float CurrentHealth;

	UPROPERTY()
	float MaxHealth;

	UPROPERTY()
	float CurrentMana;

	UPROPERTY()
	float MaxMana;

	UPROPERTY()
	float Strength;

	UPROPERTY()
	float MaxStamina;

	UPROPERTY()
	float CurrentXP;

	UPROPERTY()
	int CurrentLevel;

	UPROPERTY()
	int CurrentStatPoints;

	UPROPERTY()
	int CurrentAbilityPoints;

	UPROPERTY()
	FVector PlayerLocation;

	UPROPERTY()
	FString CurrentMap;
	
	UPROPERTY(EditAnywhere)
	TMap<FString, FAbilityData> UnlockedAbilities;

	UPROPERTY(EditAnywhere)
	TMap<FString, FBonfireData> UnlockedBonfires;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMainCharacter_Base> PlayerCharacter;

	UPROPERTY(EditAnywhere)
	TArray<FName> DefeatedBosses;
};
