
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EnemySpawner.generated.h"

class AEnemyCharacter_Base;

UCLASS()
class COURSE_ARPG_API AEnemySpawner : public AActor
{
	GENERATED_BODY()
	
public:
	
	AEnemySpawner(){};

	void CheckEnemies();

protected:

	virtual void BeginPlay() override;
	
private:

	void SpawnEnemies();

	int GetRandomSpawnDistance();
	
	UPROPERTY(EditAnywhere)
	int EnemySpawnCount;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AEnemyCharacter_Base> EnemyClass;

	UPROPERTY(VisibleAnywhere)
	TArray<AEnemyCharacter_Base*> SpawnedEnemies;

	UPROPERTY(EditAnywhere)
	int MinSpawnRange;

	UPROPERTY(EditAnywhere)
	int MaxSpawnRange;
	
};
