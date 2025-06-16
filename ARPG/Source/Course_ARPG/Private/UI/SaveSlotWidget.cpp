
#include "UI/SaveSlotWidget.h"

void USaveSlotWidget::SetSlotName(FString NewSlotName)
{
	UE_LOG(LogTemp, Warning, TEXT("Widget: SlotName: %s"), *NewSlotName);
	SlotName = NewSlotName;
}

FString USaveSlotWidget::GetSlotName()
{
	return SlotName;
}
