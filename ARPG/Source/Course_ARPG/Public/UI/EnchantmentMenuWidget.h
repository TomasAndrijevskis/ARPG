
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "EnchantmentMenuWidget.generated.h"

class UConfirmationWindow;
class UEnchantmentButton;
class UHorizontalBox;
class UMenuButtonBase;

UCLASS()
class COURSE_ARPG_API UEnchantmentMenuWidget : public UUserWidget_Base
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;
	
private:

	UPROPERTY(meta=(BindWidget))
	UHorizontalBox* HorizontalBox_Elements;

	UPROPERTY(meta=(BindWidget))
	UMenuButtonBase* Button_Close;

	UPROPERTY(meta=(BindWidget))
	UMenuButtonBase* Button_RemoveEnchantment;
	
	void CreateButtons();
	
	UEnchantmentButton* CreateButton(UTexture2D* Image, EEffects Effect);
	
	UFUNCTION()
	void RemoveWidget();
	
	void SetButtonAlignment(UEnchantmentButton* Button);

	UFUNCTION()
	void RemoveEnchantment();

	UFUNCTION()
	void CreateConfirmationWindow();
	
	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UEnchantmentButton> EnchantmentButtonClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UConfirmationWindow> ConfirmationWindowWidgetClass;
};