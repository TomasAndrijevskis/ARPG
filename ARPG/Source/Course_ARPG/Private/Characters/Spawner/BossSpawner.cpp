
#include "Characters/Spawner/BossSpawner.h"
#include "Characters/ARPG_PlayerController.h"
#include "Characters/Boss.h"


void ABossSpawner::CheckEnemies()
{
	//UE_LOG(LogTemp, Warning, TEXT("Spawning"));
	PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController)
	{
		return;
	}
	
	if (SpawnedBoss)
	{
		return;
	}
	if (PlayerController->GetDefeatedBosses().IsEmpty())
	{
		UE_LOG(LogTemp, Error, TEXT("Array is empty"));
		SpawnEnemies();
		return;
	}
	bShouldSpawn = true;
	for (auto Boss : PlayerController->GetDefeatedBosses())
	{
		if (EnemyClass->GetName() == Boss)
		{
			bShouldSpawn = false;
		}
	}
	if (bShouldSpawn)
	{
		SpawnEnemies();
	}
}


void ABossSpawner::SpawnEnemies()
{
	if (EnemyClass)
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;
		SpawnedBoss = GetWorld()->SpawnActor<ABoss>(EnemyClass, GetActorLocation(), GetActorRotation(), SpawnParameters);
	}
}
