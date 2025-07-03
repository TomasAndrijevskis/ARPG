
#include "Characters/ARPG_PlayerController.h"

#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/PlayerWidget.h"


void AARPG_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	SetPlayerControllerSettings();
	
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));

	GameInstanceRef = Cast<UARPG_GameInstance>(GetWorld()->GetGameInstance());
	HandleGameLoad();
}


void AARPG_PlayerController::SetPlayerControllerSettings()
{
	this->SetShowMouseCursor(false);
	FInputModeGameOnly InputMode;
	this->SetInputMode(InputMode);
}


void AARPG_PlayerController::CreateStatsScreen()
{
	if (bIsAbilityScreenOpened)
	{
		return;
	}

	if (UGameplayStatics::IsGamePaused(this))
	{
		HandleGamePause(false);
		PlayerRef->GetPlayerWidget()->RemoveStatsScreen();
		PlayerRef->StatsComp->OnStatUpdateDelegate.Broadcast();
		GameInstanceRef->SaveStats();
		bIsStatsScreenOpened = false;
	}
	else
	{
		HandleGamePause(true);
		PlayerRef->GetPlayerWidget()->CreateUpgradeInfoHeader(PlayerRef->LevelComp->GetCurrentStatPointsAmount());
		for (auto Stat : PlayerRef->ArrStats)
		{
			PlayerRef->GetPlayerWidget()->CreateStatsScreen(Stat);
		}
		bIsStatsScreenOpened = true;
	}
}


void AARPG_PlayerController::CreateAbilityUpgradeScreen()
{
	if (bIsStatsScreenOpened)
	{
		return;
	}

	if (UGameplayStatics::IsGamePaused(this))
	{
		HandleGamePause(false);
		PlayerRef->GetPlayerWidget()->RemoveAbilityUpgradeScreen();
		GameInstanceRef->SaveAbilities();
		bIsAbilityScreenOpened = false;
	}
	else
	{
		HandleGamePause(true);
		PlayerRef->GetPlayerWidget()->CreateUpgradeInfoHeader(PlayerRef->LevelComp->GetCurrentAbilityPointsAmount());
		for (auto Ability : PlayerRef->GetAbilitiesArray())
		{
			PlayerRef->GetPlayerWidget()->CreateAbilityUpgradeScreen(Ability);
		}
		bIsAbilityScreenOpened = true;
	}
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
		UE_LOG(LogTemp, Error, TEXT("PlayerController|SlotName: %s"), *SlotName);
	}
	else
	{
		GameInstanceRef->SaveAll();
	}
}



