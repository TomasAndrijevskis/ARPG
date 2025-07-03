
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"


void UARPG_GameInstance::Init()
{
	LoadPlayerClass();
}


void UARPG_GameInstance::InitializeGameInstance()
{
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	if (!PlayerRef)
	{
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("GameInstance|Init|PlayerClass: %s"), *PlayerRef->GetName());
}


void UARPG_GameInstance::SetPlayerClass(TSubclassOf<AMainCharacter_Base> PlayerClass, bool bFirstLoad)
{
	bIsFirstLoad = bFirstLoad;
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	}
	
	SaveGameInstance->PlayerCharacter = PlayerClass;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::SaveAll()
{
	SaveStats();
	SaveAbilities();
	bIsFirstLoad = false;
}


/*void UARPG_GameInstance::SavePlayerClass()
{
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	}

	SaveGameInstance->PlayerCharacter = PlayerCharacterClass;
	PlayerCharacterClass = nullptr;
	UE_LOG(LogTemp,Error, TEXT("GameInstance|Saved Player Class: %s"), *PlayerCharacterClass->GetName());
}*/


void UARPG_GameInstance::LoadPlayerClass()
{
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	}

	if (SaveGameInstance->PlayerCharacter)
	{
		PlayerCharacterClass = SaveGameInstance->PlayerCharacter;
		UE_LOG(LogTemp,Error, TEXT("GameInstance|Loaded Player Class: %s"), *PlayerCharacterClass->GetName());
	}
}


void UARPG_GameInstance::SaveStats()
{
	if (!PlayerRef)
	{
		return;
	}
	
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	}
	
	SaveGameInstance->CurrentHealth = PlayerRef->StatsComp->GetStatValue(EStats::Health);
	SaveGameInstance->MaxHealth = PlayerRef->StatsComp->GetStatValue(EStats::MaxHealth);
	SaveGameInstance->CurrentMana = PlayerRef->StatsComp->GetStatValue(EStats::Mana);
	SaveGameInstance->MaxMana = PlayerRef->StatsComp->GetStatValue(EStats::MaxMana);
	SaveGameInstance->MaxStamina = PlayerRef->StatsComp->GetStatValue(EStats::MaxStamina);
	SaveGameInstance->Strength = PlayerRef->StatsComp->GetStatValue(EStats::Strength);
	SaveGameInstance->CurrentLevel = PlayerRef->LevelComp->GetCurrentLevel();
	SaveGameInstance->CurrentXP = PlayerRef->LevelComp->GetCurrentXP();
	SaveGameInstance->CurrentStatPoints = PlayerRef->LevelComp->GetCurrentStatPointsAmount();
	SaveGameInstance->CurrentAbilityPoints = PlayerRef->LevelComp->GetCurrentAbilityPointsAmount();

	UE_LOG(LogTemp,Error, TEXT("GameInstance|Stats Saved"));
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadStats()
{
	if (!PlayerRef)
	{
		return;
	}
	
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	
	if (!SaveGameInstance)
	{
		UE_LOG(LogTemp,Error, TEXT("GameInstance|Cant Load Stats"));
		return;
	}
	
	PlayerRef->StatsComp->SetStatValue(EStats::Health, SaveGameInstance->CurrentHealth);
	PlayerRef->StatsComp->SetStatValue(EStats::MaxHealth, SaveGameInstance->MaxHealth);
	PlayerRef->StatsComp->SetStatValue(EStats::Mana, SaveGameInstance->CurrentMana);
	PlayerRef->StatsComp->SetStatValue(EStats::MaxMana, SaveGameInstance->MaxMana);
	PlayerRef->StatsComp->SetStatValue(EStats::Strength, SaveGameInstance->Strength);
	PlayerRef->StatsComp->SetStatValue(EStats::MaxStamina, SaveGameInstance->MaxStamina);
	PlayerRef->LevelComp->SetLevel(SaveGameInstance->CurrentLevel);
	PlayerRef->LevelComp->SetExperience(SaveGameInstance->CurrentXP);
	PlayerRef->LevelComp->SetStatPoints(SaveGameInstance->CurrentStatPoints);
	PlayerRef->LevelComp->SetAbilityPoints(SaveGameInstance->CurrentAbilityPoints);
}


void UARPG_GameInstance::SaveAbilities()
{
	if (!PlayerRef)
	{
		return;
	}
	
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	}
	
	for (UAbilityComponent_Base* Ability: PlayerRef->GetAbilitiesArray())
	{
		if (!IsValid(Ability))
		{
			continue;
		}
		FAbilityData Data;
		Ability->SaveCustomProperties(Data);
		SaveGameInstance->UnlockedAbilities.Add(Ability->GetName(), Data);
		
		UE_LOG(LogTemp, Error, TEXT("GameInstance|Ability Added: %s, %i, %s"),*Ability->GetName(), Data.CurrentLevel, Data.bIsUnlocked ? TEXT("true") : TEXT("false"));
	}
	
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadAbilities()
{
	if (!PlayerRef)
	{
		return;
	}
	
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	
	if (!SaveGameInstance)
	{
		UE_LOG(LogTemp,Error, TEXT("GameInstance|Cant Load ArrAbilities"));
		return;
	}

	UE_LOG(LogTemp, Warning, TEXT("GameInstance|Loaded abilities count: %d"), SaveGameInstance->UnlockedAbilities.Num());
	
	
	for (UAbilityComponent_Base* Ability: PlayerRef->GetAbilitiesArray())
	{
		if (!IsValid(Ability))
		{
			continue;
		}
		FString AbilityName = Ability->GetName();
		if (SaveGameInstance->UnlockedAbilities.Contains(AbilityName))
		{
			FAbilityData SavedData = SaveGameInstance->UnlockedAbilities[AbilityName];
			
			Ability->LoadCustomProperties(SavedData);
			UE_LOG(LogTemp, Error, TEXT("GameInstance|Ability Loaded: %s, %i, %s"), *AbilityName, SavedData.CurrentLevel, SavedData.bIsUnlocked ? TEXT("true") : TEXT("false"));
		}
	}
}


bool UARPG_GameInstance::bCheckSlot(FString SlotNameToCheck)
{
	return UGameplayStatics::DoesSaveGameExist(SlotNameToCheck,0);
}


void UARPG_GameInstance::SetSlotName(FString NewSlotName)
{
	SlotName = NewSlotName;
}


FString UARPG_GameInstance::GetSlotName()
{
	return SlotName;
}