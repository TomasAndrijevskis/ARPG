
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "EnchantmentMenuWidget.generated.h"

class UHorizontalBox;
class UButton;

UCLASS()
class COURSE_ARPG_API UEnchantmentMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;
	
private:

	UPROPERTY(meta=(BindWidget))
	UHorizontalBox* HorizontalBox_Elements;

	UPROPERTY(meta=(BindWidget))
	UButton* Button_Close;
	
	void CreateButtons();

	void ApplyImageStyle(UTexture2D* Image, FSlateBrush& BrushStyle, TEnumAsByte<ESlateBrushDrawType::Type> DrawType);
	
	UButton* CreateButton(UTexture2D* Image);

	UFUNCTION()
	void RemoveWidget();
	
	void SetButtonAlignment(UButton* Button);
	
	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;

	UPROPERTY(EditDefaultsOnly)
	FVector2D ImageSize;
};