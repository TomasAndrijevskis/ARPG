
#pragma once

#include "CoreMinimal.h"
#include "Data/Abilities/AbilitySaveData.h"
#include "Data/BonfireData.h"
#include "GameFramework/SaveGame.h"
#include "Data/EEffects.h"
#include "ARPG_SaveGame.generated.h"


class UAbilityComponent_Base;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UARPG_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:

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
	int CurrentExperience;

	UPROPERTY()
	int CurrentLevel;

	UPROPERTY()
	int CurrentAttributePoints;

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
	TMap<FString, FAbilitySaveData> UnlockedAbilities;

	UPROPERTY()
	TMap<FString, FBonfireData> UnlockedBonfires;

	UPROPERTY()
	TSubclassOf<AMainCharacter_Base> PlayerCharacter;

	UPROPERTY()
	TArray<FName> DefeatedBosses;

	UPROPERTY()
	EEffects Effect;
};
