
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/ItemsData.h"
#include "InventoryWidget.generated.h"


class APickableItem_Base;
class UWrapBox;
class UInventorySlot;
class UHorizontalBox;

UCLASS()
class COURSE_ARPG_API UInventoryWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
	void SetSlotsAmount(int Amount);

	void SetItems(const TArray<FItemsData>& AvailableItems);
	
private:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventorySlot> InventorySlotClass;

	UPROPERTY(meta=(BindWidget))
	UWrapBox* WrapBox_Inventory;

	void HandleSlotsCreation();
	
	UInventorySlot* CreateInventorySlot(UTexture2D* Icon);
	
	void CreateEmptySlots();

	void CreateTakenSlot(UTexture2D* Icon);
	
	UPROPERTY()
	TArray<FItemsData> Items;
	
	int SlotsAmount;
};