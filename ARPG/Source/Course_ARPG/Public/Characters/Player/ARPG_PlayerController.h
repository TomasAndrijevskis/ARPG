
#pragma once

#include "CoreMinimal.h"
#include "Data/SpawnPoint.h"
#include "GameFramework/PlayerController.h"
#include "Interfaces/Interactable.h"
#include "ARPG_PlayerController.generated.h"


class AHUD_Base;
class UTransitionAnim;
class ABoss;
class UARPG_GameInstance;
class AMainCharacter_Base;


DECLARE_MULTICAST_DELEGATE(FOnBonfireInteractionFinished);
DECLARE_MULTICAST_DELEGATE(FOnPlayerDied);
UCLASS()
class COURSE_ARPG_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	void HandleBonfireInteraction(const FSpawnPoint& LastSpawnPoint);
	
	void HandleBonfireWidgetQuit();
	
	void SetIsInMagicalCubeRange(const bool bNewIsInMagicalCubeRange);

	void SetIsInMagicalSphereRange(const bool bNewIsInMagicalSphereRange);
	
	UFUNCTION()
	void LoadToMainMenu();
	
	UFUNCTION()
	void RemovePauseMenu();

	UFUNCTION()
	void SaveBeforeQuit();
	
	void SetInteractable(IInteractable* InteractableRef);

	void SetPlayerInputEnabled(const bool IsEnabled);

	UFUNCTION()
	void HandleMagicalCubeInteraction();

	UFUNCTION()
	void HandleEnchantmentSphereInteraction();
	
	void OnWidgetClosed();

	void OnWidgetOpened();

	virtual void OnPossess(APawn* aPawn) override;

	void CreateHUD();
	
	UFUNCTION()
	void HandleDeath();

	void OnDeathAnimationFinished();
	
	TSubclassOf<UTransitionAnim> GetTransitionAnimClass() {return TransitionAnimClass;}

	FOnBonfireInteractionFinished FOnBonfireInteractionFinishedDelegate;

	FOnPlayerDied OnPlayerDiedDelegate;
	
protected:
	
	virtual void BeginPlay() override;

private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void Interact();
	
	void QuitGame() const;
	
	void HandleGameLoad();

	void OnPlayerRequestedTeleport();

	void HandleGamePause(const bool bIsGamePaused);

	UFUNCTION(BlueprintCallable)
	void TogglePauseWidget();
	
	UPROPERTY()
	AHUD_Base* HUD;
	
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