
#include "Characters/ARPG_PlayerController.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"


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
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance)
	{
		return;
	}

	GameInstance->InitializeGameInstance();
	FString SlotName = GameInstance->GetSlotName();
	
	if (GameInstance->bCheckSlot(SlotName))
	{
		GameInstance->LoadStats();
		GameInstance->LoadAbilities();
	}
	else
	{
		GameInstance->SaveStats();
	}
}

