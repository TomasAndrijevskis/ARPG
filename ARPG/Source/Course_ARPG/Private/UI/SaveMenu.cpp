
#include "UI/SaveMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/SaveSlotWidget.h"
#include "UI/Buttons/MenuButtonBase.h"


void USaveMenu::NativeConstruct()
{
	Super::NativeConstruct();
	CreateSlots();
	Button_ExitToMainMenu->OnButtonClickedDelegate.AddDynamic(this, &USaveMenu::BackToMainMenu);
}


void USaveMenu::CreateSlots()
{
	if (!SaveSlotWidgetClass) return;
	for (const auto& SlotName : SlotNames)
	{
		USaveSlotWidget* SaveSlotWidget = CreateWidget<USaveSlotWidget>(GetWorld(), SaveSlotWidgetClass);
		VerticalBox_SaveSlots->AddChild(SaveSlotWidget);
		SaveSlotWidget->SetSlotName(SlotName);
		if (UGameplayStatics::DoesSaveGameExist(SlotName, 0))
		{
			SaveSlotWidget->OnSlotExists();
			SaveSlotWidget->UpdateSlotText(FText::FromString("Load"));
		}
		else SaveSlotWidget->UpdateSlotText(FText::FromString("Create"));
	}
}


void USaveMenu::BackToMainMenu()
{
	this->RemoveFromParent();
}