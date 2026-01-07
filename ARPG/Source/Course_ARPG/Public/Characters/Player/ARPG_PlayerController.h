
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Objects/BonfireData.h"
#include "ARPG_PlayerController.generated.h"


class ABoss;
class ABonfire;
class UARPG_GameInstance;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	UFUNCTION()
	void HandleQuitBonfireMenu();

	UFUNCTION()
	void CreateQuickTravelMenu();

	UFUNCTION()
	void RemoveQuickTravelMenu();
	
	UFUNCTION()
	void SetIsInBonfireRange(const bool bNewIsInBonfireRange, ABonfire* BonfireInRange);

	UFUNCTION()
	void SetIsInDoorRange(const bool bNewIsInDoorRange);

	UFUNCTION()
	void SetMapName(const FString& NewMapName);
	
	UFUNCTION()
	void LoadToMainMenu();

	UFUNCTION()
	void SaveAll() const;

	UFUNCTION(BlueprintCallable)
	void CreatePauseMenu();

	UFUNCTION()
	void RemovePauseMenu();

	UFUNCTION()
	void SaveBeforeQuit();
	
	TArray<FName> GetDefeatedBosses() const;

	void AddDefeatedBoss(const FName& Boss);
	
	TMap<FString, FBonfireData> UnlockedBonfires;

protected:
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void HandleBonfireInteraction();

	UFUNCTION(BlueprintCallable)
	void TeleportToMap();
	
private:
	
	void QuitGame() const;
	
	UFUNCTION()
	void HandleGamePause(const bool bIsGamePaused);
	
	UFUNCTION()
	void SetPlayerControllerSettings();

	UFUNCTION()
	void HandleGameLoad() const;
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstanceRef;
	
	UPROPERTY()
	ABonfire* BonfireRef;
	
	UPROPERTY(VisibleAnywhere)
	TArray<FName> DefeatedBosses;
	
	bool bIsAbilityScreenOpened = false;
	
	bool bIsStatsScreenOpened = false;

	bool bIsInBonfireRange = false;

	bool bIsInDoorRange = false;

	FString MapName;
};
