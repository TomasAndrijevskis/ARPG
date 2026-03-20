
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "BonfireMenu.generated.h"


class UMenuButtonBase;
class UPlayerWidget;
class ABonfire;
class AARPG_PlayerController;

UCLASS()
class COURSE_ARPG_API UBonfireMenu : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	void Init(UPlayerWidget* PlayerWidget);
	
private:

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_QuickTravelMenu;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_AttributesScreen;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_AbilitiesScreen;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_QuitBonfire;
	
	UFUNCTION()
	void RemoveWidget();

	UFUNCTION()
	void RequestToRemoveWidget();
	
	UPROPERTY()
	UPlayerWidget* PlayerWidgetRef;
};
