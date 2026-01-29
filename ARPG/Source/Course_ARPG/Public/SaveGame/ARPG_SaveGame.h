
#pragma once

#include "CoreMinimal.h"
#include "AbilityData.h"
#include "Objects/BonfireData.h"
#include "GameFramework/SaveGame.h"
#include "ARPG_SaveGame.generated.h"


class UAbilityComponent_Base;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UARPG_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY()
	float CurrentHealth;

	UPROPERTY()
	float MaxHealth;

	UPROPERTY()
	float CurrentMana;

	UPROPERTY()
	float MaxMana;

	UPROPERTY()
	float PhysicalStrength;

	UPROPERTY()
	float MagicalStrength;
	
	UPROPERTY()
	float MaxStamina;

	UPROPERTY()
	float CurrentStamina;

	UPROPERTY()
	int Endurance;

	UPROPERTY()
	int Intelligence;

	UPROPERTY()
	int Strength;

	UPROPERTY()
	int Arcane;

	UPROPERTY()
	int Wisdom;

	UPROPERTY()
	int Vigor;
	
	UPROPERTY()
	float CurrentXP;

	UPROPERTY()
	int CurrentLevel;

	UPROPERTY()
	int CurrentStatPoints;

	UPROPERTY()
	int CurrentAbilityPoints;

	UPROPERTY()
	int UsedAttributePoints;

	UPROPERTY()
	int UsedAbilityPoints;
	
	UPROPERTY()
	FVector PlayerLocation;

	UPROPERTY()
	FString CurrentMap;
	
	UPROPERTY()
	TMap<FString, FAbilityData> UnlockedAbilities;

	UPROPERTY()
	TMap<FString, FBonfireData> UnlockedBonfires;

	UPROPERTY()
	TSubclassOf<AMainCharacter_Base> PlayerCharacter;

	UPROPERTY()
	TArray<FName> DefeatedBosses;
};
