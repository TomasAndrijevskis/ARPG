
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
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
	//UE_LOG(LogTemp, Error, TEXT("SaveGame: SlotName: %s"), *SlotName);
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	
	if (!CharacterRef || !SaveGameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("Game instance is null"));
		return;
	}
	
	SaveGameInstance->CurrentHealth = CharacterRef->StatsComp->GetStatValue(EStats::Health);
	SaveGameInstance->MaxHealth = CharacterRef->StatsComp->GetStatValue(EStats::MaxHealth);
	SaveGameInstance->CurrentMana = CharacterRef->StatsComp->GetStatValue(EStats::Mana);
	SaveGameInstance->MaxMana = CharacterRef->StatsComp->GetStatValue(EStats::MaxMana);
	SaveGameInstance->MaxStamina = CharacterRef->StatsComp->GetStatValue(EStats::MaxStamina);
	SaveGameInstance->Strength = CharacterRef->StatsComp->GetStatValue(EStats::Strength);
	SaveGameInstance->CurrentLevel = CharacterRef->LevelComp->GetCurrentLevel();
	SaveGameInstance->CurrentXP = CharacterRef->LevelComp->GetCurrentExperience();
	SaveGameInstance->CurrentPoints = CharacterRef->LevelComp->GetCurrentPointsAmount();
	
	for (auto Ability: CharacterRef->Abilities)
	{
		SaveGameInstance->UnlockedAbilities.Add(Ability->GetAbilityAvailability());
		UE_LOG(LogTemp, Error, TEXT("Added %s, %s"), *Ability->GetName(), Ability->GetAbilityAvailability() ? TEXT("true") : TEXT("false"));
	}
	
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
	
	//UE_LOG(LogTemp, Warning, TEXT("Saved: %s"), *SlotName);
}


void UARPG_GameInstance::LoadGame()
{
	//UE_LOG(LogTemp, Error, TEXT("SaveGame: SlotName: %s"), *SlotName);
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	
	if (!CharacterRef || !SaveGameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("Game instance is null"));
		return;
	}
	
	SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	
	CharacterRef->StatsComp->SetStatValue(EStats::Health, SaveGameInstance->CurrentHealth);
	CharacterRef->StatsComp->SetStatValue(EStats::MaxHealth, SaveGameInstance->MaxHealth);
	CharacterRef->StatsComp->SetStatValue(EStats::Mana, SaveGameInstance->CurrentMana);
	CharacterRef->StatsComp->SetStatValue(EStats::MaxMana, SaveGameInstance->MaxMana);
	CharacterRef->StatsComp->SetStatValue(EStats::Strength, SaveGameInstance->Strength);
	CharacterRef->StatsComp->SetStatValue(EStats::MaxStamina, SaveGameInstance->MaxStamina);
	CharacterRef->LevelComp->SetLevel(SaveGameInstance->CurrentLevel);
	CharacterRef->LevelComp->SetExperience(SaveGameInstance->CurrentXP);
	CharacterRef->LevelComp->SetPoints(SaveGameInstance->CurrentPoints);
	

	for (int32 i = 0; i < SaveGameInstance->UnlockedAbilities.Num(); i++)
	{
		//UE_LOG(LogTemp, Error, TEXT("Is available: %s"), SaveGameInstance->UnlockedAbilities[i] ? TEXT("true") : TEXT("false"));
		CharacterRef->Abilities[i]->SetAbilityAvailability(SaveGameInstance->UnlockedAbilities[i]);
	}
	
	//UE_LOG(LogTemp, Warning, TEXT("Loaded %s"), *SlotName);
}


void UARPG_GameInstance::InitializeGameInstance()
{
	CharacterRef = Cast<AMainCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


bool UARPG_GameInstance::bCheckSlot(FString SlotNameToCheck)
{
	return UGameplayStatics::DoesSaveGameExist(SlotNameToCheck,0);
}
