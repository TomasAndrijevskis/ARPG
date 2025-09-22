
#pragma once

#include "CoreMinimal.h"
#include "Spawner.h"
#include "EnemySpawner.generated.h"


UCLASS()
class COURSE_ARPG_API AEnemySpawner : public ASpawner
{
	GENERATED_BODY()
	
public:
	
	AEnemySpawner(){};

protected:
	
	virtual void SpawnEnemies() override;

	virtual void CheckEnemies() override;
	
private:
	
	int GetRandomSpawnDistance();
	
	UPROPERTY(EditAnywhere)
	int EnemySpawnCount;
	
	UPROPERTY(VisibleAnywhere)
	TArray<AEnemyCharacter*> SpawnedEnemies;

	UPROPERTY(EditAnywhere)
	int MinSpawnRange;

	UPROPERTY(EditAnywhere)
	int MaxSpawnRange;
	
};
