
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/VerticalBox.h"
#include "SaveMenu.generated.h"


class USaveSlotWidget;
class UARPG_GameInstance;

UCLASS()
class COURSE_ARPG_API USaveMenu : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;

private:

	void CreateSlots(TSubclassOf<USaveSlotWidget> WidgetClass);

	void SetPlayerControllerProperties();
	
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_SaveSlots;
	
	APlayerController* PlayerController;

	UARPG_GameInstance* GameInstance;

	TArray<FString> SlotNames;

	UPROPERTY(EditAnywhere)
	TSubclassOf<USaveSlotWidget> SaveSlotWidgetClass;
};
