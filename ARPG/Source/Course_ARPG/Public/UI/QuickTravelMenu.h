
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuickTravelMenu.generated.h"


class UVerticalBox;
class UQuickTravelButton;
class AMainCharacter_Base;
class UMenuButtonBase;

UCLASS()
class COURSE_ARPG_API UQuickTravelMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	
	virtual void NativeConstruct() override;
private:

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VB_QuickTravelContainer;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_Close;
	
	void CreateTravelMenu();

	UFUNCTION()
	void RemoveWidget();

	void BindButton();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelButton> QuickTravelButtonClass;
};
