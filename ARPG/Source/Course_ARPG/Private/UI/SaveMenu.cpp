
#include "UI/SaveMenu.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "SaveGame/ARPG_SaveGame.h"
#include"UI/SaveSlotWidget.h"


void USaveMenu::NativeConstruct()
{
	Super::NativeConstruct();
	SetPlayerControllerProperties();

	SlotNames.Add(FString("Slot1"));
	SlotNames.Add(FString("Slot2"));
	SlotNames.Add(FString("Slot3"));
	SlotNames.Add(FString("Slot4"));
	SlotNames.Add(FString("Slot5"));
	
	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance) return;
	CreateSlots(SaveSlotWidgetClass);
	Button_ExitToMainMenu->OnClicked.AddDynamic(this, &USaveMenu::BackToMainMenu);
}


void USaveMenu::CreateSlots(const TSubclassOf<USaveSlotWidget>& WidgetClass)
{
	if (!WidgetClass) return;
	for (auto SlotName : SlotNames)
	{
		USaveSlotWidget* SaveSlotWidget = CreateWidget<USaveSlotWidget>(GetWorld(), WidgetClass);
		VerticalBox_SaveSlots->AddChild(SaveSlotWidget);
		SaveSlotWidget->SetSlotName(SlotName);
		if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
		{
			SaveSlotWidget->SetSlotStatus(FText::FromString("Load"));
			UARPG_SaveGame* SaveGameInstance = Cast<UARPG_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
			if (SaveGameInstance) SaveSlotWidget->SetMapName(FName(SaveGameInstance->CurrentMap));
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
	if (!PlayerController) return;
	PlayerController->SetShowMouseCursor(true);
	FInputModeGameAndUI InputMode;
	PlayerController->SetInputMode(InputMode);
}


void USaveMenu::BackToMainMenu()
{
	UGameplayStatics::OpenLevel(GetWorld(), FName("MainMenu"));
}

