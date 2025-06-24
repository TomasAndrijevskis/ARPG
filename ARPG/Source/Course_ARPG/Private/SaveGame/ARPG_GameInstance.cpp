
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
}


FString UARPG_GameInstance::GetSlotName()
{
	return SlotName;
}


void UARPG_GameInstance::SaveGame()
{
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::CreateSaveGameObject(UARPG_SaveGame::StaticClass()));
	
	if (!PlayerRef || !SaveGameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("Game instance is null"));
		return;
	}
	
	SaveGameInstance->CurrentHealth = PlayerRef->StatsComp->GetStatValue(EStats::Health);
	SaveGameInstance->MaxHealth = PlayerRef->StatsComp->GetStatValue(EStats::MaxHealth);
	SaveGameInstance->CurrentMana = PlayerRef->StatsComp->GetStatValue(EStats::Mana);
	SaveGameInstance->MaxMana = PlayerRef->StatsComp->GetStatValue(EStats::MaxMana);
	SaveGameInstance->MaxStamina = PlayerRef->StatsComp->GetStatValue(EStats::MaxStamina);
	SaveGameInstance->Strength = PlayerRef->StatsComp->GetStatValue(EStats::Strength);
	SaveGameInstance->CurrentLevel = PlayerRef->LevelComp->GetCurrentLevel();
	SaveGameInstance->CurrentXP = PlayerRef->LevelComp->GetCurrentExperience();
	SaveGameInstance->CurrentStatPoints = PlayerRef->LevelComp->GetCurrentStatPointsAmount();
	SaveGameInstance->CurrentAbilityPoints = PlayerRef->LevelComp->GetCurrentAbilityPointsAmount();

	for (auto Ability: PlayerRef->Abilities)
	{
		FAbilityData Data;
		Data.bIsUnlocked = Ability->GetAbilityAvailability();
		Data.CurrentLevel = Ability->GetCurrentAbilityLevel();
		SaveGameInstance->UnlockedAbilities.Add(Ability->GetName(), Data);
		UE_LOG(LogTemp, Error, TEXT("Added: %s, %i, %s"),*Ability->GetName(), Data.CurrentLevel, Data.bIsUnlocked ? TEXT("true") : TEXT("false"));
	}
	
	UGameplayStatics::SaveGameToSlot(SaveGameInstance, SlotName, 0);
	
}


void UARPG_GameInstance::LoadGame()
{
	if (!PlayerRef)
	{
		UE_LOG(LogTemp, Error, TEXT("player is null"));
		return;
	}
	
	UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	
	if (!SaveGameInstance)
	{
		UE_LOG(LogTemp, Error, TEXT("cant load"));
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

	UE_LOG(LogTemp, Warning, TEXT("Loaded abilities count: %d"), SaveGameInstance->UnlockedAbilities.Num());
	for (auto Ability: PlayerRef->Abilities)
	{
		FString AbilityName = Ability->GetName();
		if (SaveGameInstance->UnlockedAbilities.Contains(AbilityName))
		{
			FAbilityData SavedData = SaveGameInstance->UnlockedAbilities[AbilityName];
			Ability->SetCurrentAbilityLevel(SavedData.CurrentLevel);
			Ability->SetAbilityAvailability(SavedData.bIsUnlocked);
			UE_LOG(LogTemp, Error, TEXT("Loaded: %s, %i, %s"), *AbilityName, SavedData.CurrentLevel, SavedData.bIsUnlocked ? TEXT("true") : TEXT("false"));
		}
	}
}


void UARPG_GameInstance::InitializeGameInstance()
{
	PlayerRef = Cast<AMainCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


bool UARPG_GameInstance::bCheckSlot(FString SlotNameToCheck)
{
	return UGameplayStatics::DoesSaveGameExist(SlotNameToCheck,0);
}
