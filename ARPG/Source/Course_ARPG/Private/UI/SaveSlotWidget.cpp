
#include "UI/SaveSlotWidget.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
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
		MapName = GameInstance->GetCurrentMap();
		SetPlayerControllerProperties();
		UE_LOG(LogTemp, Error, TEXT("Button clicked %s"), *MapName.ToString());
		UGameplayStatics::OpenLevel(GetWorld(),MapName);
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


void USaveSlotWidget::SetSlotName(const FString& NewSlotName)
{
	SlotName = NewSlotName;
	Text_SaveSlotName->SetText(FText::FromString(SlotName));
}


void USaveSlotWidget::UpdateSlotText(const FText& NewText){Button_ManageSaveSlot->ChangeText(NewText);}