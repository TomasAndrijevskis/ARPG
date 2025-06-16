
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"


void UARPG_GameInstance::SetSlotName(FString NewSlotName)
{
	SlotName = NewSlotName;
	UE_LOG(LogTemp, Error, TEXT("SlotName: %s"), *NewSlotName);
}


FString UARPG_GameInstance::GetSlotName()
{
	return SlotName;
}


void UARPG_GameInstance::SaveGame()
{
	UE_LOG(LogTemp, Error, TEXT("SaveGame: SlotName: %s"), *SlotName);
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	
	if (!CharacterRef || !SaveGameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("Game instance is null"));
		return;
	}
	
	//set the save game instance location equal to the player current location
	SaveGameInstance->CurrentHealth = CharacterRef->StatsComp->GetStatValue(EStats::Health);
	SaveGameInstance->MaxHealth = CharacterRef->StatsComp->GetStatValue(EStats::MaxHealth);
	SaveGameInstance->MaxStamina = CharacterRef->StatsComp->GetStatValue(EStats::MaxStamina);
	SaveGameInstance->Strength = CharacterRef->StatsComp->GetStatValue(EStats::Strength);
	SaveGameInstance->CurrentLevel = CharacterRef->LevelComp->GetCurrentLevel();
	SaveGameInstance->CurrentXP = CharacterRef->LevelComp->GetCurrentExperience();
	SaveGameInstance->CurrentPoints = CharacterRef->LevelComp->GetCurrentPointsAmount();
	
	//save the savegameinstance
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
	
	//log message
	UE_LOG(LogTemp, Warning, TEXT("Saved: %s"), *SlotName);
}


void UARPG_GameInstance::LoadGame()
{
	//create an instance of savegame class
	UE_LOG(LogTemp, Error, TEXT("SaveGame: SlotName: %s"), *SlotName);
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	
	if (!CharacterRef || !SaveGameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("Game instance is null"));
		return;
	}

	//load the saved game into a savegameinstance variable
	SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));

	//set the player location from the saved game file
	CharacterRef->StatsComp->SetStatValue(EStats::Health, SaveGameInstance->CurrentHealth);
	CharacterRef->StatsComp->SetStatValue(EStats::MaxHealth, SaveGameInstance->MaxHealth);
	CharacterRef->StatsComp->SetStatValue(EStats::Strength, SaveGameInstance->Strength);
	CharacterRef->StatsComp->SetStatValue(EStats::MaxStamina, SaveGameInstance->MaxStamina);
	CharacterRef->LevelComp->SetLevel(SaveGameInstance->CurrentLevel);
	CharacterRef->LevelComp->SetExperience(SaveGameInstance->CurrentXP);
	CharacterRef->LevelComp->SetPoints(SaveGameInstance->CurrentPoints);
	
	//log message
	UE_LOG(LogTemp, Warning, TEXT("Loaded %s"), *SlotName);
}


void UARPG_GameInstance::InitializeGameInstance()
{
	CharacterRef = Cast<AMainCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


bool UARPG_GameInstance::bCheckSlot(FString SlotNameToCheck)
{
	return UGameplayStatics::DoesSaveGameExist(SlotNameToCheck,0);
}
