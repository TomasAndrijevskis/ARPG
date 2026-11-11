
#include "Gamemode/ARPG_GameMode.h"
#include "EngineUtils.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "GameFramework/PlayerStart.h"
#include "Objects/Spawner/EnemySpawner.h"
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


AActor* AARPG_GameMode::ChoosePlayerStart_Implementation(AController* Player)
{
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance) return nullptr;

	FName DesiredTag = FName(GameInstance->GetSpawnPoint().LocationTag);
	UE_LOG(LogTemp, Error, TEXT("default DesiredTag: %s"), *DesiredTag.ToString());
	if (DesiredTag.IsNone()) DesiredTag = FName("Default");
	for (TActorIterator<APlayerStart> It(GetWorld()); It; ++It)
	{
		UE_LOG(LogTemp, Warning, TEXT("..."));
		if (It->PlayerStartTag == DesiredTag)
		{
			UE_LOG(LogTemp, Warning, TEXT("Found player start"));
			return *It;
		}
	}
	return Super::ChoosePlayerStart_Implementation(Player);
}

