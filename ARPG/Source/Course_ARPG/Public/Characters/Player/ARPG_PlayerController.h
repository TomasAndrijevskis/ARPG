
#pragma once

#include "CoreMinimal.h"
#include "Data/SpawnPoint.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/Interactable.h"
#include "ARPG_PlayerController.generated.h"


class UTransitionAnim;
class ABoss;
class UARPG_GameInstance;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	void HandleBonfireInteraction(const FSpawnPoint& LastSpawnPoint);
	
	void HandleBonfireMenuQuit();
	
	void SetIsInMagicalCubeRange(const bool bNewIsInMagicalCubeRange);

	void SetIsInMagicalSphereRange(const bool bNewIsInMagicalSphereRange);
	
	UFUNCTION()
	void LoadToMainMenu();
	
	UFUNCTION()
	void RemovePauseMenu();

	UFUNCTION()
	void SaveBeforeQuit();
	
	void SetInteractable(IInteractable* InteractableRef);
	
	void HandleGamePause(const bool bIsGamePaused);

	void SetPlayerInputEnabled(const bool IsEnabled);

	UFUNCTION()
	void HandleMagicalCubeInteraction();

	UFUNCTION()
	void HandleEnchantmentSphereInteraction();
	
	void OnMenuClosed();
	
	TSubclassOf<UTransitionAnim> GetTransitionAnimClass() {return TransitionAnimClass;}
	
protected:
	
	virtual void BeginPlay() override;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void Interact();
	
	void QuitGame() const;
	
	UFUNCTION()
	void SetPlayerControllerSettings();

	UFUNCTION()
	void HandleGameLoad() const;

	UFUNCTION(BlueprintCallable)
	void CreatePauseMenu();
	
	void OnPlayerRequestedTeleport();
	
	TWeakInterfacePtr<IInteractable> CurrentInteractable = nullptr;
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstanceRef;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UTransitionAnim> TransitionAnimClass;
	
	bool bIsAbilityScreenOpened = false;
	
	bool bIsStatsScreenOpened = false;

	bool bIsInMagicalCubeRange = false;

	bool bIsInMagicalSphereRange = false;

	bool bIsItemOverlapped = false;
	
};