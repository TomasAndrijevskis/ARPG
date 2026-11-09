
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "ARPG_GameMode.generated.h"


class AEnemySpawner;
class AARPG_PlayerController;

UCLASS()
class COURSE_ARPG_API AARPG_GameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	void SpawnEnemies();
	
	virtual UClass* GetDefaultPawnClassForController_Implementation(AController* InController) override;

	virtual AActor* ChoosePlayerStart_Implementation(AController* Player) override;
	
private:
	
	UPROPERTY(VisibleAnywhere)
	TArray<AActor*> EnemySpawners;
};
