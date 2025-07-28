
#include "Characters/Spawner/EnemySpawner.h"
#include "Characters/EnemyCharacter_Base.h"


void AEnemySpawner::BeginPlay()
{
	Super::BeginPlay();
	CheckEnemies();
}


void AEnemySpawner::CheckEnemies()
{
	if (SpawnedEnemies.IsEmpty())
	{
		SpawnEnemies();
	}
	else
	{
		for (auto Enemy : SpawnedEnemies)
		{
			Enemy->Destroy();
		}
		SpawnedEnemies.Empty();
		SpawnEnemies();
	}
}


void AEnemySpawner::SpawnEnemies()
{
	for (int i = 0; i < EnemySpawnCount; i++)
	{
		FVector SpawnLocation = GetActorLocation();
		int RandomX = FMath::RandRange(MinSpawnRange, MaxSpawnRange);
		int RandomY = FMath::RandRange(MinSpawnRange, MaxSpawnRange);
		SpawnLocation.X += RandomX * 100;
		SpawnLocation.Y += RandomY * 100;
	
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		AEnemyCharacter_Base* SpawnedEnemy = GetWorld()->SpawnActor<AEnemyCharacter_Base>(EnemyClass, SpawnLocation, FRotator::ZeroRotator, SpawnParameters);
		if (SpawnedEnemy)
		{
			SpawnedEnemies.Add(SpawnedEnemy);
		}
	}
}

