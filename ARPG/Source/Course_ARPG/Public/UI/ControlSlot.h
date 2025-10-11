
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ControlSlot.generated.h"


class UImage;
class UTextBlock;
class UHorizontalBox;

UCLASS()
class COURSE_ARPG_API UControlSlot : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void InitializeControlSlot(UTexture2D* NewIcon, const FText& NewDescription);
	
private:
	
	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_Slot;

	UPROPERTY(meta = (BindWidget))
	UImage* Image_Icon;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextBlock_Description;
};
