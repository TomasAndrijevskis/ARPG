
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/EEffects.h"
#include "EnchantmentButton.generated.h"


class UConfirmationWindow;
class UButton;

DECLARE_MULTICAST_DELEGATE(FOnEnchantmentConfirmed);
UCLASS()
class COURSE_ARPG_API UEnchantmentButton : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
	void SetImage(UTexture2D* Image);

	void SetEffect(EEffects NewEffect) {Effect = NewEffect;}

	FOnEnchantmentConfirmed OnEnchantmentConfirmedDelegate;
	
private:
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_Element;

	void ApplyImageStyle(UTexture2D* Image, FSlateBrush& BrushStyle, TEnumAsByte<ESlateBrushDrawType::Type> DrawType);

	UFUNCTION()
	void CreateConfirmationWindow();

	UFUNCTION()
	void OnEnchantmentConfirmed();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UConfirmationWindow> ConfirmationWindowWidgetClass;
	
	UPROPERTY(EditDefaultsOnly)
	FVector2D ImageSize;

	EEffects Effect;
};
