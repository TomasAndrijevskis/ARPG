
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseMenu.generated.h"


class UControlSlot;
class UButton;
class UVerticalBox;

UCLASS()
class COURSE_ARPG_API UPauseMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeConstruct() override;

	void RemoveControlsWindow();
	
private:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Resume;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_MainMenu;
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuitGame;
	
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_Controls;
	
	void CreateControlsWindows();

	void CreateControlSlot(UTexture2D* Icon, const FText& Description);
	
	UPROPERTY(EditAnywhere)
	UDataTable* ControlsDataTable;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UControlSlot> ControlSlotWidgetClass;

	UPROPERTY()
	UControlSlot* ControlSlotWidgetRef;
};
