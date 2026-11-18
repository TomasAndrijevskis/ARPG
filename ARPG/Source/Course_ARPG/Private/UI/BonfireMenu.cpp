
#include "UI/BonfireMenu.h"

#include "UI/AdditionalStatsDisplayWidget.h"
#include "UI/HUD_Base.h"
#include "UI/LevelWidget.h"
#include "UI/MainStatsDisplayWidget.h"
#include "UI/Buttons/MenuButtonBase.h"


void UBonfireMenu::NativeConstruct()
{
	Super::NativeConstruct();
	if (const AHUD_Base* HUD = GetHUD())
	{
		Button_QuitBonfire->OnButtonClickedDelegate.AddUniqueDynamic(this, &UBonfireMenu::ReopenBonfireWidget);
		Button_AbilitiesScreen->OnButtonClickedDelegate.AddUniqueDynamic(HUD, &AHUD_Base::ToggleAbilityUpgradeWidget);
		Button_AttributesScreen->OnButtonClickedDelegate.AddUniqueDynamic(HUD, &AHUD_Base::ToggleAttributesUpgradeWidget);
		Button_QuickTravelMenu->OnButtonClickedDelegate.AddUniqueDynamic(HUD, &AHUD_Base::ToggleQuickTravelWidget);
	}
}


void UBonfireMenu::ReopenBonfireWidget()
{
	if (AHUD_Base* HUD = GetHUD()) HUD->ToggleBonfireWidget();
}


void UBonfireMenu::HandleVisibilityChanged(ESlateVisibility Vis)
{
	Super::HandleVisibilityChanged(Vis);
	if (Vis == ESlateVisibility::Visible)
	{
		WBP_LevelWidget->UpdateText();
		WBP_StatsWidget->UpdateText();
		WBP_AdditionalStatsDisplayWidget->UpdateText();
	}
}