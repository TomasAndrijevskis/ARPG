
#include "UI/InventoryWidget.h"
#include "Components/WrapBox.h"
#include "UI/InventorySlot.h"


void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
	CreateSlots();
}


void UInventoryWidget::CreateSlots()
{
	if (!InventorySlotClass) return;
	for (int i = 0; i < SlotsAmount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Slot: %i"), i);
		WrapBox_Inventory->AddChild(CreateInventorySlot());
	}
}


UInventorySlot* UInventoryWidget::CreateInventorySlot()
{
	if (!InventorySlotClass) return nullptr;
	return Cast<UInventorySlot>(CreateWidget(this, InventorySlotClass));
}


void UInventoryWidget::SetSlotsAmount(int Amount){SlotsAmount = Amount;}