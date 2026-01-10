
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/Data/EStats.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/LevelingComponent.h"
#include "Components/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"


void UARPG_GameInstance::Init()
{
	LoadPlayerClass();
	HandleSaveGame();
}


void UARPG_GameInstance::HandleSaveGame()
{
	SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGameInstance) SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
}


void UARPG_GameInstance::InitializeGameInstance()
{
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	UE_LOG(LogTemp, Error, TEXT("GameInstance|Init|PlayerClass: %s"), *PlayerRef->GetName());
}


void UARPG_GameInstance::SetPlayerClass(const TSubclassOf<AMainCharacter_Base>& PlayerClass, const bool bFirstLoad)
{
	bIsFirstLoad = bFirstLoad;
	if (!SaveGameInstance) return;
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
	SaveUsedStatPoints();
	bIsFirstLoad = false;
}


void UARPG_GameInstance::SaveAllExceptPosition()
{
	SaveStats();
	SaveAbilities();
	SaveBonfires();
	SaveDefeatedBosses();
}


void UARPG_GameInstance::SaveBonfires()
{
	if (!SaveGameInstance) return;
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController) return;
	for (const auto& Bonfire: PlayerController->GetUnlockedBonfires())
	{
		SaveGameInstance->UnlockedBonfires.Add(Bonfire.Key, Bonfire.Value);
	}
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadBonfires()
{
	if (!SaveGameInstance) return;
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController) return;
	for (const auto& Bonfire: SaveGameInstance->UnlockedBonfires)
	{
		PlayerController->GetUnlockedBonfires().Add(Bonfire.Key, Bonfire.Value);
	}
}


void UARPG_GameInstance::LoadPlayerClass()
{
	if (!SaveGameInstance) return;
	if (SaveGameInstance->PlayerCharacter) PlayerCharacterClass = SaveGameInstance->PlayerCharacter;
}


void UARPG_GameInstance::SaveStats()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->MaxHealth = PlayerRef->StatsComp->GetStatValue(MaxHealth);
	SaveGameInstance->MaxMana = PlayerRef->StatsComp->GetStatValue(MaxMana);
	SaveGameInstance->MaxStamina = PlayerRef->StatsComp->GetStatValue(MaxStamina);
	SaveGameInstance->Strength = PlayerRef->StatsComp->GetStatValue(Strength);
	SaveGameInstance->CurrentLevel = PlayerRef->LevelComp->GetCurrentLevel();
	SaveGameInstance->CurrentXP = PlayerRef->LevelComp->GetCurrentXP();
	SaveGameInstance->CurrentStatPoints = PlayerRef->LevelComp->GetCurrentStatPointsAmount();
	SaveGameInstance->CurrentAbilityPoints = PlayerRef->LevelComp->GetCurrentAbilityPointsAmount();
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadStats()
{
	if (!PlayerRef || !SaveGameInstance) return;
	PlayerRef->StatsComp->SetStatValue(Health, SaveGameInstance->MaxHealth);
	PlayerRef->StatsComp->SetStatValue(MaxHealth, SaveGameInstance->MaxHealth);
	PlayerRef->StatsComp->SetStatValue(Mana, SaveGameInstance->MaxMana);
	PlayerRef->StatsComp->SetStatValue(MaxMana, SaveGameInstance->MaxMana);
	PlayerRef->StatsComp->SetStatValue(Strength, SaveGameInstance->Strength);
	PlayerRef->StatsComp->SetStatValue(MaxStamina, SaveGameInstance->MaxStamina);
	PlayerRef->LevelComp->SetLevel(SaveGameInstance->CurrentLevel);
	PlayerRef->LevelComp->SetXP(SaveGameInstance->CurrentXP);
	PlayerRef->LevelComp->SetStatPoints(SaveGameInstance->CurrentStatPoints);
	PlayerRef->LevelComp->SetAbilityPoints(SaveGameInstance->CurrentAbilityPoints);
}


void UARPG_GameInstance::SaveAbilities()
{
	if (!PlayerRef || !SaveGameInstance) return;
	for (UAbilityComponent_Player* Ability: PlayerRef->GetAbilitiesArray())
	{
		if (!IsValid(Ability)) continue;
		FAbilityData Data;
		Ability->SaveCustomProperties(Data);
		SaveGameInstance->UnlockedAbilities.Add(Ability->GetName(), Data);
	}
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadAbilities()
{
	if (!PlayerRef || !SaveGameInstance) return;
	for (UAbilityComponent_Player* Ability: PlayerRef->GetAbilitiesArray())
	{
		if (!IsValid(Ability)) continue;
		FString AbilityName = Ability->GetName();
		if (SaveGameInstance->UnlockedAbilities.Contains(AbilityName))
		{
			FAbilityData SavedData = SaveGameInstance->UnlockedAbilities[AbilityName];
			Ability->LoadCustomProperties(SavedData);
		}
	}
}


void UARPG_GameInstance::SaveDefeatedBosses()
{
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerRef || !SaveGameInstance || !PlayerController) return;
	for (auto Boss : PlayerController->GetDefeatedBosses())
	{
		SaveGameInstance->DefeatedBosses.AddUnique(Boss);
	}
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadDefeatedBosses()
{
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerRef || !SaveGameInstance || !PlayerController) return;
	for (auto Boss : SaveGameInstance->DefeatedBosses)
	{
		PlayerController->AddDefeatedBoss(Boss);
	}
}


void UARPG_GameInstance::SavePlayerLocation()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->PlayerLocation = PlayerRef->GetActorLocation();
	SaveGameInstance->CurrentMap = UGameplayStatics::GetCurrentLevelName(this);
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


//To save future location on map where player will be teleported
void UARPG_GameInstance::SavePlayerLocation(const FVector& NewLocation)
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->PlayerLocation = NewLocation;
	SaveGameInstance->CurrentMap = UGameplayStatics::GetCurrentLevelName(this);
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadPlayerLocation()
{
	if (!PlayerRef || bTeleportByDoor || !SaveGameInstance) return;
	PlayerRef->SetActorLocation(SaveGameInstance->PlayerLocation);
}


void UARPG_GameInstance::SaveUsedStatPoints()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->UsedStatPoints = PlayerRef->LevelComp->GetUsedStatPoints();
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadUsedStatPoints()
{
	if (!PlayerRef || !SaveGameInstance) return;
	PlayerRef->LevelComp->SetUsedStatPoints(SaveGameInstance->UsedStatPoints);
}


FString UARPG_GameInstance::GetCurrentMap() const
{
	if (!SaveGameInstance) return TEXT("Flying_Island");
	if (SaveGameInstance->CurrentMap == "")
	{
		FString Map = "Flying_Island";
		return Map;
	}
	return SaveGameInstance->CurrentMap;
}


bool UARPG_GameInstance::CheckSlot(const FString& SlotNameToCheck) const
{
	return UGameplayStatics::DoesSaveGameExist(SlotNameToCheck,0);
}


void UARPG_GameInstance::SetSlotName(const FString& NewSlotName)
{
	SlotName = NewSlotName;
}


FString UARPG_GameInstance::GetSlotName() const
{
	return SlotName;
}


void UARPG_GameInstance::SetTeleportByDoor(const bool bNewTeleportByDoor)
{
	bTeleportByDoor = bNewTeleportByDoor;
}


bool UARPG_GameInstance::GetTeleportByDoor() const
{
	return bTeleportByDoor;
}