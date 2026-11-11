
#pragma once

#include "CoreMinimal.h"
#include "Spawner.h"
#include "BossSpawner.generated.h"


class ABoss;
class AARPG_PlayerController;

UCLASS()
class COURSE_ARPG_API ABossSpawner : public ASpawner
{
	GENERATED_BODY()
	
protected:

	virtual void CheckEnemies() override;

	virtual void SpawnEnemies() override;

private:
	
	ABoss* SpawnedBoss;

	bool bShouldSpawn;
};

