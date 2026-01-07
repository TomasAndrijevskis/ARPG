
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/LockonComponent.h"
#include "Gamemode/ARPG_GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Objects/Bonfire.h"
#include "Objects/BonfireData.h"
#include "UI/PlayerWidget.h"


void AARPG_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetPlayerControllerSettings();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (!PlayerRef) return;
	GameInstanceRef = Cast<UARPG_GameInstance>(GetWorld()->GetGameInstance());
	if (!GameInstanceRef) return;
	HandleGameLoad();
	OnGamePauseStateChangeRequestDelegate.AddUObject(this, &AARPG_PlayerController::HandleGamePause);
	OnPlayerInputEnabledChangedDelegate.AddUObject(this, &AARPG_PlayerController::SetPlayerInputEnabled);
	OnTeleportPlayerRequestDelegate.AddUObject(this, &AARPG_PlayerController::TeleportPlayer);
}


void AARPG_PlayerController::HandleBonfireInteraction()
{
	if (bIsInBonfireRange)
	{
		PlayerRef->GetPlayerWidget()->CreateBonfireMenuWidget();
		HandleGamePause(true);
		if (!UnlockedBonfires.Contains(BonfireRef->GetBonfireName()))
		{
			FBonfireData Data;
			FVector Location = BonfireRef->GetActorLocation() + BonfireRef->GetActorForwardVector() * 200;
			Data.Location = Location;
			Data.MapName = BonfireRef->GetMapName();
			UnlockedBonfires.Add(BonfireRef->GetBonfireName(), Data);
			GameInstanceRef->SaveBonfires();
		}
	}
}


void AARPG_PlayerController::HandleBonfireMenuQuit()
{
	PlayerRef->FOnBonfireInteractionFinishedDelegate.Broadcast();
	HandleGamePause(false);
	GameInstanceRef->SaveAll();
	AARPG_GameMode* GameMode = Cast<AARPG_GameMode>(GetWorld()->GetAuthGameMode());
	if (!GameMode) return;
	GameMode->SpawnEnemies();
	if (PlayerRef->LockonComp->IsLocked()) PlayerRef->LockonComp->EndLockon();
}


void AARPG_PlayerController::TeleportToMap()
{
	GameInstanceRef->SetTeleportByDoor(true);
	UGameplayStatics::OpenLevel(this, FName(MapName));
}


void AARPG_PlayerController::TeleportPlayer(const FVector& Location)
{
	PlayerRef->TeleportTo(Location, PlayerRef->GetActorRotation());
}


void AARPG_PlayerController::LoadToMainMenu()
{
	GameInstanceRef->SaveAllExceptPosition();
	UGameplayStatics::OpenLevel(GetWorld(), TEXT("MainMenu"));
}


void AARPG_PlayerController::SetPlayerControllerSettings()
{
	this->SetShowMouseCursor(false);
	FInputModeGameOnly InputMode;
	this->SetInputMode(InputMode);
}


void AARPG_PlayerController::HandleGamePause(const bool bIsGamePaused)
{
	SetShowMouseCursor(bIsGamePaused);
	bEnableClickEvents = bIsGamePaused;
	bEnableMouseOverEvents = bIsGamePaused;
	UGameplayStatics::SetGamePaused(GetWorld(), bIsGamePaused);
	bIsGamePaused ? SetInputMode(FInputModeGameAndUI()) : SetInputMode(FInputModeGameOnly());
}


void AARPG_PlayerController::HandleGameLoad() const
{
	if (!GameInstanceRef) return;
	GameInstanceRef->InitializeGameInstance();
	FString SlotName = GameInstanceRef->GetSlotName();
	
	if (GameInstanceRef->CheckSlot(SlotName) && !GameInstanceRef->bIsFirstLoad)
	{
		GameInstanceRef->LoadStats();
		GameInstanceRef->LoadAbilities();
		GameInstanceRef->LoadBonfires();
		GameInstanceRef->LoadDefeatedBosses();
		GameInstanceRef->LoadPlayerLocation();
		GameInstanceRef->SetTeleportByDoor(false);
		GameInstanceRef->SavePlayerLocation();
	}
	else GameInstanceRef->SaveAll();
}


void AARPG_PlayerController::SetPlayerInputEnabled(const bool IsEnabled)
{
	IsEnabled ? PlayerRef->EnableInput(this) : PlayerRef->DisableInput(this);
}


void AARPG_PlayerController::SaveAll() const
{
	GameInstanceRef->SaveAll();
}


void AARPG_PlayerController::CreatePauseMenu()
{
	HandleGamePause(true);
	PlayerRef->GetPlayerWidget()->CreatePauseMenu();
}


void AARPG_PlayerController::RemovePauseMenu()
{
	HandleGamePause(false);
	PlayerRef->GetPlayerWidget()->RemovePauseMenu();
}


void AARPG_PlayerController::SaveBeforeQuit()
{
	GameInstanceRef->SaveAllExceptPosition();
	QuitGame();
}


void AARPG_PlayerController::QuitGame() const
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, false);
}



void AARPG_PlayerController::SetIsInBonfireRange(const bool bNewIsInBonfireRange, ABonfire* BonfireInRange)
{
	bIsInBonfireRange = bNewIsInBonfireRange;
	BonfireRef = BonfireInRange;
}


void AARPG_PlayerController::SetIsInDoorRange(const bool bNewIsInDoorRange)
{
	bIsInDoorRange = bNewIsInDoorRange;
}


void AARPG_PlayerController::SetMapName(const FString& NewMapName)
{
	MapName = NewMapName;
}


TArray<FName> AARPG_PlayerController::GetDefeatedBosses() const
{
	return DefeatedBosses;
}


void AARPG_PlayerController::AddDefeatedBoss(const FName& Boss)
{
	DefeatedBosses.AddUnique(Boss);
}


TMap<FString, FBonfireData>& AARPG_PlayerController::GetUnlockedBonfires()
{
	return UnlockedBonfires;
}


ABonfire*& AARPG_PlayerController::GetCurrentBonfire()
{
	return BonfireRef;
}
