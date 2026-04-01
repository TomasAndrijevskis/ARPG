
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InventorySlot.generated.h"

class UButton;

UCLASS()
class COURSE_ARPG_API UInventorySlot : public UUserWidget
{
	GENERATED_BODY()

public:


private:

	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	UButton* Button_Slot;
};
