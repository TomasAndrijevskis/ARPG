
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Gamemode/ARPG_GameMode.h"
#include "Helpers/TeleportSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/HUD_Base.h"


void AARPG_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	this->SetShowMouseCursor(false);
	FInputModeGameOnly InputMode;
	this->SetInputMode(InputMode);
}


void AARPG_PlayerController::OnPossess(APawn* aPawn)
{
	Super::OnPossess(aPawn);
	PlayerRef = Cast<AMainCharacter_Base>(aPawn);
	GameInstanceRef = Cast<UARPG_GameInstance>(GetWorld()->GetGameInstance());
	if (!GameInstanceRef || !PlayerRef) return;
	if (UTeleportSubsystem* SubSystem = GameInstanceRef->GetSubsystem<UTeleportSubsystem>())
	{
		SubSystem->OnPlayerTeleportRequestDelegate.AddUObject(this, &AARPG_PlayerController::OnPlayerRequestedTeleport);
	}
	HandleGameLoad();
}


void AARPG_PlayerController::HandleGameLoad()
{
	UE_LOG(LogTemp, Error, TEXT("handle game load"));
	if (!GameInstanceRef) return;
	UE_LOG(LogTemp, Error, TEXT("game instance exists"));
	GameInstanceRef->InitializeGameInstance();
	const FString SlotName = GameInstanceRef->GetSlotName();
	if (GameInstanceRef->CheckSlot(SlotName) && !GameInstanceRef->bIsFirstLoad) GameInstanceRef->HandleGameLoad();
	else
	{
		PlayerRef->HandleDefaultAttributes();
		GameInstanceRef->SaveAll();
	}
}


void AARPG_PlayerController::CreateHUD()
{
	HUD = Cast<AHUD_Base>(GetHUD());
	if (HUD)
	{
		HUD->AssignPlayerRef();
		HUD->CreatePlayerWidget();
		HUD->CreateGameMenuWidgets();
	}
}


void AARPG_PlayerController::HandleDeath()
{
	if (!HUD || !PlayerRef) return;
	OnPlayerDiedDelegate.Broadcast();
	HUD->CreateDeathWidget();
	PlayerRef->PlayDeathAnimation();
	DisableInput(this);
}


void AARPG_PlayerController::OnDeathAnimationFinished()
{
	const FString LevelName = UGameplayStatics::GetCurrentLevelName(this, true);
	UGameplayStatics::OpenLevel(this, FName(*LevelName));
}


void AARPG_PlayerController::HandleBonfireInteraction(const FSpawnPoint& LastSpawnPoint)
{
	if (!PlayerRef || !GameInstanceRef) return;
	GameInstanceRef->SavePlayerLocation(LastSpawnPoint);
	HUD->ToggleBonfireWidget();
	if (PlayerRef->IsPlayerLockedOnEnemy()) PlayerRef->EndPlayerLockOnEnemy();
	
}


void AARPG_PlayerController::HandleBonfireWidgetQuit()
{
	FOnBonfireInteractionFinishedDelegate.Broadcast();
	HUD->ToggleBonfireWidget();
	AARPG_GameMode* GameMode = Cast<AARPG_GameMode>(GetWorld()->GetAuthGameMode());
	if (!GameMode) return;
	GameMode->SpawnEnemies();
}


void AARPG_PlayerController::HandleMagicalCubeInteraction()
{
	if (!PlayerRef || !GameInstanceRef) return;
	HUD->ToggleResetWidget();
}


void AARPG_PlayerController::HandleEnchantmentSphereInteraction()
{
	if (!PlayerRef || !GameInstanceRef) return;
	HUD->ToggleEnchantmentWidget();
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


void AARPG_PlayerController::HandleGamePause(const bool bIsGamePaused)
{
	SetShowMouseCursor(bIsGamePaused);
	bEnableClickEvents = bIsGamePaused;
	bEnableMouseOverEvents = bIsGamePaused;
	bIsGamePaused ? SetInputMode(FInputModeGameAndUI()) : SetInputMode(FInputModeGameOnly());
	UGameplayStatics::SetGamePaused(GetWorld(), bIsGamePaused);
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


void AARPG_PlayerController::OnWidgetClosed()
{
	UE_LOG(LogTemp, Warning, TEXT("OnWidgetClosed"));
	HandleGamePause(false);
	GameInstanceRef->SaveAll();
}


void AARPG_PlayerController::OnWidgetOpened()
{
	UE_LOG(LogTemp, Warning, TEXT("OnWidgetOpened"));
	HandleGamePause(true);
	GameInstanceRef->SaveAll();
}


void AARPG_PlayerController::TogglePauseWidget()
{
	if (HUD) HUD->TogglePauseWidget();
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
