
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "ARPG_SaveGame.generated.h"

class UAbilityComponent_Base;

UCLASS()
class COURSE_ARPG_API UARPG_SaveGame : public USaveGame
{
	GENERATED_BODY()

public:

	UARPG_SaveGame(){};

	UPROPERTY(EditAnywhere)
	float CurrentHealth;

	UPROPERTY(EditAnywhere)
	float MaxHealth;

	UPROPERTY(EditAnywhere)
	float CurrentMana;

	UPROPERTY(EditAnywhere)
	float MaxMana;

	UPROPERTY(EditAnywhere)
	float Strength;

	UPROPERTY(EditAnywhere)
	float MaxStamina;

	UPROPERTY(EditAnywhere)
	float CurrentXP;

	UPROPERTY(EditAnywhere)
	int CurrentLevel;

	UPROPERTY(EditAnywhere)
	int CurrentStatPoints;

	UPROPERTY(EditAnywhere)
	int CurrentAbilityPoints;

	UPROPERTY(EditAnywhere)
	TArray<bool> UnlockedAbilities;

};
