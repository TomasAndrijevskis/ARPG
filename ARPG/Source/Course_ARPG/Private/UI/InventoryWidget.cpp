
#include "UI/InventoryWidget.h"
#include "Components/WrapBox.h"
#include "UI/InventorySlot.h"


void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HandleSlotsCreation();
}


void UInventoryWidget::HandleSlotsCreation()
{
	if (Items.Num() != 0)
	{
		for (const auto& Item : Items)
		{
			CreateTakenSlot(Item.Image);
		}
		int AmountOfItems = Items.Num();
		SlotsAmount -= AmountOfItems;
	}
	CreateEmptySlots();
}


void UInventoryWidget::CreateEmptySlots()
{
	if (!InventorySlotClass) return;
	for (int i = 0; i < SlotsAmount; i++)
	{
		UE_LOG(LogTemp, Warning, TEXT("Slot: %i"), i);
		WrapBox_Inventory->AddChild(CreateInventorySlot(nullptr));
	}
}

void UInventoryWidget::CreateTakenSlot(UTexture2D* Icon)
{
	if (!InventorySlotClass) return;
	WrapBox_Inventory->AddChild(CreateInventorySlot(Icon));
}


UInventorySlot* UInventoryWidget::CreateInventorySlot(UTexture2D* Icon)
{
	if (!InventorySlotClass) return nullptr;
	UInventorySlot* InventorySlot = Cast<UInventorySlot>(CreateWidget(this, InventorySlotClass));
	if (!InventorySlot) return nullptr;
	InventorySlot->SetIcon(Icon);
	return InventorySlot;
}


void UInventoryWidget::SetItems(const TArray<FItemsData>& AvailableItems){Items = AvailableItems;}

void UInventoryWidget::SetSlotsAmount(int Amount){SlotsAmount = Amount;}