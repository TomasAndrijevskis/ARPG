
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/ARPG_PlayerState.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"


void UARPG_GameInstance::Init()
{
	Super::Init();
	LoadPlayerClass();
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


void UARPG_GameInstance::HandleGameLoad()
{
	LoadAttributeData();
	LoadLevelData();
	LoadAbilities();
	LoadBonfires();
	//LoadDefeatedBosses();
	LoadUsedPoints();
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
	UE_LOG(LogTemp, Warning, TEXT("SaveAll"));
	SaveAttributeData();
	SaveLevelData();
	SaveAbilities();
	SaveBonfires();
	SaveDefeatedBosses();
	SaveUsedPoints();
	SaveCurrentEffect();
	WriteSaveToDisk();
	if (bIsFirstLoad) bIsFirstLoad = false;
}


void UARPG_GameInstance::SaveBonfires()
{
	if (!SaveGameInstance) return;
	if (AARPG_PlayerState* PlayerState = PlayerRef->GetPlayerState<AARPG_PlayerState>())
	{
		SaveGameInstance->UnlockedBonfires = PlayerState->GetUnlockedBonfires();
	}
}


void UARPG_GameInstance::LoadBonfires()
{
	if (!SaveGameInstance) return;
	if (AARPG_PlayerState* PlayerState = PlayerRef->GetPlayerState<AARPG_PlayerState>())
	{
		PlayerState->SetUnlockedBonfires(SaveGameInstance->UnlockedBonfires);
		SaveGameInstance->UnlockedBonfires = PlayerState->GetUnlockedBonfires();
	}
}


void UARPG_GameInstance::LoadPlayerClass()
{
	if (!SaveGameInstance) return;
	if (SaveGameInstance->PlayerCharacter) PlayerCharacterClass = SaveGameInstance->PlayerCharacter;
}


void UARPG_GameInstance::SaveAttributeData()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->Attributes = PlayerRef->SaveAttributeData();
}


void UARPG_GameInstance::LoadAttributeData()
{
	if (!PlayerRef || !SaveGameInstance) return;
	PlayerRef->LoadAttributeData(SaveGameInstance->Attributes);
}


void UARPG_GameInstance::SaveLevelData()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->LevelData = PlayerRef->SaveLevelData();
}


void UARPG_GameInstance::LoadLevelData()
{
	if (!PlayerRef || !SaveGameInstance) return;
	PlayerRef->LoadLevelData(SaveGameInstance->LevelData);
}


void UARPG_GameInstance::SaveAbilities()
{
	if (!PlayerRef || !SaveGameInstance) return;
	for (UAbilityComponent_Player* Ability: PlayerRef->GetAbilitiesArray())
	{
		if (!IsValid(Ability)) continue;
		FAbilitySaveData Data;
		Ability->SaveAbilityProperties(Data);
		SaveGameInstance->UnlockedAbilities.Add(Ability->GetName(), Data);
	}
}


void UARPG_GameInstance::LoadAbilities()
{
	if (!PlayerRef || !SaveGameInstance) return;
	for (UAbilityComponent_Player* Ability: PlayerRef->GetAbilitiesArray())
	{
		if (!IsValid(Ability)) continue;
		const FString AbilityName = Ability->GetName();
		if (SaveGameInstance->UnlockedAbilities.Contains(AbilityName))
		{
			FAbilitySaveData SavedData = SaveGameInstance->UnlockedAbilities[AbilityName];
			Ability->LoadAbilityProperties(SavedData);
		}
	}
}


void UARPG_GameInstance::SaveDefeatedBosses()
{
	if (!PlayerRef || !SaveGameInstance) return;
	if (AARPG_PlayerState* PS = PlayerRef->GetPlayerState<AARPG_PlayerState>())
	{
		SaveGameInstance->DefeatedBosses = PS->GetDefeatedBosses();
	}
}


void UARPG_GameInstance::LoadDefeatedBosses()
{
	if (!PlayerRef || !SaveGameInstance) return;
	if (AARPG_PlayerState* PS = PlayerRef->GetPlayerState<AARPG_PlayerState>())
	{
		PS->SetDefeatedBosses(SaveGameInstance->DefeatedBosses);
	}
}


void UARPG_GameInstance::SavePlayerLocation(const FSpawnPoint& LastSpawnPoint)
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->SavedSpawnPointData = LastSpawnPoint;
	UE_LOG(LogTemp, Error, TEXT("Saved player location: %s, %s"), *LastSpawnPoint.MapName.ToString(), *LastSpawnPoint.LocationTag)
}


void UARPG_GameInstance::SaveUsedPoints()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->UsedAbilityPoints = PlayerRef->GetUsedAbilityPoints();
	SaveGameInstance->UsedAttributePoints = PlayerRef->GetUsedAttributePoints();
}


void UARPG_GameInstance::LoadUsedPoints()
{
	if (!PlayerRef || !SaveGameInstance) return;
	PlayerRef->SetUsedAttributePoints(SaveGameInstance->UsedAttributePoints);
	PlayerRef->SetUsedAbilityPoints(SaveGameInstance->UsedAbilityPoints);
}


void UARPG_GameInstance::SaveCurrentEffect()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->WeaponEnchantmentEffect = PlayerRef->GetCurrentEnchantmentEffect();
}


void UARPG_GameInstance::LoadCurrentEffect()
{
	if (!PlayerRef || !SaveGameInstance) return;
	PlayerRef->HandleEffectChange(SaveGameInstance->WeaponEnchantmentEffect);
}


FSpawnPoint UARPG_GameInstance::GetSpawnPoint() const
{
	if (!SaveGameInstance) return FSpawnPoint();
	return SaveGameInstance->SavedSpawnPointData;
}


FName UARPG_GameInstance::GetCurrentMap() const
{
	if (!SaveGameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("SaveGameInstance does not exists - default map"));
		return TEXT("Flying_Island");
	}
	if (SaveGameInstance->SavedSpawnPointData.MapName.IsNone())
	{
		UE_LOG(LogTemp, Error, TEXT("Current map is null"));
		FName Map = "Flying_Island";
		return Map;
	}
	UE_LOG(LogTemp, Error, TEXT("SaveGameInstance exists - %s"), *SaveGameInstance->SavedSpawnPointData.MapName.ToString());
	return SaveGameInstance->SavedSpawnPointData.MapName;
}


bool UARPG_GameInstance::CheckSlot(const FString& SlotNameToCheck) const
{
	return UGameplayStatics::DoesSaveGameExist(SlotNameToCheck,0);
}


void UARPG_GameInstance::WriteSaveToDisk()
{
	if (!SaveGameInstance) return;
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::SetSlotName(const FString& NewSlotName){SlotName = NewSlotName;HandleSaveGame();}