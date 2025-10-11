
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "SaveSlotWidget.generated.h"

UCLASS()
class COURSE_ARPG_API USaveSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
	UFUNCTION()
	void SetSlotName(const FString& NewSlotName);
	
	UFUNCTION()
	void SetSlotStatus(const FText& NewText);

	FString GetSlotName() const;

	void SetMapName(const FName& NewMapName);
	
private:
	
	UPROPERTY(meta=(BindWidget))
	UButton* Button_ManageSaveSlot;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* Text_SaveSlotName;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* Text_SaveSlotStatus;
	
	UFUNCTION()
	void OnButtonClicked();

	UPROPERTY()
	APlayerController* PlayerController;
	
	FString SlotName;

	FName MapName;
};
