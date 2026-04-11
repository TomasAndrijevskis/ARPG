
#include "UI/InventoryWidget.h"
#include "Components/GridPanel.h"
#include "Components/WrapBox.h"
#include "UI/InventorySlot.h"


void UInventoryWidget::NativeConstruct()
{
	Super::NativeConstruct();
	HandleSlotsCreation();
}


void UInventoryWidget::HandleSlotsCreation()
{
	Size = SlotsAmount;
	for (const auto& Item : Items)
	{
		CreateSlot(Item.Image);
		Size--;
	}
	for (int i = 1; i <= Size; i++)
	{
		CreateSlot(nullptr);
	}
}


void UInventoryWidget::CreateSlot(UTexture2D* Icon)
{
	if (!InventorySlotClass) return;
	GridPanel_Inventory->AddChildToGrid(CreateInventorySlot(Icon), CurrentRow, CurrentColumn);
	CurrentColumn++;
	if (CurrentColumn == ColumnAmount)
	{
		CurrentRow++;
		CurrentColumn = 0;
	}
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