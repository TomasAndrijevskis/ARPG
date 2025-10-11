
#include "UI/PauseMenu.h"
#include "Characters/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ControlSlot.h"
#include "UI/Controls.h"


void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	Button_Resume->OnClicked.Clear();
	Button_MainMenu->OnClicked.Clear();
	Button_QuitGame->OnClicked.Clear();
	Button_Resume->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::RemovePauseMenu);
	Button_MainMenu->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::LoadToMainMenu);
	Button_QuitGame->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::SaveBeforeQuit);

	CreateControlsWindows();
}


void UPauseMenu::RemoveControlsWindow()
{
	VerticalBox_Controls->ClearChildren();
}


void UPauseMenu::CreateControlsWindows()
{
	if (ControlsDataTable)
	{
		TArray<FName> RowNames = ControlsDataTable->GetRowNames();
		for (FName RowName: RowNames)
		{
			FControls* Row = ControlsDataTable->FindRow<FControls>(RowName, TEXT("Control slot"), true);
			if (Row)
			{
				CreateControlSlot(Row->Image, Row->Description);
			}
		}
	}
}


void UPauseMenu::CreateControlSlot(UTexture2D* Icon, const FText& Description)
{
	if (ControlSlotWidgetClass)
	{
		ControlSlotWidgetRef = Cast<UControlSlot>(CreateWidget(this, ControlSlotWidgetClass));
		if (ControlSlotWidgetRef)
		{
			ControlSlotWidgetRef->InitializeControlSlot(Icon, Description);
			VerticalBox_Controls->AddChild(ControlSlotWidgetRef);
		}
	}
}
