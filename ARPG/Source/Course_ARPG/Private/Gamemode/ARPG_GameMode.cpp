
#include "Gamemode/ARPG_GameMode.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"

UClass* AARPG_GameMode::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	
	/*UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (GameInstance)
	{
		if (!GameInstance->PlayerCharacterClass)
		{
			UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(GameInstance->GetSlotName(), 0));
		
			if (SaveGameInstance && SaveGameInstance->PlayerCharacter)
			{
				UE_LOG(LogTemp,Error,TEXT("GM, Loaded class: %s"), *SaveGameInstance->PlayerCharacter->GetName());
				return SaveGameInstance->PlayerCharacter;
			} 
		}
		return GameInstance->PlayerCharacterClass;
	}*/

	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(GameInstance->GetSlotName(), 0));
		
	if (SaveGameInstance && SaveGameInstance->PlayerCharacter)
	{
		UE_LOG(LogTemp,Error,TEXT("GM, Loaded class: %s"), *SaveGameInstance->PlayerCharacter->GetName());
		return SaveGameInstance->PlayerCharacter;
	}
	return Super::GetDefaultPawnClassForController_Implementation(InController);
}

