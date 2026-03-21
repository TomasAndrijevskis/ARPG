
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuButtonBase.generated.h"


class UTextBlock;
class UButton;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonClicked);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonHovered);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonUnhovered);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnButtonPressed);
UCLASS()
class COURSE_ARPG_API UMenuButtonBase : public UUserWidget
{
	GENERATED_BODY()

public:
	
	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;
	
	void ChangeText(const FString& NewText);

	void ChangeText(const FText& NewText);
	
	UPROPERTY(EditAnywhere)
	FText ButtonText;

	FOnButtonClicked OnButtonClickedDelegate;

	FOnButtonHovered OnButtonHoveredDelegate;

	FOnButtonPressed OnButtonPressedDelegate;

	FOnButtonUnhovered OnButtonUnhoveredDelegate;
	
private:
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextBlock;

	UPROPERTY(meta = (BindWidget))
	UButton* Button;
	
	void SetText();

	UFUNCTION()
	void HandleButtonClick();

	UFUNCTION()
	void HandleButtonHover();

	UFUNCTION()
	void HandleButtonUnhover();

	UFUNCTION()
	void HandleButtonPress();
};
