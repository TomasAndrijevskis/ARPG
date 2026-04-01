
#include "Components/InventoryComponent.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "UI/InventoryWidget.h"


void UInventoryComponent::CreateInventory()
{
	AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!InventoryWidgetClass || !PC || InventoryWidgetRef) return;
	InventoryWidgetRef = Cast<UInventoryWidget>(CreateWidget(PC, InventoryWidgetClass));
	if (!InventoryWidgetRef) return;
	InventoryWidgetRef->SetSlotsAmount(SlotsAmount);
	InventoryWidgetRef->AddToViewport(5);
}


void UInventoryComponent::RemoveInventory()
{
	if (!InventoryWidgetRef) return;
	InventoryWidgetRef->RemoveFromParent();
	InventoryWidgetRef = nullptr;
}