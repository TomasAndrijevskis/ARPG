

#pragma once

#include "CoreMinimal.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "GameFramework/Actor.h"
#include "Spawner.generated.h"

class AEnemyCharacter;

UCLASS()
class COURSE_ARPG_API ASpawner : public AActor
{
	GENERATED_BODY()

public:
	
	virtual void CheckEnemies(){};
	
protected:

	virtual void BeginPlay() override;

	virtual void SpawnEnemies(){};

	UPROPERTY(EditAnywhere)
	TSubclassOf<AEnemyCharacter> EnemyClass;
	
	virtual void RemoveEnemyFromArray(AEnemyCharacter* Enemy){};
};
