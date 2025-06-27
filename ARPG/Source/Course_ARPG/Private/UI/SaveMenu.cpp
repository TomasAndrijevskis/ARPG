
#include "UI/SaveMenu.h"
#include "SaveGame/ARPG_GameInstance.h"
#include"UI/SaveSlotWidget.h"

void USaveMenu::NativeConstruct()
{
	Super::NativeConstruct();

	SetPlayerControllerProperties();

	SlotNames.Add(FString("Slot1"));
	SlotNames.Add(FString("Slot2"));
	SlotNames.Add(FString("Slot3"));
	
	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance)
	{
		return;
	}

	CreateSlots(SaveSlotWidgetClass);
	
}

void USaveMenu::CreateSlots(TSubclassOf<USaveSlotWidget> WidgetClass)
{
	if (!WidgetClass)
	{
		return;
	}
	for (auto SlotName : SlotNames)
	{
		USaveSlotWidget* SaveSlotWidget = CreateWidget<USaveSlotWidget>(GetWorld(), WidgetClass);
		VerticalBox_SaveSlots->AddChild(SaveSlotWidget);
		SaveSlotWidget->SetSlotName(SlotName);

		if (GameInstance->bCheckSlot(SlotName))
		{
			SaveSlotWidget->SetSlotStatus(FText::FromString("Load"));
			SaveSlotWidget->SetMapName(FName("TestMap"));
		}
		else
		{
			SaveSlotWidget->SetSlotStatus(FText::FromString("Create"));
			SaveSlotWidget->SetMapName(FName("CharacterSelectionMap"));
		}
	}
}


void USaveMenu::SetPlayerControllerProperties()
{
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		return;
	}
	PlayerController->SetShowMouseCursor(true);
	FInputModeGameAndUI InputMode;
	PlayerController->SetInputMode(InputMode);
}

