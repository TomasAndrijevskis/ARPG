
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/TextBlock.h"
#include "SaveSlotWidget.generated.h"


class UCharacterSelection;
class UMenuButtonBase;

UCLASS()
class COURSE_ARPG_API USaveSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
	UFUNCTION()
	void SetSlotName(const FString& NewSlotName);
	
	UFUNCTION()
	void UpdateSlotText(const FText& NewText);

	FString GetSlotName() const {return SlotName;};

	void OnSlotExists() {bSlotExists = true;}
	
private:
	
	UPROPERTY(meta=(BindWidget))
	UMenuButtonBase* Button_ManageSaveSlot;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* Text_SaveSlotName;
	
	UFUNCTION()
	void OnButtonClicked();

	void SetPlayerControllerProperties();

	void CreateCharacterSelectionWidget();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCharacterSelection> CharacterSelectionWidgetClass;
	
	FString SlotName;
	
	bool bSlotExists = false;
};
