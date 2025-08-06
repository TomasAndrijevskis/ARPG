
#include "UI/PlayerWidget.h"
#include "UI/AbilityFooter.h"
#include "UI/StatsScreenWidget.h"
#include "UI/AbilityUpgradeScreen.h"
#include "UI/BonfireInteractionAnim.h"
#include "UI/BonfireMenu.h"
#include "UI/EScreens.h"
#include "UI/InfoFooter.h"
#include "UI/InfoHeader.h"
#include "UI/PlayerDeath.h"
#include "UI/QuickTravelMenu.h"
#include "UI/StatusIconWithAmount.h"
#include "UI/StatusIconWithTimer.h"


void UPlayerWidget::CreateStatsScreen(EStats Stat)
{
	if (!StatsWidgetClass)
	{
		return;
	}
	StatsScreenRef = Cast<UStatsScreenWidget>(CreateWidget(this, StatsWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(StatsScreenRef);
	StatsScreenRef->SetStatsVariables(Stat);
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
}


void UPlayerWidget::CreateAbilityUpgradeScreen(UAbilityComponent_Base* AbilityCompRef)
{
	if (!AbilityUpgradeScreenWidgetClass)
	{
		return;
	}
	AbilityUpgradeScreenWidgetRef = Cast<UAbilityUpgradeScreen>(CreateWidget(this, AbilityUpgradeScreenWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(AbilityUpgradeScreenWidgetRef);
	AbilityUpgradeScreenWidgetRef->InitializeAbility(AbilityCompRef);
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
}


void UPlayerWidget::CreateAbilityFooter(UTexture2D* Image, FString ActionKey, UAbilityComponent_Base* AbilityCompRef)
{
	if (!AbilityFooterWidgetClass)
	{
		return;
	}
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


void UPlayerWidget::CreateUpgradeInfoHeader(int Value)
{
	if (!InfoHeaderWidgetClass)
	{
		return;
	}
	InfoHeaderWidgetRef = Cast<UInfoHeader>(CreateWidget(this, InfoHeaderWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(InfoHeaderWidgetRef);
	InfoHeaderWidgetRef->InitializeInfoHeader(Value);
}


void UPlayerWidget::CreateUpgradeInfoFooter(EScreens ScreenType)
{
	if (!InfoFooterWidgetClass)
	{
		return;
	}
	InfoFooterWidgetRef = Cast<UInfoFooter>(CreateWidget(this, InfoFooterWidgetClass));
	VerticalBox_UpgradeInfo->AddChild(InfoFooterWidgetRef);
	InfoFooterWidgetRef->InitializeFooter(ScreenType);
}


void UPlayerWidget::CreateStatusIconWithTimer(float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef)
{
	if (!StatusIconWithTimerWidgetClass)
	{
		return;
	}
	StatusIconWithTimerWidgetRef = Cast<UStatusIconWithTimer>(CreateWidget(this, StatusIconWithTimerWidgetClass));
	StatusIconWithTimerWidgetRef->InitializeWidget(Duration, Image, AbilityCompRef);
	HorizontalBox_StatusEffects->AddChild(StatusIconWithTimerWidgetRef);
}


void UPlayerWidget::CreateStatusIconWithAmount(float Amount, UTexture2D* Image,UStatsComponent* StatsCompRef, FString Keyword)
{
	if (!StatusIconWithAmountWidgetClass)
	{
		return;
	}
	if (ActiveStatusWidget.Contains(Keyword))
	{
		UStatusIconWithAmount** FoundWiget = ActiveStatusWidget.Find(Keyword);
		if (FoundWiget)
		{
			UStatusIconWithAmount* StatusWidget = Cast<UStatusIconWithAmount>(*FoundWiget);
			if (StatusWidget)
			{
				StatusWidget->SetAmount(Amount);
			}
		}
	}
	else
	{
		StatusIconWithAmountWidgetRef = Cast<UStatusIconWithAmount>(CreateWidget(this, StatusIconWithAmountWidgetClass));
		StatusIconWithAmountWidgetRef->InitializeWidget(Amount, Image, StatsCompRef, Keyword);
		ActiveStatusWidget.Add(Keyword, StatusIconWithAmountWidgetRef);
		HorizontalBox_StatusEffects->AddChild(StatusIconWithAmountWidgetRef);
	}
}


void UPlayerWidget::CreateDeathWidget()
{
	if (!PlayerDeathWidgetClass)
	{
		return;
	}

	PlayerDeathWidgetRef = Cast<UPlayerDeath>(CreateWidget(this, PlayerDeathWidgetClass));
	PlayerDeathWidgetRef->AddToViewport(5);
}



void UPlayerWidget::CreateBonfireMenuWidget()
{
	if (BonfireMenuWidgetClass)
	{
		BonfireMenuWidgetRef = Cast<UBonfireMenu>(CreateWidget(this, BonfireMenuWidgetClass));
		BonfireMenuWidgetRef->AddToViewport(5);
	}
}


void UPlayerWidget::RemoveBonfireMenuWidget()
{
	if (BonfireMenuWidgetRef)
	{
		BonfireMenuWidgetRef->RemoveFromParent();
		BonfireMenuWidgetRef = nullptr;
	}
}


void UPlayerWidget::CreateQuickTravelMenuWidget(TMap<FString, FVector> UnlockedBonfires, FString CurrentBonfireName)
{
	if (QuickTravelMenuWidgetClass)
	{
		QuickTravelMenuWidgetRef = Cast<UQuickTravelMenu>(CreateWidget(this, QuickTravelMenuWidgetClass));
		QuickTravelMenuWidgetRef -> SetBonfires(UnlockedBonfires, CurrentBonfireName);
		QuickTravelMenuWidgetRef -> AddToViewport(5);
	}
}


void UPlayerWidget::RemoveQuickTravelMenuWidget()
{
	if (QuickTravelMenuWidgetRef)
	{
		QuickTravelMenuWidgetRef->RemoveFromParent();
		QuickTravelMenuWidgetRef = nullptr;
	}
}



void UPlayerWidget::SetHealth(float NewHealthPercent)
{
	ProgressBar_Health->SetPercent(NewHealthPercent);
}


void UPlayerWidget::SetStamina(float NewStaminaPercent)
{
	ProgressBar_Stamina->SetPercent(NewStaminaPercent);
}


void UPlayerWidget::SetMana(float NewManaPercent)
{
	ProgressBar_Mana->SetPercent(NewManaPercent);
}


void UPlayerWidget::SetLevel(int CurrentLevel)
{
	TextBlock_Level->SetText(FText::AsNumber(CurrentLevel));
}


void UPlayerWidget::SetXP(float NewXPPercent)
{
	ProgressBar_XP->SetPercent(NewXPPercent);
}


