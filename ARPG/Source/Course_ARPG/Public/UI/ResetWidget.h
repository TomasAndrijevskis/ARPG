
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "ResetWidget.generated.h"


class UConfirmationWindow;
class UMenuButtonBase;

UENUM(BlueprintType)
enum class EResetType : uint8
{
	ResetAttributes,
	ResetAbilities,
};

DECLARE_MULTICAST_DELEGATE(FOnResetWidgetClosedSignature);
UCLASS()
class COURSE_ARPG_API UResetWidget : public UUserWidget_Base
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
	
	void CreateConfirmationWindow();

	void OnConfirmed();

	UFUNCTION()
	void OnResetAbilitiesClicked();

	UFUNCTION()
	void OnResetAttributesClicked();

	void HandleResetAbilities();

	void HandleResetAttributes();

	UFUNCTION()
	void RemoveWidget();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UConfirmationWindow> ConfirmationWindowClass;

	EResetType CurrentChoice;
};
