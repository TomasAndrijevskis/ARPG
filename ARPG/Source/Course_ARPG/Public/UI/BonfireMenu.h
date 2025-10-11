
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BonfireMenu.generated.h"

class ABonfire;
class AARPG_PlayerController;
class UTextBlock;
class UButton;

UCLASS()
class COURSE_ARPG_API UBonfireMenu : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

private:
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuickTravelMenu;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_StatsScreen;
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_AbilitiesScreen;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuitBonfire;
	
	UPROPERTY()
	UTextBlock* Text_QuickTravelMenu;

	UPROPERTY()
	UTextBlock* Text_StatsScreen;

	UPROPERTY()
	UTextBlock* Text_AbilitiesScreen;
	
	UPROPERTY()
	UTextBlock* Text_QuitBonfire;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;
};
