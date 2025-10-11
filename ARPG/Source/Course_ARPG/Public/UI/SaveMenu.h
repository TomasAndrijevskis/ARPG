
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/VerticalBox.h"
#include "SaveMenu.generated.h"


class UButton;
class USaveSlotWidget;
class UARPG_GameInstance;

UCLASS()
class COURSE_ARPG_API USaveMenu : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;

private:

	void CreateSlots(const TSubclassOf<USaveSlotWidget>& WidgetClass);

	void SetPlayerControllerProperties();

	UFUNCTION()
	void BackToMainMenu();
	
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_SaveSlots;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_ExitToMainMenu;

	UPROPERTY()
	APlayerController* PlayerController;

	UPROPERTY()
	UARPG_GameInstance* GameInstance;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USaveSlotWidget> SaveSlotWidgetClass;
	
	TArray<FString> SlotNames;
};
