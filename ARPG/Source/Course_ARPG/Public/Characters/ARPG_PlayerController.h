
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Objects/BonfireData.h"
#include "ARPG_PlayerController.generated.h"


//struct FBonfireData;
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
	void CreateStatsScreen();

	UFUNCTION()
	void CreateAbilityUpgradeScreen();
	
	UFUNCTION()
	void RemoveBonfireMenuWidget();

	UFUNCTION()
	void CreateQuickTravelMenu();

	UFUNCTION()
	void RemoveQuickTravelMenu();
	
	UFUNCTION()
	void SetIsInBonfireRange(bool bNewIsInBonfireRange, ABonfire* BonfireInRange);

	UFUNCTION()
	void SetIsInDoorRange(bool bNewIsInDoorRange);

	UFUNCTION()
	void SetMapName(FString NewMapName);
	
	UFUNCTION()
	void LoadToMainMenu();

	UFUNCTION()
	void SaveAll();

	TArray<FName> GetDefeatedBosses();

	void AddDefeatedBoss(FName Boss);
	
	TMap<FString, FBonfireData> UnlockedBonfires;

protected:
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void CreateBonfireMenuWidget();

	UFUNCTION(BlueprintCallable)
	void TeleportToMap();
	
private:

	UFUNCTION()
	void HandleGamePause(bool bIsGamePaused);
	
	UFUNCTION()
	void SetPlayerControllerSettings();

	UFUNCTION()
	void HandleGameLoad();
	
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
