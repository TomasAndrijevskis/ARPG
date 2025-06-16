
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SaveSlotWidget.generated.h"

UCLASS()
class COURSE_ARPG_API USaveSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	void SetSlotName(FString NewSlotName);
	
	FString GetSlotName();
	
	FString SlotName;
	
};
