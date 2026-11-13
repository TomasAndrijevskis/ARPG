
#pragma once

#include "CoreMinimal.h"
#include "Spawner.h"
#include "Data/EEnemyStates.h"
#include "EnemySpawner.generated.h"


UCLASS()
class COURSE_ARPG_API AEnemySpawner : public ASpawner
{
	GENERATED_BODY()

protected:
	
	virtual void SpawnEnemies() override;

	virtual void CheckEnemies() override;

	UFUNCTION()
	virtual void RemoveEnemyFromArray(AEnemyCharacter* Enemy) override;
	
private:
	
	int GetRandomSpawnDistance() const;
	
	UPROPERTY(EditAnywhere)
	int EnemySpawnCount;
	
	UPROPERTY(VisibleAnywhere)
	TArray<AEnemyCharacter*> SpawnedEnemies;

	UPROPERTY(EditAnywhere)
	int MinSpawnRange;

	UPROPERTY(EditAnywhere)
	int MaxSpawnRange;

	UPROPERTY(EditAnywhere)
	EEnemyStates InitialState;
	
};
