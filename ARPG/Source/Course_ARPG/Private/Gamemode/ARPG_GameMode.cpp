
#include "Gamemode/ARPG_GameMode.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Characters/Spawner/EnemySpawner.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"


UClass* AARPG_GameMode::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(GameInstance->GetSlotName(), 0));
		
	if (SaveGameInstance && SaveGameInstance->PlayerCharacter) return SaveGameInstance->PlayerCharacter;
	return Super::GetDefaultPawnClassForController_Implementation(InController);
}


void AARPG_GameMode::SpawnEnemies()
{
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawner::StaticClass(), EnemySpawners);
	
	for (auto Spawner : EnemySpawners)
	{
		Cast<ASpawner>(Spawner)->CheckEnemies();
	}
}

