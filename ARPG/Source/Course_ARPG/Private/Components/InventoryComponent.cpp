
#include "Components/InventoryComponent.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Data/PickableItems.h"
#include "Items/PickableItem_Base.h"
#include "UI/InventoryWidget.h"


void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();
	PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
}


void UInventoryComponent::CreateInventoryWidget()
{
	if (!InventoryWidgetClass || !PC || InventoryWidgetRef) return;
	InventoryWidgetRef = Cast<UInventoryWidget>(CreateWidget(PC, InventoryWidgetClass));
	if (!InventoryWidgetRef) return;
	InventoryWidgetRef->SetSlotsAmount(SlotsAmount);
	InventoryWidgetRef->AddToViewport(5);
	PC->OnGamePauseRequestDelegate.Broadcast(true);
}


void UInventoryComponent::RemoveInventoryWidget()
{
	if (!InventoryWidgetRef || !PC) return;
	InventoryWidgetRef->RemoveFromParent();
	InventoryWidgetRef = nullptr;
	PC->OnGamePauseRequestDelegate.Broadcast(false);
}


void UInventoryComponent::AddItemToInventory(int ItemID)
{
	if (ItemID == 0) return;
	if (Items.Num() < SlotsAmount)
	{
		const FPickableItems* Item = FindItemByID(ItemID);
		if (!Item || !Item->ItemClass) return;
		Items.Add(Item->ItemClass);
	}
}


void UInventoryComponent::RemoveItemFromInventory(int ItemID)
{
	if (ItemID == 0) return;
	const FPickableItems* Item = FindItemByID(ItemID);
	if (!Item || !Item->ItemClass) return;
	Items.Remove(Item->ItemClass);
}


const FPickableItems* UInventoryComponent::FindItemByID(int ItemID) const
{
	if (!ItemsDataTable) return nullptr;
	const FName RowName = FName(*FString::FromInt(ItemID));
	const FPickableItems* ItemRow = ItemsDataTable->FindRow<FPickableItems>(RowName, TEXT("Find Next Level Row"));
	if (!ItemRow) return nullptr;
	return ItemRow;
}