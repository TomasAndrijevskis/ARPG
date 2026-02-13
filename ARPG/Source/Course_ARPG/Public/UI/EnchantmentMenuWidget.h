
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "EnchantmentMenuWidget.generated.h"

class UEnchantmentButton;
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
	
	UEnchantmentButton* CreateButton(UTexture2D* Image, EEffects Effect);
	
	UFUNCTION()
	void RemoveWidget();
	
	void SetButtonAlignment(UEnchantmentButton* Button);
	
	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UUserWidget> EnchantmentButtonClass;
};