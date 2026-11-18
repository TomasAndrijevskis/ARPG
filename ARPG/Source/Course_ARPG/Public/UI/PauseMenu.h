
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "PauseMenu.generated.h"


class UControlSlot;
class UVerticalBox;
class UMenuButtonBase;

UCLASS()
class COURSE_ARPG_API UPauseMenu : public UUserWidget_Base
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_Resume;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_MainMenu;
	
	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_QuitGame;
	
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_Controls;
	
	void CreateControlsWindows();

	void CreateControlSlot(UTexture2D* Icon, const FText& Description);

	void BindButtons();
	
	UPROPERTY(EditDefaultsOnly)
	UDataTable* ControlsDataTable;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UControlSlot> ControlSlotWidgetClass;
};
