
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/ItemsData.h"
#include "InventoryWidget.generated.h"


class UGridPanel;
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
	UGridPanel* GridPanel_Inventory;
	
	void HandleSlotsCreation();
	
	UInventorySlot* CreateInventorySlot(UTexture2D* Icon);

	void CreateSlot(UTexture2D* Icon);
	
	UPROPERTY()
	TArray<FItemsData> Items;

	UPROPERTY(EditDefaultsOnly)
	int ColumnAmount = 5;
	
	int SlotsAmount;

	int Size = 0;

	int CurrentRow = 0;

	int CurrentColumn = 0;
};