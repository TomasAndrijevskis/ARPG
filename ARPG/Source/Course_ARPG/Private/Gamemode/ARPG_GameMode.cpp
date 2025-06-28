
#include "Gamemode/ARPG_GameMode.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"

UClass* AARPG_GameMode::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (GameInstance)
	{
		if (!GameInstance->PlayerCharacterClass)
		{
			UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(GameInstance->GetSlotName(), 0));
		
			if (SaveGameInstance && SaveGameInstance->PlayerCharacter)
			{
				return SaveGameInstance->PlayerCharacter;
			} 
		}
		return GameInstance->PlayerCharacterClass;
	}
	return Super::GetDefaultPawnClassForController_Implementation(InController);

	/*UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (GameInstance)
	{
		if (IsValid(GameInstance->PlayerCharacterClass))
		{
			UE_LOG(LogTemp, Error, TEXT("Works fine"));
			return GameInstance->PlayerCharacterClass;
		}
		else
		{
			UE_LOG(LogTemp, Error, TEXT("Player class is not valid"));
		}
	}
	
	UE_LOG(LogTemp, Error, TEXT("Something wrong"));*/
}

