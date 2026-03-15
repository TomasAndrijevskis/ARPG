
#include "SaveGame/ARPG_GameInstance.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_SaveGame.h"


void UARPG_GameInstance::Init()
{
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
	LoadPlayerLocation();
	LoadUsedPoints();
	SetTeleportByDoor(false);
	SavePlayerLocation();
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
	bIsFirstLoad = false;
	SavePlayerLocation();
}

void UARPG_GameInstance::SaveAllExceptPosition()
{
	SaveAttributeData();
	SaveLevelData();
	SaveAbilities();
	SaveBonfires();
	SaveDefeatedBosses();
	SaveUsedPoints();
	SaveCurrentEffect();
}


void UARPG_GameInstance::SaveBonfires()
{
	if (!SaveGameInstance) return;
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController) return;
	SaveGameInstance->UnlockedBonfires = PlayerController->GetUnlockedBonfires();
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadBonfires()
{
	if (!SaveGameInstance) return;
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerController) return;
	PlayerController->SetUnlockedBonfires(SaveGameInstance->UnlockedBonfires);
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
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
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
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
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
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
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
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerRef || !SaveGameInstance || !PlayerController) return;
	SaveGameInstance->DefeatedBosses = PlayerController->GetDefeatedBosses();
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadDefeatedBosses()
{
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	if (!PlayerRef || !SaveGameInstance || !PlayerController) return;
	PlayerController->SetDefeatedBosses(SaveGameInstance->DefeatedBosses);
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


void UARPG_GameInstance::SaveUsedPoints()
{
	if (!PlayerRef || !SaveGameInstance) return;
	SaveGameInstance->UsedAbilityPoints = PlayerRef->GetUsedAbilityPoints();
	SaveGameInstance->UsedAttributePoints = PlayerRef->GetUsedAttributePoints();
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
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
	SaveGameInstance->Effect = PlayerRef->GetCurrentEnchantmentEffect();
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
}


void UARPG_GameInstance::LoadCurrentEffect()
{
	if (!PlayerRef || !SaveGameInstance) return;
	PlayerRef->HandleEffectChange(SaveGameInstance->Effect);
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


void UARPG_GameInstance::SetSlotName(const FString& NewSlotName){SlotName = NewSlotName;HandleSaveGame();}