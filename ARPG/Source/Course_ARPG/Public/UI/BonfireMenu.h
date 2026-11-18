
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "BonfireMenu.generated.h"


class UAdditionalStatsDisplayWidget;
class UMainStatsDisplayWidget;
class ULevelWidget;
class AHUD_Base;
class UMenuButtonBase;
class UPlayerWidget;
class ABonfire;
class AARPG_PlayerController;

UCLASS()
class COURSE_ARPG_API UBonfireMenu : public UUserWidget_Base
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_QuickTravelMenu;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_AttributesScreen;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_AbilitiesScreen;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_QuitBonfire;

	UPROPERTY(meta = (BindWidget))
	ULevelWidget* WBP_LevelWidget;

	UPROPERTY(meta = (BindWidget))
	UMainStatsDisplayWidget* WBP_StatsWidget;

	UPROPERTY(meta = (BindWidget))
	UAdditionalStatsDisplayWidget* WBP_AdditionalStatsDisplayWidget;
	
	UFUNCTION()
	void ReopenBonfireWidget();

	virtual void HandleVisibilityChanged(ESlateVisibility Vis) override;
};
