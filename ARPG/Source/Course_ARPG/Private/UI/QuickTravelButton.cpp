
#include "UI/QuickTravelButton.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Objects/BonfireData.h"
#include "UI/BonfireInteractionAnim.h"


void UQuickTravelButton::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController) return;
	Button_QuickTravel->OnClicked.Clear();
	Button_QuickTravel->OnClicked.AddDynamic(this, &UQuickTravelButton::ShowAnimBeforeTeleport);
}


void UQuickTravelButton::InitializeButton(const FString& NewTravelLocationName, const FBonfireData& BonfireData, const FString& CurrentBonfireName)
{
	TravelMapName = BonfireData.MapName;
	TravelLocation = BonfireData.Location;
	Text_QuickTravelLocation->SetText(FText::FromString(NewTravelLocationName));
	if (CurrentBonfireName == NewTravelLocationName) Button_QuickTravel->SetIsEnabled(false);
}


void UQuickTravelButton::ShowAnimBeforeTeleport()
{
	if (BonfireInteractionAnimClass)
	{
		UBonfireInteractionAnim* BonfireInteractionAnimRef = Cast<UBonfireInteractionAnim>(CreateWidget(this, BonfireInteractionAnimClass));
		BonfireInteractionAnimRef->AddToViewport(6);
		AnimDuration = BonfireInteractionAnimRef->GetAnimDuration();
	}
	PlayerController->OnPlayerInputEnabledChangedDelegate.Broadcast(false);
	PlayerController->OnGamePauseStateChangeRequestDelegate.Broadcast(false);
	PlayerController->OnPlayerTeleportedDelegate.Broadcast();
	FTimerHandle TimerHandleTeleport;
	FTimerHandle TimerHandleInput;
	GetWorld()->GetTimerManager().SetTimer(TimerHandleTeleport, this, &UQuickTravelButton::TeleportPlayer, AnimDuration/2, false);
	GetWorld()->GetTimerManager().SetTimer(TimerHandleInput, this, &UQuickTravelButton::EnablePlayerInput, AnimDuration, false);
}


void UQuickTravelButton::TeleportPlayer()
{
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(PlayerController->GetGameInstance());
	if (!GameInstance) return;
	FString MapName = UGameplayStatics::GetCurrentLevelName(GetWorld());
	if (MapName ==  TravelMapName) PlayerController->OnTeleportPlayerRequestDelegate.Broadcast(TravelLocation);
	else
	{
		FString MapPath = "/Game/Maps/" + TravelMapName;
		if (FPackageName::DoesPackageExist(MapPath))
		{
			GameInstance->SavePlayerLocation(TravelLocation);
			UGameplayStatics::OpenLevel(this, FName(*TravelMapName));
		}
	}
}


void UQuickTravelButton::EnablePlayerInput()
{
	PlayerController->OnPlayerInputEnabledChangedDelegate.Broadcast(true);
}