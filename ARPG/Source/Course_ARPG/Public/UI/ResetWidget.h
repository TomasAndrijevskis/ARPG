
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ResetWidget.generated.h"


class UConfirmationWindow;
class UMenuButtonBase;

UENUM(BlueprintType)
enum EResetType
{
	ResetAttributes,
	ResetAbilities,
};

DECLARE_MULTICAST_DELEGATE(FOnResetWidgetClosedSignature);
UCLASS()
class COURSE_ARPG_API UResetWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	FOnResetWidgetClosedSignature OnResetWidgetClosedDelegate;
	
private:

	UPROPERTY(meta=(BindWidget))
	UMenuButtonBase* Button_ResetAbilities;

	UPROPERTY(meta=(BindWidget))
	UMenuButtonBase* Button_ResetAttributes;

	UPROPERTY(meta=(BindWidget))
	UMenuButtonBase* Button_Close;

	UFUNCTION()
	void RemoveWidget();
	
	void CreateConfirmationWindow();

	void OnConfirmed();

	UFUNCTION()
	void OnResetAbilitiesClicked();

	UFUNCTION()
	void OnResetAttributesClicked();

	void HandleResetAbilities();

	void HandleResetAttributes();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UConfirmationWindow> ConfirmationWindowClass;

	EResetType CurrentChoice;
};
