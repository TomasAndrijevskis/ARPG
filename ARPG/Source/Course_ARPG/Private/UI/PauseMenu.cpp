
#include "UI/PauseMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ControlSlot.h"
#include "UI/Controls.h"


void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (!PlayerController) return;
	Button_Resume->OnClicked.AddUniqueDynamic(PlayerController, &AARPG_PlayerController::RemovePauseMenu);
	Button_Resume->OnClicked.AddUniqueDynamic(this, &UPauseMenu::RemoveWidget);
	Button_MainMenu->OnClicked.AddUniqueDynamic(PlayerController, &AARPG_PlayerController::LoadToMainMenu);
	Button_QuitGame->OnClicked.AddUniqueDynamic(PlayerController, &AARPG_PlayerController::SaveBeforeQuit);

	CreateControlsWindows();
}


void UPauseMenu::CreateControlsWindows()
{
	if (ControlsDataTable)
	{
		for (const FName& RowName: ControlsDataTable->GetRowNames())
		{
			const FControls* Row = ControlsDataTable->FindRow<FControls>(RowName, TEXT("Control slot"), true);
			if (Row) CreateControlSlot(Row->Image, Row->Description);
		}
	}
}


void UPauseMenu::CreateControlSlot(UTexture2D* Icon, const FText& Description)
{
	if (ControlSlotWidgetClass)
	{
		UControlSlot* ControlSlotWidget = Cast<UControlSlot>(CreateWidget(this, ControlSlotWidgetClass));
		if (ControlSlotWidget)
		{
			ControlSlotWidget->InitializeControlSlot(Icon, Description);
			VerticalBox_Controls->AddChild(ControlSlotWidget);
		}
	}
}


void UPauseMenu::RemoveControlsWindow()
{
	VerticalBox_Controls->ClearChildren();
}


void UPauseMenu::RemoveWidget()
{
	RemoveControlsWindow();
	this->RemoveFromParent();
}
