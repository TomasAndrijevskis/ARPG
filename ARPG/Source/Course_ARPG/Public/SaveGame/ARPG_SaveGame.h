
#pragma once

#include "CoreMinimal.h"
#include "Data/Abilities/AbilitySaveData.h"
#include "Data/BonfireData.h"
#include "GameFramework/SaveGame.h"
#include "Data/EEffects.h"
#include "Data/EAttributes.h"
#include "Data/PersistentData/PlayerLevelData.h"
#include "ARPG_SaveGame.generated.h"


class UAbilityComponent_Base;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UARPG_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TMap<TEnumAsByte<EAttributes>, int32> Attributes;

	UPROPERTY(SaveGame)
	FPlayerLevelData LevelData;

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
