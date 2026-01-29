
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "BonfireMenu.generated.h"


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
	UButton* Button_QuickTravelMenu;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_AttributesScreen;
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_AbilitiesScreen;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuitBonfire;

	UFUNCTION()
	void RemoveWidget();

	UPROPERTY()
	UPlayerWidget* PlayerWidgetRef;
};
