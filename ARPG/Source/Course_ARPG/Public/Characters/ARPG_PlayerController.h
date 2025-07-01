
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ARPG_PlayerController.generated.h"


class UARPG_GameInstance;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void HandleGamePause(bool bIsGamePaused);

	UFUNCTION(BlueprintCallable)
	void CreateStatsScreen();

	UFUNCTION(BlueprintCallable)
	void CreateAbilityUpgradeScreen();
	
protected:
	
	UFUNCTION(BlueprintCallable)
	void HandleGameLoad();
	
	UFUNCTION(BlueprintCallable)
	void SetPlayerControllerSettings();

	virtual void BeginPlay() override;

private:

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
	UPROPERTY()
	UARPG_GameInstance* GameInstanceRef;

	bool bIsAbilityScreenOpened = false;
	
	bool bIsStatsScreenOpened = false;
	
};
