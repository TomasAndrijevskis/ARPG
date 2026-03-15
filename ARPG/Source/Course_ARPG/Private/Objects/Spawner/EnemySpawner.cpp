
#include "Objects/Spawner/EnemySpawner.h"
#include "Characters/Enemy/EnemyCharacter.h"


void AEnemySpawner::CheckEnemies()
{
	if (SpawnedEnemies.IsEmpty()) SpawnEnemies();
	else
	{
		for (auto Enemy : SpawnedEnemies)
		{
			if (IsValid(Enemy))
			{
				Enemy->OnEnemyDiedDelegate.RemoveAll(this);
				Enemy->Destroy();
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
			SpawnedEnemy->OnEnemyDiedDelegate.AddUObject(this, &AEnemySpawner::RemoveEnemyFromArray);
		}
	}
}



int AEnemySpawner::GetRandomSpawnDistance() const{return FMath::RandRange(MinSpawnRange, MaxSpawnRange);}