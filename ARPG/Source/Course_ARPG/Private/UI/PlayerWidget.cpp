
#include "UI/PlayerWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/ProgressBar.h"
#include "UI/AbilityFooter.h"
#include "UI/LevelUpNotification.h"
#include "UI/AbilityIconWithAmount.h"
#include "UI/AbilityIconWithTimer.h"
#include "UI/StatusEffectIcon.h"


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


void UPlayerWidget::CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef)
{
	if (!StatusEffectIconWidgetClass) return;
	UStatusEffectIcon* StatusEffectIconRef = Cast<UStatusEffectIcon>(CreateWidget(this, StatusEffectIconWidgetClass));
	if (!StatusEffectIconRef) return;
	StatusEffectIconRef->InitializeWidget(Icon, IconSize, StatusEffectsCompRef);
	HorizontalBox_StatusEffects->AddChild(StatusEffectIconRef);
}


void UPlayerWidget::CreateAbilityIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef)
{
	if (!StatusIconWithTimerWidgetClass) return;
	UAbilityIconWithTimer* StatusIconWithTimerRef = Cast<UAbilityIconWithTimer>(CreateWidget(this, StatusIconWithTimerWidgetClass));
	if (!StatusIconWithTimerRef) return;
	StatusIconWithTimerRef->InitializeWidget(Duration, Image, AbilityCompRef, IconSize);
	HorizontalBox_StatusEffects->AddChild(StatusIconWithTimerRef);
}


void UPlayerWidget::CreateAbilityIconWithAmount(const float Amount, UTexture2D* Image, UStatsComponent* StatsCompRef, const FString& Keyword)
{
	if (!StatusIconWithAmountWidgetClass) return;
	if (ActiveStatusWidget.Contains(Keyword))
	{
		if (UAbilityIconWithAmount** FoundWidget = ActiveStatusWidget.Find(Keyword))
		{
			if (UAbilityIconWithAmount* StatusWidget = Cast<UAbilityIconWithAmount>(*FoundWidget))
				StatusWidget->SetValue(Amount);
		}
	}
	else
	{
		UAbilityIconWithAmount* StatusIconWithAmountRef = Cast<UAbilityIconWithAmount>(CreateWidget(this, StatusIconWithAmountWidgetClass));
		if (!StatusIconWithAmountRef) return;
		StatusIconWithAmountRef->InitializeWidget(Amount, Image, StatsCompRef, Keyword, IconSize);
		ActiveStatusWidget.Add(Keyword, StatusIconWithAmountRef);
		HorizontalBox_StatusEffects->AddChild(StatusIconWithAmountRef);
	}
}


void UPlayerWidget::ShowLevelUpAnimation(int32 AbilityPoints, int32 AttributePoints)
{
	if (!LevelUpNotificationClass) return;
	ULevelUpNotification* LevelUpWidget = Cast<ULevelUpNotification>(CreateWidget(this, LevelUpNotificationClass));
	if (!LevelUpWidget) return;
	LevelUpWidget->SetPoints(AbilityPoints, AttributePoints);
	LevelUpWidget->AddToViewport(10);
}


void UPlayerWidget::SetHealth(const float NewHealthPercent){ProgressBar_Health->SetPercent(NewHealthPercent);}

void UPlayerWidget::SetStamina(const float NewStaminaPercent){ProgressBar_Stamina->SetPercent(NewStaminaPercent);}

void UPlayerWidget::SetMana(const float NewManaPercent){ProgressBar_Mana->SetPercent(NewManaPercent);}

void UPlayerWidget::SetLevel(const int CurrentLevel){TextBlock_Level->SetText(FText::AsNumber(CurrentLevel));}

void UPlayerWidget::SetExperience(const float CurrentExperience){ProgressBar_Experience->SetPercent(CurrentExperience);}