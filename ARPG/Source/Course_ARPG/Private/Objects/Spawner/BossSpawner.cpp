
#include "Objects/Spawner/BossSpawner.h"
#include "Characters/Enemy/Boss.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/ARPG_PlayerController.h"


void ABossSpawner::CheckEnemies()
{
	PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController) return;
	if (SpawnedBoss) return;
	if (PlayerController->GetDefeatedBosses().IsEmpty())
	{
		SpawnEnemies();
		return;
	}
	bShouldSpawn = true;
	for (auto Boss : PlayerController->GetDefeatedBosses())
	{
		if (EnemyClass->GetName() == Boss) bShouldSpawn = false;
	}
	if (bShouldSpawn) SpawnEnemies();
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
