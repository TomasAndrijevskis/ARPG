
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventoryWidget.generated.h"


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
	
private:

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UInventorySlot> InventorySlotClass;

	UPROPERTY(meta=(BindWidget))
	UWrapBox* WrapBox_Inventory;
	
	UInventorySlot* CreateInventorySlot();
	
	void CreateSlots();
	
	int SlotsAmount;
};