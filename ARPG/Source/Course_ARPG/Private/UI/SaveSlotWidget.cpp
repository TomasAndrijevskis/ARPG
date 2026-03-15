
#include "UI/SaveSlotWidget.h"

#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"


void USaveSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Button_ManageSaveSlot->OnClicked.AddDynamic(this, &USaveSlotWidget::OnButtonClicked);
	PlayerController = GetWorld()->GetFirstPlayerController();
}


void USaveSlotWidget::OnButtonClicked()
{
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance) return;
	GameInstance->SetSlotName(SlotName);
	PlayerController->SetShowMouseCursor(false);
	FInputModeGameOnly InputMode;
	PlayerController->SetInputMode(InputMode);
	UGameplayStatics::OpenLevel(GetWorld(),MapName);
}


void USaveSlotWidget::SetSlotName(const FString& NewSlotName)
{
	SlotName = NewSlotName;
	Text_SaveSlotName->SetText(FText::FromString(SlotName));
}

void USaveSlotWidget::SetSlotStatus(const FText& NewText){Text_SaveSlotStatus->SetText(NewText);}

void USaveSlotWidget::SetMapName(const FName& NewMapName){MapName = NewMapName;}

FString USaveSlotWidget::GetSlotName() const{return SlotName;}