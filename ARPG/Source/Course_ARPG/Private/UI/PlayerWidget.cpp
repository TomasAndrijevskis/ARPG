
#include "UI/PlayerWidget.h"
#include "UI/AbilityFooter.h"
#include "UI/StatsScreenWidget.h"
#include "UI/AbilityUpgradeScreen.h"
#include "UI/InfoHeader.h"
#include "UI/StatusIconWithAmount.h"
#include "UI/StatusIconWithTimer.h"


void UPlayerWidget::CreateStatsScreen(EStats Stat)
{
	if (!StatsWidget)
	{
		return;
	}
	StatsScreenRef = Cast<UStatsScreenWidget>(CreateWidget(this, StatsWidget));

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
}


void UPlayerWidget::CreateAbilityUpgradeScreen(UAbilityComponent_Base* AbilityCompRef)
{
	if (!AbilityUpgradeScreenWidget)
	{
		return;
	}
	AbilityUpgradeScreenWidgetRef = Cast<UAbilityUpgradeScreen>(CreateWidget(this, AbilityUpgradeScreenWidget));

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
}


void UPlayerWidget::CreateAbilityFooter(UTexture2D* Image, FString ActionKey, UAbilityComponent_Base* AbilityCompRef)
{
	if (!AbilityFooterWidget)
	{
		return;
	}
	AbilityFooterWidgetRef = Cast<UAbilityFooter>(CreateWidget(this, AbilityFooterWidget));
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
	if (!InfoHeaderWidget)
	{
		return;
	}
	InfoHeaderWidgetRef = Cast<UInfoHeader>(CreateWidget(this, InfoHeaderWidget));
	VerticalBox_UpgradeInfo->AddChild(InfoHeaderWidgetRef);
	InfoHeaderWidgetRef->InitializeInfoHeader(Value);
		
}


void UPlayerWidget::CreateStatusIconWithTimer(float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef)
{
	if (!StatusIconWithTimerWidget)
	{
		return;
	}
	StatusIconWithTimerWidgetRef = Cast<UStatusIconWithTimer>(CreateWidget(this, StatusIconWithTimerWidget));
	StatusIconWithTimerWidgetRef->InitializeWidget(Duration, Image, AbilityCompRef);
	HorizontalBox_StatusEffects->AddChild(StatusIconWithTimerWidgetRef);
}


void UPlayerWidget::CreateStatusIconWithAmount(float Amount, UTexture2D* Image,UStatsComponent* StatsCompRef, FString Keyword)
{
	if (!StatusIconWithAmountWidget)
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
		StatusIconWithAmountWidgetRef = Cast<UStatusIconWithAmount>(CreateWidget(this, StatusIconWithAmountWidget));
		StatusIconWithAmountWidgetRef->InitializeWidget(Amount, Image, StatsCompRef, Keyword);
		ActiveStatusWidget.Add(Keyword, StatusIconWithAmountWidgetRef);
		HorizontalBox_StatusEffects->AddChild(StatusIconWithAmountWidgetRef);
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


void UPlayerWidget::SetXP(float CurrentXP)
{
	TextBlock_XP->SetText(FText::AsNumber(CurrentXP));
}


