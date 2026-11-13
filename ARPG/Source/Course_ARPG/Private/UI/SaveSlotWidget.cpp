
#include "UI/SaveSlotWidget.h"

#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "UI/CharacterSelection.h"
#include "UI/Buttons/MenuButtonBase.h"


void USaveSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Button_ManageSaveSlot->OnButtonClickedDelegate.AddDynamic(this, &USaveSlotWidget::OnButtonClicked);
}


void USaveSlotWidget::OnButtonClicked()
{
	if (UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance()))
	{
		GameInstance->SetSlotName(SlotName);
		if (!bSlotExists) CreateCharacterSelectionWidget();
		else UGameplayStatics::OpenLevel(GetWorld(), GameInstance->GetCurrentMap());
	}
}


void USaveSlotWidget::SetPlayerControllerProperties()
{
	if (APlayerController* PlayerController = Cast<APlayerController>(GetWorld()->GetFirstPlayerController()))
	{
		PlayerController->SetShowMouseCursor(false);
		FInputModeGameAndUI InputMode;
		PlayerController->SetInputMode(InputMode);
	}
}


void USaveSlotWidget::CreateCharacterSelectionWidget()
{
	if (!CharacterSelectionWidgetClass) return;
	if (UCharacterSelection* CharacterSelectionWidget = CreateWidget<UCharacterSelection>(this, CharacterSelectionWidgetClass))
	{
		CharacterSelectionWidget->AddToViewport(1);
	}
}


void USaveSlotWidget::SetSlotName(const FString& NewSlotName)
{
	SlotName = NewSlotName;
	Text_SaveSlotName->SetText(FText::FromString(SlotName));
}


void USaveSlotWidget::UpdateSlotText(const FText& NewText){Button_ManageSaveSlot->ChangeText(NewText);}