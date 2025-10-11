
#include "Characters/Spawner/EnemySpawner.h"
#include "Characters/EnemyCharacter.h"


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
			if (IsValid(Enemy))
			{
				Enemy->Destroy();
				Enemy->OnEnemyDiedDelegate.RemoveDynamic(this, &AEnemySpawner::RemoveEnemyFromArray);
			}
		}
		SpawnedEnemies.Empty();
		SpawnEnemies();
	}
}


void AEnemySpawner::RemoveEnemyFromArray(AEnemyCharacter* Enemy)
{
	SpawnedEnemies.Remove(Enemy);
}


void AEnemySpawner::SpawnEnemies()
{
	for (int i = 0; i < EnemySpawnCount; i++)
	{
		FVector SpawnLocation = GetActorLocation();
		SpawnLocation.X += GetRandomSpawnDistance() * 100;
		SpawnLocation.Y += GetRandomSpawnDistance() * 100;
	
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		AEnemyCharacter* SpawnedEnemy = GetWorld()->SpawnActor<AEnemyCharacter>(EnemyClass, SpawnLocation, GetActorRotation(), SpawnParameters);
		if (SpawnedEnemy)
		{
			SpawnedEnemy->SetInitialState(InitialState);
			SpawnedEnemies.Add(SpawnedEnemy);
			SpawnedEnemy->OnEnemyDiedDelegate.AddDynamic(this, &AEnemySpawner::RemoveEnemyFromArray);
		}
	}
}



int AEnemySpawner::GetRandomSpawnDistance() const
{
	return FMath::RandRange(MinSpawnRange, MaxSpawnRange);
}

