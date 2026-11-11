
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Gamemode/ARPG_GameMode.h"
#include "Helpers/TeleportSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"


void AARPG_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetPlayerControllerSettings();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (!PlayerRef) return;
	GameInstanceRef = Cast<UARPG_GameInstance>(GetWorld()->GetGameInstance());
	if (!GameInstanceRef) return;
	HandleGameLoad();

	if (UTeleportSubsystem* SubSystem = GameInstanceRef->GetSubsystem<UTeleportSubsystem>())
	{
		SubSystem->OnPlayerTeleportRequestDelegate.AddUObject(this, &AARPG_PlayerController::OnPlayerRequestedTeleport);
	}
}



void AARPG_PlayerController::HandleBonfireInteraction(const FSpawnPoint& LastSpawnPoint)
{
	if (!PlayerRef || !GameInstanceRef) return;
	PlayerRef->CreateBonfireMenu();
	GameInstanceRef->SavePlayerLocation(LastSpawnPoint);
	GameInstanceRef->SaveAll();
	if (PlayerRef->IsPlayerLockedOnEnemy()) PlayerRef->EndPlayerLockOnEnemy();
	HandleGamePause(true);
}


void AARPG_PlayerController::HandleBonfireMenuQuit()
{
	PlayerRef->FOnBonfireInteractionFinishedDelegate.Broadcast();
	OnMenuClosed();
	AARPG_GameMode* GameMode = Cast<AARPG_GameMode>(GetWorld()->GetAuthGameMode());
	if (!GameMode) return;
	GameMode->SpawnEnemies();
}


void AARPG_PlayerController::HandleMagicalCubeInteraction()
{
	UE_LOG(LogTemp, Warning, TEXT("Interact with Cube"));
	if (!bIsInMagicalCubeRange) return;
	UE_LOG(LogTemp, Warning, TEXT("Actually interacted with Cube"));
	PlayerRef->CreateResetMenu();
	GameInstanceRef->SaveAll();
	HandleGamePause(true);
}


void AARPG_PlayerController::HandleEnchantmentSphereInteraction()
{
	UE_LOG(LogTemp, Warning, TEXT("Interact with Sphere"));
	if (!bIsInMagicalSphereRange) return;
	UE_LOG(LogTemp, Warning, TEXT("Actually interacted with Sphere"));
	PlayerRef->CreateEnchantmentMenu();
	GameInstanceRef->SaveAll();
	HandleGamePause(true);
}


void AARPG_PlayerController::Interact()
{
	if (!CurrentInteractable.IsValid()) return;
	CurrentInteractable.Get()->OnInteract();
}


void AARPG_PlayerController::LoadToMainMenu()
{
	GameInstanceRef->SaveAll();
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
	bIsGamePaused ? SetInputMode(FInputModeGameAndUI()) : SetInputMode(FInputModeGameOnly());
	UGameplayStatics::SetGamePaused(GetWorld(), bIsGamePaused);
}


void AARPG_PlayerController::HandleGameLoad() const
{
	if (!GameInstanceRef) return;
	GameInstanceRef->InitializeGameInstance();
	const FString SlotName = GameInstanceRef->GetSlotName();
	if (GameInstanceRef->CheckSlot(SlotName) && !GameInstanceRef->bIsFirstLoad) GameInstanceRef->HandleGameLoad();
	else
	{
		PlayerRef->HandleDefaultAttributes();
		GameInstanceRef->SaveAll();
	}
}


void AARPG_PlayerController::OnPlayerRequestedTeleport()
{
	SetPlayerInputEnabled(false);
	HandleGamePause(false);
}


void AARPG_PlayerController::SetPlayerInputEnabled(const bool IsEnabled)
{
	IsEnabled ? PlayerRef->EnableInput(this) : PlayerRef->DisableInput(this);
}


void AARPG_PlayerController::CreatePauseMenu()
{
	HandleGamePause(true);
	PlayerRef->CreatePauseMenu();
}


void AARPG_PlayerController::OnMenuClosed()
{
	HandleGamePause(false);
	GameInstanceRef->SaveAll();
}


void AARPG_PlayerController::RemovePauseMenu()
{
	HandleGamePause(false);
}


void AARPG_PlayerController::SaveBeforeQuit()
{
	GameInstanceRef->SaveAll();
	QuitGame();
}


void AARPG_PlayerController::QuitGame() const
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, false);
}

void AARPG_PlayerController::SetIsInMagicalCubeRange(const bool bNewIsInMagicalCubeRange){bIsInMagicalCubeRange = bNewIsInMagicalCubeRange;}

void AARPG_PlayerController::SetIsInMagicalSphereRange(const bool bNewIsInMagicalSphereRange){bIsInMagicalSphereRange = bNewIsInMagicalSphereRange;}

void AARPG_PlayerController::SetInteractable(IInteractable* InteractableRef)
{
	CurrentInteractable = InteractableRef;
}
