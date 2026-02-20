
#include "UI/QuickTravelButton.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Data//BonfireData.h"
#include "UI/TransitionAnim.h"


void UQuickTravelButton::NativeConstruct()
{
	Super::NativeConstruct();
	Button_QuickTravel->OnClicked.Clear();
	Button_QuickTravel->OnClicked.AddDynamic(this, &UQuickTravelButton::TeleportPlayer);
}


void UQuickTravelButton::InitializeButton(const FString& NewTravelLocationName, const FBonfireData& BonfireData, const FString& CurrentBonfireName)
{
	TravelMapName = BonfireData.MapName;
	TravelLocation = BonfireData.Location;
	Text_QuickTravelLocation->SetText(FText::FromString(NewTravelLocationName));
	if (CurrentBonfireName == NewTravelLocationName) Button_QuickTravel->SetIsEnabled(false);
}


void UQuickTravelButton::TeleportPlayer()
{
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController) return;
	PlayerController->HandlePlayerTeleport(TravelLocation, TravelMapName);
}