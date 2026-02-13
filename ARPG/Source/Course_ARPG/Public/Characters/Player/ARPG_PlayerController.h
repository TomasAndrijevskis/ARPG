
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Data/BonfireData.h"
#include "ARPG_PlayerController.generated.h"


class ABoss;
class ABonfire;
class UARPG_GameInstance;
class AMainCharacter_Base;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnGamePauseStateChangeRequest, const bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnPlayerInputEnabledChanged, const bool);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnTeleportPlayerRequest, const FVector&);
DECLARE_MULTICAST_DELEGATE(FOnPlayerTeleported);
UCLASS()
class COURSE_ARPG_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	void HandleBonfireMenuQuit();
	
	void HandleResetMenuQuit();
	
	void HandleEnchantmentMenuQuit();
	
	void SetIsInBonfireRange(const bool bNewIsInBonfireRange, ABonfire* BonfireInRange);
	
	void SetIsInDoorRange(const bool bNewIsInDoorRange);
	
	void SetIsInMagicalCubeRange(const bool bNewIsInMagicalCubeRange);

	void SetIsInMagicalSphereRange(const bool bNewIsInMagicalSphereRange);
	
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

	FOnGamePauseStateChangeRequest OnGamePauseStateChangeRequestDelegate;

	FOnPlayerInputEnabledChanged OnPlayerInputEnabledChangedDelegate;

	FOnTeleportPlayerRequest OnTeleportPlayerRequestDelegate;

	FOnPlayerTeleported OnPlayerTeleportedDelegate;
	
protected:
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void HandleBonfireInteraction();

	UFUNCTION(BlueprintCallable)
	void HandleMagicalCubeInteraction();
	
	UFUNCTION(BlueprintCallable)
	void TeleportToMap();

	UFUNCTION(BlueprintCallable)
	void HandleEnchantmentSphereInteraction();
	
private:
	
	void QuitGame() const;
	
	void HandleGamePause(const bool bIsGamePaused);
	
	UFUNCTION()
	void SetPlayerControllerSettings();

	UFUNCTION()
	void HandleGameLoad() const;

	void SetPlayerInputEnabled(const bool IsEnabled);

	void TeleportToLocation(const FVector& Location);
	
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

	bool bIsInMagicalSphereRange = false;
	
	FString MapName;
};