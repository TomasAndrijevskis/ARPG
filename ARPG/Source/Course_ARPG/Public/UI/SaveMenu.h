
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/VerticalBox.h"
#include "SaveMenu.generated.h"


class UMenuButtonBase;
class USaveSlotWidget;
class UARPG_GameInstance;

UCLASS()
class COURSE_ARPG_API USaveMenu : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_SaveSlots;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_ExitToMainMenu;
	
	void CreateSlots();

	void SetPlayerControllerProperties();

	UFUNCTION()
	void BackToMainMenu();

	UPROPERTY(EditAnywhere)
	TSubclassOf<USaveSlotWidget> SaveSlotWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	TArray<FString> SlotNames;
};
