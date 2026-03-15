
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Gamemode/ARPG_GameMode.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Objects/Bonfire.h"
#include "Data/BonfireData.h"
#include "UI/TransitionAnim.h"


void AARPG_PlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetPlayerControllerSettings();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (!PlayerRef) return;
	PlayFadeAnim(FadeOut);
	GameInstanceRef = Cast<UARPG_GameInstance>(GetWorld()->GetGameInstance());
	if (!GameInstanceRef) return;
	HandleGameLoad();
}


void AARPG_PlayerController::HandleBonfireInteraction()
{
	UE_LOG(LogTemp, Warning, TEXT("Interact with Bonfire"));
	if (!bIsInBonfireRange) return;
	UE_LOG(LogTemp, Warning, TEXT("Actually interacted with Bonfire"));
	PlayerRef->CreateBonfireMenu();
	GameInstanceRef->SaveAll();
	if (PlayerRef->IsPlayerLockedOnEnemy()) PlayerRef->EndPlayerLockOnEnemy();
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


void AARPG_PlayerController::HandleBonfireMenuQuit()
{
	PlayerRef->FOnBonfireInteractionFinishedDelegate.Broadcast();
	HandleGamePause(false);
	GameInstanceRef->SaveAll();
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


void AARPG_PlayerController::HandleResetMenuQuit()
{
	HandleGamePause(false);
	GameInstanceRef->SaveAll();
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


void AARPG_PlayerController::HandleEnchantmentMenuQuit()
{
	HandleGamePause(false);
	GameInstanceRef->SaveAll();
}


void AARPG_PlayerController::StartTransitionAnim(EAnimTypes AnimType, float& AnimDuration)
{
	if (!TransitionAnimClass) return;
	UTransitionAnim* TransitionAnimRef = Cast<UTransitionAnim>(CreateWidget(this, TransitionAnimClass));
	if (!TransitionAnimRef) return;
	TransitionAnimRef->AddToViewport(6);
	TransitionAnimRef->PlayAnim(AnimType);
	AnimDuration = TransitionAnimRef->GetAnimDuration(AnimType);
}


void AARPG_PlayerController::PlayFadeAnim(EAnimTypes AnimType)
{
	float AnimDuration;
	StartTransitionAnim(AnimType, AnimDuration);
	SetPlayerInputEnabled(false);
	FTimerDelegate InputDelegate;
	InputDelegate.BindUObject(this, &AARPG_PlayerController::SetPlayerInputEnabled, true);
	HandleTeleportTimers(AnimDuration, InputDelegate);
}


void AARPG_PlayerController::CallTeleportRequest()
{
	if (!bIsInDoorRange) return;
	HandlePlayerTeleport(FVector::ZeroVector, "");
}


void AARPG_PlayerController::HandlePlayerTeleport(const FVector& TravelLocation, const FString& TravelMapName)
{
	float AnimDuration;
	StartTransitionAnim(FullFade, AnimDuration);
	SetPlayerInputEnabled(false);
	HandleGamePause(false);
	OnPlayerTeleportRequestDelegate.Broadcast();
	FTimerDelegate TeleportDelegate;
	FTimerDelegate InputDelegate;
	TeleportDelegate.BindUObject(this, &AARPG_PlayerController::HandleTeleportDestination, TravelLocation, TravelMapName);
	InputDelegate.BindUObject(this, &AARPG_PlayerController::SetPlayerInputEnabled, true);
	HandleTeleportTimers(AnimDuration/2, TeleportDelegate);
	HandleTeleportTimers(AnimDuration, InputDelegate);
}


void AARPG_PlayerController::HandleTeleportDestination(FVector TravelLocation, FString TravelMapName)
{
	if (!GameInstanceRef) return;
	FString CurrentMapName = UGameplayStatics::GetCurrentLevelName(GetWorld());
	if (CurrentMapName == TravelMapName) TeleportToLocation(TravelLocation);
	else TeleportToMap(TravelLocation, TravelMapName);
}


void AARPG_PlayerController::TeleportToMap(FVector TravelLocation, FString TravelMapName)
{
	if (!GameInstanceRef) return;
	if (!bIsInDoorRange)
	{
		FString MapPath = "/Game/Maps/" + TravelMapName;
		if (FPackageName::DoesPackageExist(MapPath))
		{
			GameInstanceRef->SavePlayerLocation(TravelLocation);
			OpenRequiredLevel(FName(*TravelMapName));
		}
	}
	else
	{
		GameInstanceRef->SetTeleportByDoor(true);
		OpenRequiredLevel(FName(MapName));
	}
}


void AARPG_PlayerController::HandleTeleportTimers(float AnimDuration, const FTimerDelegate& Delegate)
{
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, Delegate, AnimDuration, false);
}


void AARPG_PlayerController::OpenRequiredLevel(FName NextMapName)
{
	UGameplayStatics::OpenLevel(this, NextMapName);
}


void AARPG_PlayerController::TeleportToLocation(const FVector& Location)
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
	const FString SlotName = GameInstanceRef->GetSlotName();
	if (GameInstanceRef->CheckSlot(SlotName) && !GameInstanceRef->bIsFirstLoad) GameInstanceRef->HandleGameLoad();
	else
	{
		PlayerRef->HandleDefaultAttributes();
		GameInstanceRef->SaveAll();
	}
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
	PlayerRef->CreatePauseMenu();
}


void AARPG_PlayerController::RemovePauseMenu()
{
	HandleGamePause(false);
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


void AARPG_PlayerController::SetIsInBonfireRange(const bool bNewIsInBonfireRange, ABonfire* BonfireInRange){bIsInBonfireRange = bNewIsInBonfireRange;BonfireRef = BonfireInRange;}

void AARPG_PlayerController::SetIsInMagicalCubeRange(const bool bNewIsInMagicalCubeRange){bIsInMagicalCubeRange = bNewIsInMagicalCubeRange;}

void AARPG_PlayerController::SetIsInMagicalSphereRange(const bool bNewIsInMagicalSphereRange){bIsInMagicalSphereRange = bNewIsInMagicalSphereRange;}

void AARPG_PlayerController::SetIsInDoorRange(const bool bNewIsInDoorRange){bIsInDoorRange = bNewIsInDoorRange;}

void AARPG_PlayerController::SetMapName(const FString& NewMapName){MapName = NewMapName;}

void AARPG_PlayerController::SetDefeatedBosses(const TArray<FName>& Bosses){DefeatedBosses = Bosses;}

void AARPG_PlayerController::AddDefeatedBoss(const FName& Boss){DefeatedBosses.AddUnique(Boss);}

void AARPG_PlayerController::SetUnlockedBonfires(const TMap<FString, FBonfireData>& NewUnlockedBonfires){UnlockedBonfires = NewUnlockedBonfires;}

ABonfire*& AARPG_PlayerController::GetCurrentBonfire(){return BonfireRef;}

TMap<FString, FBonfireData>& AARPG_PlayerController::GetUnlockedBonfires(){return UnlockedBonfires;}

TArray<FName> AARPG_PlayerController::GetDefeatedBosses() const{return DefeatedBosses;}