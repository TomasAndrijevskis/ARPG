
#include "UI/PlayerWidget.h"
#include "Components/BackgroundBlur.h"
#include "Components/Border.h"
#include "UI/AbilityFooter.h"
#include "UI/StatsScreenWidget.h"
#include "UI/AbilityUpgradeScreen.h"
#include "UI/BonfireMenu.h"
#include "UI/EScreens.h"
#include "UI/InfoFooter.h"
#include "UI/InfoHeader.h"
#include "UI/LevelUpNotification.h"
#include "UI/PauseMenu.h"
#include "UI/PlayerDeath.h"
#include "UI/QuickTravelMenu.h"
#include "UI/StatusIconWithAmount.h"
#include "UI/StatusIconWithTimer.h"


void UPlayerWidget::CreateStatsScreen(const EStats& Stat)
{
	if (!StatsWidgetClass) return;
	StatsScreenRef = Cast<UStatsScreenWidget>(CreateWidget(this, StatsWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(StatsScreenRef);
	StatsScreenRef->SetStatsVariables(Stat);
	BackgroundBlur_Blur->SetBlurStrength(10);
	HandleUpgradeInfoBorder(ESlateVisibility::Visible);
}


void UPlayerWidget::RemoveStatsScreen()
{
	if (StatsScreenRef)
	{
		StatsScreenRef->RemoveFromParent();
		StatsScreenRef = nullptr; 
	}
	VerticalBox_UpgradeInfo->ClearChildren();
	CreateBonfireMenuWidget();
	BackgroundBlur_Blur->SetBlurStrength(0);
	HandleUpgradeInfoBorder(ESlateVisibility::Hidden);
}


void UPlayerWidget::CreateAbilityUpgradeScreen(UAbilityComponent_Player* AbilityCompRef)
{
	if (!AbilityUpgradeScreenWidgetClass) return;
	AbilityUpgradeScreenWidgetRef = Cast<UAbilityUpgradeScreen>(CreateWidget(this, AbilityUpgradeScreenWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(AbilityUpgradeScreenWidgetRef);
	AbilityUpgradeScreenWidgetRef->InitializeAbility(AbilityCompRef);
	BackgroundBlur_Blur->SetBlurStrength(10);
	HandleUpgradeInfoBorder(ESlateVisibility::Visible);
}


void UPlayerWidget::RemoveAbilityUpgradeScreen()
{
	if (AbilityUpgradeScreenWidgetRef)
	{
		AbilityUpgradeScreenWidgetRef->RemoveAbilityDescriptionWidget();
		AbilityUpgradeScreenWidgetRef->RemoveUpgradeDescriptionWidget();
		AbilityUpgradeScreenWidgetRef->RemoveFromParent();
		AbilityUpgradeScreenWidgetRef = nullptr;
	}
	VerticalBox_UpgradeInfo->ClearChildren();
	CreateBonfireMenuWidget();
	BackgroundBlur_Blur->SetBlurStrength(0);
	HandleUpgradeInfoBorder(ESlateVisibility::Hidden);
}


void UPlayerWidget::CreateAbilityFooter(UTexture2D* Image, const FString& ActionKey, UAbilityComponent_Player* AbilityCompRef)
{
	if (!AbilityFooterWidgetClass) return;
	AbilityFooterWidgetRef = Cast<UAbilityFooter>(CreateWidget(this, AbilityFooterWidgetClass));
	AbilityFooterWidgetRef->SetAbility(Image, ActionKey, AbilityCompRef);
	HorizontalBox_AbilitiesFooter->AddChild(AbilityFooterWidgetRef);
}


void UPlayerWidget::RemoveAbilityFooter()
{
	if (AbilityFooterWidgetRef)
	{
		AbilityFooterWidgetRef->RemoveFromParent();
		AbilityFooterWidgetRef = nullptr;
	}
	HorizontalBox_AbilitiesFooter->ClearChildren();
}


void UPlayerWidget::CreateUpgradeInfoHeader(const int Value)
{
	if (!InfoHeaderWidgetClass) return;
	InfoHeaderWidgetRef = Cast<UInfoHeader>(CreateWidget(this, InfoHeaderWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(InfoHeaderWidgetRef);
	InfoHeaderWidgetRef->InitializeInfoHeader(Value);
}


void UPlayerWidget::CreateUpgradeInfoFooter(const EScreens& ScreenType)
{
	if (!InfoFooterWidgetClass) return;
	InfoFooterWidgetRef = Cast<UInfoFooter>(CreateWidget(this, InfoFooterWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(InfoFooterWidgetRef);
	InfoFooterWidgetRef->InitializeFooter(ScreenType);
}


void UPlayerWidget::CreateStatusIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef)
{
	if (!StatusIconWithTimerWidgetClass) return;
	StatusIconWithTimerWidgetRef = Cast<UStatusIconWithTimer>(CreateWidget(this, StatusIconWithTimerWidgetClass));
	StatusIconWithTimerWidgetRef->InitializeWidget(Duration, Image, AbilityCompRef, IconSize);
	HorizontalBox_StatusEffects->AddChild(StatusIconWithTimerWidgetRef);
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
		StatusIconWithAmountWidgetRef = Cast<UStatusIconWithAmount>(CreateWidget(this, StatusIconWithAmountWidgetClass));
		StatusIconWithAmountWidgetRef->InitializeWidget(Amount, Image, StatsCompRef, Keyword, IconSize);
		ActiveStatusWidget.Add(Keyword, StatusIconWithAmountWidgetRef);
		HorizontalBox_StatusEffects->AddChild(StatusIconWithAmountWidgetRef);
	}
}


void UPlayerWidget::CreateDeathWidget()
{
	if (!PlayerDeathWidgetClass) return;
	PlayerDeathWidgetRef = Cast<UPlayerDeath>(CreateWidget(this, PlayerDeathWidgetClass));
	PlayerDeathWidgetRef->AddToViewport(5);
}



void UPlayerWidget::CreateBonfireMenuWidget()
{
	if (!BonfireMenuWidgetClass) return;
	BonfireMenuWidgetRef = Cast<UBonfireMenu>(CreateWidget(this, BonfireMenuWidgetClass));
	BonfireMenuWidgetRef->AddToViewport(5);
}


void UPlayerWidget::RemoveBonfireMenuWidget()
{
	if (BonfireMenuWidgetRef)
	{
		BonfireMenuWidgetRef->RemoveFromParent();
		BonfireMenuWidgetRef = nullptr;
	}
}


void UPlayerWidget::CreateQuickTravelMenuWidget(const TMap<FString, FBonfireData>& UnlockedBonfires, const FString& CurrentBonfireName)
{
	if (!QuickTravelMenuWidgetClass) return;
	QuickTravelMenuWidgetRef = Cast<UQuickTravelMenu>(CreateWidget(this, QuickTravelMenuWidgetClass));
	QuickTravelMenuWidgetRef -> SetBonfires(UnlockedBonfires, CurrentBonfireName);
	QuickTravelMenuWidgetRef -> AddToViewport(5);
	BackgroundBlur_Blur->SetBlurStrength(10);
}


void UPlayerWidget::RemoveQuickTravelMenuWidget()
{
	if (QuickTravelMenuWidgetRef)
	{
		QuickTravelMenuWidgetRef->RemoveFromParent();
		QuickTravelMenuWidgetRef = nullptr;
		BackgroundBlur_Blur->SetBlurStrength(0);
	}
}


void UPlayerWidget::CreatePauseMenu()
{
	if (!PauseMenuWidgetClass) return;
	PauseMenuWidgetRef = Cast<UPauseMenu>(CreateWidget(this, PauseMenuWidgetClass));
	PauseMenuWidgetRef->AddToViewport(5);
}


void UPlayerWidget::RemovePauseMenu()
{
	if (PauseMenuWidgetRef)
	{
		PauseMenuWidgetRef->RemoveControlsWindow();
		PauseMenuWidgetRef->RemoveFromParent();
		PauseMenuWidgetRef = nullptr;
	}
}


void UPlayerWidget::HandleUpgradeInfoBorder(const ESlateVisibility InVisibility)
{
	Border_UpgradeInfo->SetVisibility(InVisibility);
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


