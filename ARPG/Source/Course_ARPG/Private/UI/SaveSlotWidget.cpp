
#include "UI/SaveSlotWidget.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"


void USaveSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Button_MangageSaveSlot->OnClicked.AddDynamic(this, &USaveSlotWidget::OnButtonClicked);

	PlayerController = GetWorld()->GetFirstPlayerController();
}


void USaveSlotWidget::SetSlotName(FString NewSlotName)
{
	SlotName = NewSlotName;
	Text_SaveSlotName->SetText(FText::FromString(SlotName));
}


void USaveSlotWidget::SetSlotStatus(FText NewText)
{
	Text_SaveSlotStatus->SetText(NewText);
}


void USaveSlotWidget::SetMapName(FName NewMapName)
{
	MapName = NewMapName;
}


void USaveSlotWidget::OnButtonClicked()
{
	Cast<UARPG_GameInstance>(GetGameInstance())->SetSlotName(SlotName);

	PlayerController->SetShowMouseCursor(false);
	FInputModeGameOnly InputMode;
	PlayerController->SetInputMode(InputMode);

	UGameplayStatics::OpenLevel(GetWorld(),MapName);
	
}



FString USaveSlotWidget::GetSlotName()
{
	return SlotName;
}