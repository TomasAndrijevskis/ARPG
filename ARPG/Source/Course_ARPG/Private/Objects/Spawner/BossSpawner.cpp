
#include "Objects/Spawner/BossSpawner.h"
#include "Characters/Enemy/Boss.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/ARPG_PlayerState.h"
#include "Kismet/GameplayStatics.h"


void ABossSpawner::CheckEnemies()
{
	if (APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0))
	{
		if (AARPG_PlayerState* PS = PC->GetPlayerState<AARPG_PlayerState>())
		{
			if (SpawnedBoss) return;
			if (PS->GetDefeatedBosses().IsEmpty())
			{
				SpawnEnemies();
				return;
			}
			bShouldSpawn = true;
			for (auto Boss : PS->GetDefeatedBosses())
			{
				if (EnemyClass->GetName() == Boss) bShouldSpawn = false;
			}
			if (bShouldSpawn) SpawnEnemies();
		}
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
