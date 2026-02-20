
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Data/BonfireData.h"
#include "Data/EAnimTypes.h"
#include "ARPG_PlayerController.generated.h"


class UTransitionAnim;
class ABoss;
class ABonfire;
class UARPG_GameInstance;
class AMainCharacter_Base;

DECLARE_MULTICAST_DELEGATE(FOnPlayerTeleportRequest);
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

	UFUNCTION()
	void RemovePauseMenu();

	UFUNCTION()
	void SaveBeforeQuit();
	
	TArray<FName> GetDefeatedBosses() const;

	void SetDefeatedBosses(const TArray<FName>& Bosses);

	void AddDefeatedBoss(const FName& Boss);

	TMap<FString, FBonfireData>& GetUnlockedBonfires();

	void SetUnlockedBonfires(const TMap<FString, FBonfireData>& NewUnlockedBonfires);

	UFUNCTION(BlueprintCallable)
	void HandlePlayerTeleport(const FVector& TravelLocation, const FString& TravelMapName);
	
	ABonfire*& GetCurrentBonfire();

	FOnPlayerTeleportRequest OnPlayerTeleportRequestDelegate;
	
protected:
	
	virtual void BeginPlay() override;

	UFUNCTION(BlueprintCallable)
	void HandleBonfireInteraction();

	UFUNCTION(BlueprintCallable)
	void HandleMagicalCubeInteraction();
	
	void TeleportToMap(FVector TravelLocation, FString TravelMapName);

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

	void StartTransitionAnim(EAnimTypes AnimType, float& AnimDuration);

	void HandleTeleportDestination(FVector TravelLocation, FString TravelMapName);

	void HandleTeleportTimers(float AnimDuration, const FTimerDelegate& Delegate);

	void PlayFadeAnim(EAnimTypes AnimType);

	void OpenRequiredLevel(FName NextMapName);

	UFUNCTION(BlueprintCallable)
	void CreatePauseMenu();
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstanceRef;
	
	UPROPERTY()
	ABonfire* BonfireRef;
	
	UPROPERTY(VisibleAnywhere)
	TArray<FName> DefeatedBosses;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UTransitionAnim> TransitionAnimClass;
	
	TMap<FString, FBonfireData> UnlockedBonfires;
	
	bool bIsAbilityScreenOpened = false;
	
	bool bIsStatsScreenOpened = false;

	bool bIsInBonfireRange = false;

	bool bIsInDoorRange = false;

	bool bIsInMagicalCubeRange = false;

	bool bIsInMagicalSphereRange = false;
	
	FString MapName;
};