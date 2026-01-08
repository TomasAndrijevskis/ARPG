
#include "UI/PlayerWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/ProgressBar.h"
#include "UI/AbilityFooter.h"
#include "UI/AbilityUpgradeWidget.h"
#include "UI/BonfireMenu.h"
#include "UI/LevelUpNotification.h"
#include "UI/PauseMenu.h"
#include "UI/PlayerDeath.h"
#include "UI/QuickTravelMenu.h"
#include "UI/StatsUpgradeWidget.h"
#include "UI/StatusIconWithAmount.h"
#include "UI/StatusIconWithTimer.h"


void UPlayerWidget::CreateAbilityUpgradeScreen()
{
	if (!AbilityUpgradeWidgetClass) return;
	UAbilityUpgradeWidget* AbilityUpgradeWidget = Cast<UAbilityUpgradeWidget>(CreateWidget(this, AbilityUpgradeWidgetClass));
	if (!AbilityUpgradeWidget) return;
	AbilityUpgradeWidget->AddToViewport(5);
}


void UPlayerWidget::CreateStatsUpgradeScreen()
{
	if (!StatsUpgradeWidgetClass) return;
	UStatsUpgradeWidget* StatsUpgradeWidget = Cast<UStatsUpgradeWidget>(CreateWidget(this, StatsUpgradeWidgetClass));
	if (!StatsUpgradeWidget) return;
	StatsUpgradeWidget->AddToViewport(5);
}


void UPlayerWidget::CreateAbilityFooterPanel(UTexture2D* Image, const FString& ActionKey, UAbilityComponent_Player* AbilityCompRef)
{
	if (!AbilityFooterWidgetClass) return;
	UAbilityFooter* AbilityFooterWidget = Cast<UAbilityFooter>(CreateWidget(this, AbilityFooterWidgetClass));
	AbilityFooterWidget->SetAbility(Image, ActionKey, AbilityCompRef);
	HorizontalBox_AbilitiesFooter->AddChild(AbilityFooterWidget);
}


void UPlayerWidget::ClearAbilityFooterPanel()
{
	HorizontalBox_AbilitiesFooter->ClearChildren();
}


void UPlayerWidget::CreateStatusIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef)
{
	if (!StatusIconWithTimerWidgetClass) return;
	UStatusIconWithTimer* StatusIconWithTimerWidget = Cast<UStatusIconWithTimer>(CreateWidget(this, StatusIconWithTimerWidgetClass));
	StatusIconWithTimerWidget->InitializeWidget(Duration, Image, AbilityCompRef, IconSize);
	HorizontalBox_StatusEffects->AddChild(StatusIconWithTimerWidget);
}


void UPlayerWidget::CreateStatusIconWithAmount(const float Amount, UTexture2D* Image, UStatsComponent* StatsCompRef, const FString& Keyword)
{
	if (!StatusIconWithAmountWidgetClass) return;
	if (ActiveStatusWidget.Contains(Keyword))
	{
		UStatusIconWithAmount** FoundWiget = ActiveStatusWidget.Find(Keyword);
		if (FoundWiget)
		{
			UStatusIconWithAmount* StatusWidget = Cast<UStatusIconWithAmount>(*FoundWiget);
			if (StatusWidget) StatusWidget->SetAmount(Amount);
		}
	}
	else
	{
		UStatusIconWithAmount* StatusIconWithAmountWidget = Cast<UStatusIconWithAmount>(CreateWidget(this, StatusIconWithAmountWidgetClass));
		StatusIconWithAmountWidget->InitializeWidget(Amount, Image, StatsCompRef, Keyword, IconSize);
		ActiveStatusWidget.Add(Keyword, StatusIconWithAmountWidget);
		HorizontalBox_StatusEffects->AddChild(StatusIconWithAmountWidget);
	}
}


void UPlayerWidget::CreateDeathWidget()
{
	if (!PlayerDeathWidgetClass) return;
	UPlayerDeath* PlayerDeath = Cast<UPlayerDeath>(CreateWidget(this, PlayerDeathWidgetClass));
	if (!PlayerDeath) return;
	PlayerDeath->AddToViewport(5);
}


void UPlayerWidget::CreateBonfireMenuWidget()
{
	if (!BonfireMenuWidgetClass) return;
	UBonfireMenu* BonfireMenu = Cast<UBonfireMenu>(CreateWidget(this, BonfireMenuWidgetClass));
	if (!BonfireMenu) return;
	BonfireMenu->Init(this);
	BonfireMenu->AddToViewport(5);
}


void UPlayerWidget::CreateQuickTravelMenuWidget()
{
	if (!QuickTravelMenuWidgetClass) return;
	UQuickTravelMenu* QuickTravelMenuWidget = Cast<UQuickTravelMenu>(CreateWidget(this, QuickTravelMenuWidgetClass));
	QuickTravelMenuWidget -> AddToViewport(5);
	QuickTravelMenuWidget->Button_Exit->OnClicked.AddUniqueDynamic(this, &UPlayerWidget::CreateBonfireMenuWidget);
}


void UPlayerWidget::CreatePauseMenu()
{
	if (!PauseMenuWidgetClass) return;
	UPauseMenu* PauseMenuWidget = Cast<UPauseMenu>(CreateWidget(this, PauseMenuWidgetClass));
	if (!PauseMenuWidget) return;
	PauseMenuWidget->AddToViewport(5);
}


void UPlayerWidget::ShowLevelUpAnimation()
{
	if (!LevelUpNotificationClass) return;
	Cast<ULevelUpNotification>(CreateWidget(this, LevelUpNotificationClass))->AddToViewport(10);
}


void UPlayerWidget::SetHealth(const float NewHealthPercent)
{
	ProgressBar_Health->SetPercent(NewHealthPercent);
}


void UPlayerWidget::SetStamina(const float NewStaminaPercent)
{
	ProgressBar_Stamina->SetPercent(NewStaminaPercent);
}


void UPlayerWidget::SetMana(const float NewManaPercent)
{
	ProgressBar_Mana->SetPercent(NewManaPercent);
}


void UPlayerWidget::SetLevel(const int CurrentLevel)
{
	TextBlock_Level->SetText(FText::AsNumber(CurrentLevel));
}


void UPlayerWidget::SetXP(const float NewXPPercent)
{
	ProgressBar_XP->SetPercent(NewXPPercent);
}