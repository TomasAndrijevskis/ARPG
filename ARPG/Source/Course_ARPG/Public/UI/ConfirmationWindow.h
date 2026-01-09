
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ConfirmationWindow.generated.h"


class UButton;

DECLARE_MULTICAST_DELEGATE(FOnConfirmedSignture);
DECLARE_MULTICAST_DELEGATE(FOnCanceledSignture);
UCLASS()
class COURSE_ARPG_API UConfirmationWindow : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;
	
	FOnConfirmedSignture OnConfirmedDelegate;

	FOnCanceledSignture OnCanceledDelegate;
	
private:

	UPROPERTY(meta=(BindWidget))
	UButton* Button_Confirm;

	UPROPERTY(meta=(BindWidget))
	UButton* Button_Cancel;

	UFUNCTION()
	void OnConfirmed();

	UFUNCTION()
	void OnCanceled();
	
	void RemoveWidget();
};
