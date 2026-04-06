
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

	virtual void NativeConstruct() override;
	
	void SetIcon(UTexture2D* NewIcon);
	
private:

	UPROPERTY(EditDefaultsOnly, meta = (BindWidget))
	UButton* Button_Slot;

	void ApplyButtonStyle(FSlateBrush& BrushStyle, TEnumAsByte<ESlateBrushDrawType::Type> DrawType, const FSlateColor& Color) const;

	void SetButtonStyle();
	
	UPROPERTY(EditDefaultsOnly)
	FVector2D IconSize;

	UPROPERTY()
	UTexture2D* Icon;
};
