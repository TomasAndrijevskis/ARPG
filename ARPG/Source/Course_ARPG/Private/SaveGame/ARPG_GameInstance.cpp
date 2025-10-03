
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/ARPG_PlayerController.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
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
	SaveBonfires();
	SaveDefeatedBosses();
	SavePlayerLocation();
	bIsFirstLoad = false;
}


void UARPG_GameInstance::SaveAllExceptPosition()
{
	SaveStats();
	SaveAbilities();
	SaveBonfires();
	SaveDefeatedBosses();
	//SavePlayerLocation();
}


void UARPG_GameInstance::SaveBonfires()
{
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	}
	
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController)
	{
		return;
	}
	
	for (auto Bonfire: PlayerController->UnlockedBonfires)
	{
		SaveGameInstance->UnlockedBonfires.Add(Bonfire.Key, Bonfire.Value);
		//UE_LOG(LogTemp, Error, TEXT("GI|Save|Bonfire name: %s"), *Bonfire.Key);
		//UE_LOG(LogTemp, Error, TEXT("GI|Save|Bonfire location:  %s"), *Bonfire.Value.ToString());
	}
	UE_LOG(LogTemp, Error, TEXT("GI|Bonfires saved"));
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadBonfires()
{
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	
	if (!SaveGameInstance)
	{
		UE_LOG(LogTemp,Error, TEXT("GameInstance|Cant Load Bonfires"));
		return;
	}

	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController)
	{
		return;
	}
	
	for (auto Bonfire: SaveGameInstance->UnlockedBonfires)
	{
		PlayerController->UnlockedBonfires.Add(Bonfire.Key, Bonfire.Value);
	}
	//UE_LOG(LogTemp, Error, TEXT("GI|Load|Bonfires Loaded"));
}


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
		//UE_LOG(LogTemp,Error, TEXT("GameInstance|Loaded Player Class: %s"), *PlayerCharacterClass->GetName());
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
	//SaveGameInstance->CurrentHealth = PlayerRef->StatsComp->GetStatValue(EStats::Health);
	SaveGameInstance->MaxHealth = PlayerRef->StatsComp->GetStatValue(EStats::MaxHealth);
	//SaveGameInstance->CurrentMana = PlayerRef->StatsComp->GetStatValue(EStats::Mana);
	SaveGameInstance->MaxMana = PlayerRef->StatsComp->GetStatValue(EStats::MaxMana);
	SaveGameInstance->MaxStamina = PlayerRef->StatsComp->GetStatValue(EStats::MaxStamina);
	SaveGameInstance->Strength = PlayerRef->StatsComp->GetStatValue(EStats::Strength);
	SaveGameInstance->CurrentLevel = PlayerRef->LevelComp->GetCurrentLevel();
	SaveGameInstance->CurrentXP = PlayerRef->LevelComp->GetCurrentXP();
	SaveGameInstance->CurrentStatPoints = PlayerRef->LevelComp->GetCurrentStatPointsAmount();
	SaveGameInstance->CurrentAbilityPoints = PlayerRef->LevelComp->GetCurrentAbilityPointsAmount();
	//UE_LOG(LogTemp,Error, TEXT("GameInstance|Stats Saved"));
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
	PlayerRef->StatsComp->SetStatValue(EStats::Health, SaveGameInstance->MaxHealth);
	PlayerRef->StatsComp->SetStatValue(EStats::MaxHealth, SaveGameInstance->MaxHealth);
	PlayerRef->StatsComp->SetStatValue(EStats::Mana, SaveGameInstance->MaxMana);
	PlayerRef->StatsComp->SetStatValue(EStats::MaxMana, SaveGameInstance->MaxMana);
	PlayerRef->StatsComp->SetStatValue(EStats::Strength, SaveGameInstance->Strength);
	PlayerRef->StatsComp->SetStatValue(EStats::MaxStamina, SaveGameInstance->MaxStamina);
	PlayerRef->LevelComp->SetLevel(SaveGameInstance->CurrentLevel);
	PlayerRef->LevelComp->SetXP(SaveGameInstance->CurrentXP);
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
	for (UAbilityComponent_Player* Ability: PlayerRef->GetAbilitiesArray())
	{
		if (!IsValid(Ability))
		{
			continue;
		}
		FAbilityData Data;
		Ability->SaveCustomProperties(Data);
		SaveGameInstance->UnlockedAbilities.Add(Ability->GetName(), Data);
		//UE_LOG(LogTemp, Error, TEXT("GameInstance|Ability Added: %s, %i, %s"),*Ability->GetName(), Data.CurrentLevel, Data.bIsUnlocked ? TEXT("true") : TEXT("false"));
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
	//UE_LOG(LogTemp, Warning, TEXT("GameInstance|Loaded abilities count: %d"), SaveGameInstance->UnlockedAbilities.Num());
	for (UAbilityComponent_Player* Ability: PlayerRef->GetAbilitiesArray())
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
			//UE_LOG(LogTemp, Error, TEXT("GameInstance|Ability Loaded: %s, %i, %s"), *AbilityName, SavedData.CurrentLevel, SavedData.bIsUnlocked ? TEXT("true") : TEXT("false"));
		}
	}
}


void UARPG_GameInstance::SaveDefeatedBosses()
{
	if (!PlayerRef)
	{
		return;
	}
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController)
	{
		return;
	}
	
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	}
	for (auto Boss : PlayerController->GetDefeatedBosses())
	{
		SaveGameInstance->DefeatedBosses.AddUnique(Boss);
	}
	for (auto Boss : SaveGameInstance->DefeatedBosses)
	{
		UE_LOG(LogTemp, Warning, TEXT("Saved Defeated boss: %s"), *Boss.ToString());
	}
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadDefeatedBosses()
{
	if (!PlayerRef)
	{
		return;
	}
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController)
	{
		return;
	}
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		UE_LOG(LogTemp,Error, TEXT("GameInstance|Cant Load DefeatedBosses"));
		return;
	}
	for (auto Boss : SaveGameInstance->DefeatedBosses)
	{
		PlayerController->AddDefeatedBoss(Boss);
	}
}


void UARPG_GameInstance::SavePlayerLocation()
{
	if (!PlayerRef)
	{
		return;
	}
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		return;
	}
	SaveGameInstance->PlayerLocation = PlayerRef->GetActorLocation();
	SaveGameInstance->CurrentMap = UGameplayStatics::GetCurrentLevelName(this);
	UE_LOG(LogTemp, Error, TEXT("Saved Map: %s"), *SaveGameInstance->CurrentMap);
	UE_LOG(LogTemp, Error, TEXT("Saved Location: %s"), *SaveGameInstance->PlayerLocation.ToString());
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


//To save future location on map where player will be teleported
void UARPG_GameInstance::SavePlayerLocation(FVector NewLocation)
{
	if (!PlayerRef)
	{
		return;
	}
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		return;
	}
	SaveGameInstance->PlayerLocation = NewLocation;
	SaveGameInstance->CurrentMap = UGameplayStatics::GetCurrentLevelName(this);
	UE_LOG(LogTemp, Error, TEXT("Saved Map: %s"), *SaveGameInstance->CurrentMap);
	UE_LOG(LogTemp, Error, TEXT("Saved Location: %s"), *SaveGameInstance->PlayerLocation.ToString());
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadPlayerLocation()
{
	if (!PlayerRef || bTeleportByDoor)
	{
		return;
	}
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance)
	{
		return;
	}
	UE_LOG(LogTemp, Error, TEXT("Loaded Map: %s"), *SaveGameInstance->CurrentMap);
	UE_LOG(LogTemp, Error, TEXT("Loaded Location: %s"), *SaveGameInstance->PlayerLocation.ToString());
	PlayerRef->SetActorLocation(SaveGameInstance->PlayerLocation);
}



FString UARPG_GameInstance::GetCurrentMap()
{
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (SaveGameInstance)
	{
		if (SaveGameInstance->CurrentMap == "")
		{
			//UE_LOG(LogTemp,Error, TEXT("GameInstance|Cant GetCurrentMap"));
			FString Map = "Flying_Island";
			return Map;
		}
		//UE_LOG(LogTemp,Error, TEXT("GameInstance|Can GetCurrentMap"));
		return SaveGameInstance->CurrentMap;
	}
	return TEXT("Flying_Island");
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


void UARPG_GameInstance::SetTeleportByDoor(bool bNewTeleportByDoor)
{
	bTeleportByDoor = bNewTeleportByDoor;
}


bool UARPG_GameInstance::GetTeleportByDoor()
{
	return bTeleportByDoor;
}