
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Objects/BonfireData.h"
#include "ARPG_PlayerController.generated.h"


class ABoss;
class ABonfire;
class UARPG_GameInstance;
class AMainCharacter_Base;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnGamePauseStateChangeRequestSignature, const bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlayerInputEnabledChangedSignature, const bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnTeleportPlayerRequestSignature, const FVector&);
DECLARE_MULTICAST_DELEGATE(FOnPlayerTeleportedSignature);
UCLASS()
class COURSE_ARPG_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	UFUNCTION()
	void HandleBonfireMenuQuit();

	UFUNCTION()
	void HandleResetMenuQuit();
	
	UFUNCTION()
	void SetIsInBonfireRange(const bool bNewIsInBonfireRange, ABonfire* BonfireInRange);

	UFUNCTION()
	void SetIsInDoorRange(const bool bNewIsInDoorRange);

	UFUNCTION()
	void SetIsInMagicalCubeRange(const bool bNewIsInMagicalCubeRange);
	
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

	TMap<FString, FBonfireData>& GetUnlockedBonfires();

	ABonfire*& GetCurrentBonfire();

	FOnGamePauseStateChangeRequestSignature OnGamePauseStateChangeRequestDelegate;

	FOnPlayerInputEnabledChangedSignature OnPlayerInputEnabledChangedDelegate;

	FOnTeleportPlayerRequestSignature OnTeleportPlayerRequestDelegate;

	FOnPlayerTeleportedSignature OnPlayerTeleportedDelegate;
	
protected:
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void HandleBonfireInteraction();

	UFUNCTION(BlueprintCallable)
	void HandleMagicalCubeInteraction();
	
	UFUNCTION(BlueprintCallable)
	void TeleportToMap();
	
private:
	
	void QuitGame() const;
	
	void HandleGamePause(const bool bIsGamePaused);
	
	UFUNCTION()
	void SetPlayerControllerSettings();

	UFUNCTION()
	void HandleGameLoad() const;

	void SetPlayerInputEnabled(const bool IsEnabled);

	void TeleportPlayer(const FVector& Location);
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstanceRef;
	
	UPROPERTY()
	ABonfire* BonfireRef;
	
	UPROPERTY(VisibleAnywhere)
	TArray<FName> DefeatedBosses;

	TMap<FString, FBonfireData> UnlockedBonfires;
	
	bool bIsAbilityScreenOpened = false;
	
	bool bIsStatsScreenOpened = false;

	bool bIsInBonfireRange = false;

	bool bIsInDoorRange = false;

	bool bIsInMagicalCubeRange = false;
	
	FString MapName;
};