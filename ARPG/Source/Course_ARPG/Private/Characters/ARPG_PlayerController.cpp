
#include "Characters/ARPG_PlayerController.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Gamemode/ARPG_GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Objects/Bonfire.h"
#include "Objects/BonfireData.h"
#include "UI/EScreens.h"
#include "UI/PlayerWidget.h"


void AARPG_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetPlayerControllerSettings();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	GameInstanceRef = Cast<UARPG_GameInstance>(GetWorld()->GetGameInstance());
	HandleGameLoad();
}


void AARPG_PlayerController::CreateBonfireMenuWidget()
{
	if (bIsInBonfireRange)
	{
		PlayerRef->GetPlayerWidget()->CreateBonfireMenuWidget();
		HandleGamePause(true);

		if (!UnlockedBonfires.Contains(BonfireRef->GetBonfireName()))
		{
			FBonfireData Data;
			Data.Location = BonfireRef->GetActorLocation();
			Data.MapName = BonfireRef->GetMapName();
			UnlockedBonfires.Add(BonfireRef->GetBonfireName(), Data);
			GameInstanceRef->SaveBonfires();
		}
	}
}


void AARPG_PlayerController::TeleportToMap()
{
	GameInstanceRef->bTeleportByDoor = true;
	UGameplayStatics::OpenLevel(this, FName(MapName));
}


void AARPG_PlayerController::LoadToMainMenu()
{
	SaveAll();
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("MenuMap"));
}


void AARPG_PlayerController::RemoveBonfireMenuWidget()
{
	PlayerRef->GetPlayerWidget()->RemoveBonfireMenuWidget();
	PlayerRef->FOnBonfireInteractionDelegate.Broadcast();
	HandleGamePause(false);
	AARPG_GameMode* GameMode = Cast<AARPG_GameMode>(GetWorld()->GetAuthGameMode());
	if (GameMode)
	{
		GameMode->SpawnEnemies();
	}
}


void AARPG_PlayerController::CreateQuickTravelMenu()
{
	RemoveBonfireMenuWidget();
	HandleGamePause(true);
	PlayerRef->GetPlayerWidget()->CreateQuickTravelMenuWidget(UnlockedBonfires, BonfireRef->GetBonfireName());
}


void AARPG_PlayerController::RemoveQuickTravelMenu()
{
	PlayerRef->GetPlayerWidget()->RemoveQuickTravelMenuWidget();
	HandleGamePause(false);
}


void AARPG_PlayerController::CreateStatsScreen()
{
	RemoveBonfireMenuWidget();
	HandleGamePause(true);
	PlayerRef->GetPlayerWidget()->CreateUpgradeInfoHeader(PlayerRef->LevelComp->GetCurrentStatPointsAmount());
	for (auto Stat : PlayerRef->ArrStats)
	{
		PlayerRef->GetPlayerWidget()->CreateStatsScreen(Stat);
	}
	PlayerRef->GetPlayerWidget()->CreateUpgradeInfoFooter(EScreens::StatsScreen);
}


void AARPG_PlayerController::CreateAbilityUpgradeScreen()
{
	RemoveBonfireMenuWidget();
	HandleGamePause(true);
	PlayerRef->GetPlayerWidget()->CreateUpgradeInfoHeader(PlayerRef->LevelComp->GetCurrentAbilityPointsAmount());
	for (auto Ability : PlayerRef->GetAbilitiesArray())
	{
		UE_LOG(LogTemp, Error, TEXT("PC|Ability: %s"), *Ability->GetName());
		PlayerRef->GetPlayerWidget()->CreateAbilityUpgradeScreen(Ability);
	}
	PlayerRef->GetPlayerWidget()->CreateUpgradeInfoFooter(EScreens::AbilitiesScreen);
}


void AARPG_PlayerController::SetPlayerControllerSettings()
{
	this->SetShowMouseCursor(false);
	FInputModeGameOnly InputMode;
	this->SetInputMode(InputMode);
}


void AARPG_PlayerController::HandleGamePause(bool bIsGamePaused)
{
	SetShowMouseCursor(bIsGamePaused);
	bEnableClickEvents = bIsGamePaused;
	bEnableMouseOverEvents = bIsGamePaused;
	UGameplayStatics::SetGamePaused(GetWorld(), bIsGamePaused);

	if (bIsGamePaused)
	{
		SetInputMode(FInputModeGameAndUI());
	}
	else
	{
		SetInputMode(FInputModeGameOnly());
	}
}


void AARPG_PlayerController::HandleGameLoad()
{
	if (!GameInstanceRef)
	{
		return;
	}
	GameInstanceRef->InitializeGameInstance();
	FString SlotName = GameInstanceRef->GetSlotName();
	
	if (GameInstanceRef->bCheckSlot(SlotName) && !GameInstanceRef->bIsFirstLoad)
	{
		GameInstanceRef->LoadStats();
		GameInstanceRef->LoadAbilities();
		GameInstanceRef->LoadBonfires();
		GameInstanceRef->LoadDefeatedBosses();
		GameInstanceRef->LoadPlayerLocation();
		GameInstanceRef->bTeleportByDoor = false;
		GameInstanceRef->SavePlayerLocation();
	}
	else
	{
		GameInstanceRef->SaveAll();
	}
}



void AARPG_PlayerController::SaveAll()
{
	GameInstanceRef->SaveAll();
}


void AARPG_PlayerController::SetIsInBonfireRange(bool bNewIsInBonfireRange, ABonfire* BonfireInRange)
{
	bIsInBonfireRange = bNewIsInBonfireRange;
	BonfireRef = BonfireInRange;
}


void AARPG_PlayerController::SetIsInDoorRange(bool bNewIsInDoorRange)
{
	bIsInDoorRange = bNewIsInDoorRange;
}


void AARPG_PlayerController::SetMapName(FString NewMapName)
{
	MapName = NewMapName;
}


TArray<FName> AARPG_PlayerController::GetDefeatedBosses()
{
	return DefeatedBosses;
}


void AARPG_PlayerController::AddDefeatedBoss(FName Boss)
{
	DefeatedBosses.AddUnique(Boss);
}


