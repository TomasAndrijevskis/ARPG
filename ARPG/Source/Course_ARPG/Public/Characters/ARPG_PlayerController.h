

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ARPG_PlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COURSE_ARPG_API AARPG_PlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	AARPG_PlayerController() {};
	
	UFUNCTION(BlueprintCallable)
	void HandleGamePause(bool bIsGamePaused);

protected:

	UFUNCTION(BlueprintCallable)
	void HandleGameLoad();
};
