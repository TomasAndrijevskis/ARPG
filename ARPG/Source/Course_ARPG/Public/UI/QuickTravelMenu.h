
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "QuickTravelMenu.generated.h"


class UVerticalBox;
class UQuickTravelButton;
class AMainCharacter_Base;
class UMenuButtonBase;

UCLASS()
class COURSE_ARPG_API UQuickTravelMenu : public UUserWidget_Base
{
	GENERATED_BODY()

public:
	
	virtual void NativeConstruct() override;

protected:

	virtual void HandleVisibilityChanged(ESlateVisibility Vis) override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VB_QuickTravelContainer;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_Close;
	
	void CreateButtons();

	void BindButton();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelButton> QuickTravelButtonClass;
};
