
#include "UI/PauseMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/VerticalBox.h"
#include "UI/ControlSlot.h"
#include "Data/ControlsData.h"
#include "UI/HUD_Base.h"
#include "UI/Buttons/MenuButtonBase.h"


void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	BindButtons();
	CreateControlsWindows();
}


void UPauseMenu::BindButtons()
{
	if (AARPG_PlayerController* PC = GetPlayerController())
	{
		if (AHUD_Base* HUD = GetHUD()) Button_Resume->OnButtonClickedDelegate.AddUniqueDynamic(HUD, &AHUD_Base::TogglePauseWidget);
		Button_MainMenu->OnButtonClickedDelegate.AddUniqueDynamic(PC, &AARPG_PlayerController::LoadToMainMenu);
		Button_QuitGame->OnButtonClickedDelegate.AddUniqueDynamic(PC, &AARPG_PlayerController::SaveBeforeQuit);
	}
}


void UPauseMenu::CreateControlsWindows()
{
	if (!ControlsDataTable) return;
	for (const FName& RowName: ControlsDataTable->GetRowNames())
	{
		const FControlsData* Row = ControlsDataTable->FindRow<FControlsData>(RowName, TEXT("Control slot"), true);
		if (Row) CreateControlSlot(Row->Image, Row->Description);
	}
}


void UPauseMenu::CreateControlSlot(UTexture2D* Icon, const FText& Description)
{
	if (!ControlSlotWidgetClass) return;
	if (UControlSlot* ControlSlotWidget = Cast<UControlSlot>(CreateWidget(this, ControlSlotWidgetClass)))
	{
		ControlSlotWidget->InitializeControlSlot(Icon, Description);
		VerticalBox_Controls->AddChild(ControlSlotWidget);
	}
}

