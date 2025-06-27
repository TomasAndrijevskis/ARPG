
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
	
	UFUNCTION(BlueprintCallable)
	void SetSlotName(FString NewSlotName);
	
	UFUNCTION(BlueprintCallable)
	void SetSlotStatus(FText NewText);

	FString GetSlotName();

	void SetMapName(FName NewMapName);
	
private:

	UFUNCTION()
	void OnButtonClicked();
	
	UPROPERTY(meta=(BindWidget))
	UButton* Button_MangageSaveSlot;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* Text_SaveSlotName;

	UPROPERTY(meta=(BindWidget))
	UTextBlock* Text_SaveSlotStatus;
	
	FString SlotName;

	APlayerController* PlayerController;

	FName MapName;
};
