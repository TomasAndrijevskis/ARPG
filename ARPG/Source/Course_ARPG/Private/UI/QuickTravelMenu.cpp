
#include "UI/QuickTravelMenu.h"
#include "Characters/Player/ARPG_PlayerState.h"
#include "Components/VerticalBox.h"
#include "Helpers/TeleportSubsystem.h"
#include "UI/HUD_Base.h"
#include "UI/PlayerWidget.h"
#include "UI/QuickTravelButton.h"
#include "UI/Buttons/MenuButtonBase.h"


void UQuickTravelMenu::NativeConstruct()
{
	Super::NativeConstruct();
	BindButton();
}


void UQuickTravelMenu::BindButton()
{
	if (AHUD_Base* HUD = GetHUD())
	{
		Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(HUD, &AHUD_Base::ToggleBonfireWidget);
	}
}


void UQuickTravelMenu::HandleVisibilityChanged(ESlateVisibility Vis)
{
	Super::HandleVisibilityChanged(Vis);
	if (Vis == ESlateVisibility::Visible) CreateButtons();
}


void UQuickTravelMenu::CreateButtons()
{
	if (!QuickTravelButtonClass) return;
	VB_QuickTravelContainer->ClearChildren();	
	AARPG_PlayerState* PlayerState = GetPlayerState();
	if (!PlayerState) return;
	TArray<FSpawnPoint> Bonfires = PlayerState->GetUnlockedBonfires();
	const FString CurrentBonfireName = PlayerState->GetCurrentBonfireName();
	
	for (const auto& BonfireData : Bonfires)
	{
		if (UQuickTravelButton* QuickTravelButtonRef = Cast<UQuickTravelButton>(CreateWidget(this, QuickTravelButtonClass)))
		{
			QuickTravelButtonRef->InitializeButton(BonfireData, CurrentBonfireName);
			VB_QuickTravelContainer->AddChild(QuickTravelButtonRef);
		}
	}
}