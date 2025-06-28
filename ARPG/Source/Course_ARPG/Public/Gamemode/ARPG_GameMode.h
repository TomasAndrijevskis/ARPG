
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ARPG_GameMode.generated.h"

class AARPG_PlayerController;

UCLASS()
class COURSE_ARPG_API AARPG_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController);
	
};
