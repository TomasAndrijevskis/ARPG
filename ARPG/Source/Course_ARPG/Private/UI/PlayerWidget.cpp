
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
#include "UI/ResetWidget.h"
#include "UI/AttributeUpgradeWidget.h"
#include "UI/AbilityIconWithAmount.h"
#include "UI/AbilityIconWithTimer.h"
#include "UI/EnchantmentMenuWidget.h"
#include "UI/StatusEffectIcon.h"


void UPlayerWidget::CreateAbilityUpgradeScreen()
{
	if (!AbilityUpgradeWidgetClass) return;
	UAbilityUpgradeWidget* AbilityUpgradeWidget = Cast<UAbilityUpgradeWidget>(CreateWidget(this, AbilityUpgradeWidgetClass));
	if (!AbilityUpgradeWidget) return;
	AbilityUpgradeWidget->AddToViewport(5);
}


void UPlayerWidget::CreateAttributesUpgradeScreen()
{
	if (!AttributesUpgradeWidgetClass) return;
	UAttributeUpgradeWidget* AttributesUpgradeWidget = Cast<UAttributeUpgradeWidget>(CreateWidget(this, AttributesUpgradeWidgetClass));
	if (!AttributesUpgradeWidget) return;
	AttributesUpgradeWidget->AddToViewport(5);
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


void UPlayerWidget::CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef)
{
	UE_LOG(LogTemp, Warning, TEXT("CreateStatusEffectIcon - Player"));
	if (!StatusEffectIconWidgetClass) return;
	UStatusEffectIcon* StatusEffectIconRef = Cast<UStatusEffectIcon>(CreateWidget(this, StatusEffectIconWidgetClass));
	if (!StatusEffectIconRef) return;
	StatusEffectIconRef->InitializeWidget(Icon, IconSize, StatusEffectsCompRef);
	HorizontalBox_StatusEffects->AddChild(StatusEffectIconRef);
}


void UPlayerWidget::CreateEnchantmentMenuWidget()
{
	if (!EnchantmentMenuClass) return;
	UEnchantmentMenuWidget* EnchantmentMenuRef = Cast<UEnchantmentMenuWidget>(CreateWidget(this, EnchantmentMenuClass));
	if (!EnchantmentMenuRef) return;
	EnchantmentMenuRef->AddToViewport(5);
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
		UAbilityIconWithAmount** FoundWiget = ActiveStatusWidget.Find(Keyword);
		if (FoundWiget)
		{
			UAbilityIconWithAmount* StatusWidget = Cast<UAbilityIconWithAmount>(*FoundWiget);
			if (StatusWidget) StatusWidget->SetValue(Amount);
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


void UPlayerWidget::ShowLevelUpAnimation(int32 AbilityPoints, int32 AttributePoints)
{
	if (!LevelUpNotificationClass) return;
	ULevelUpNotification* LevelUpWidget = Cast<ULevelUpNotification>(CreateWidget(this, LevelUpNotificationClass));
	if (!LevelUpWidget) return;
	LevelUpWidget->SetPoints(AbilityPoints, AttributePoints);
	LevelUpWidget->AddToViewport(10);
}


void UPlayerWidget::CreateResetWidget()
{
	if (!ResetWidgetClass) return;
	UResetWidget* ResetWidget = Cast<UResetWidget>(CreateWidget(this, ResetWidgetClass));
	if (!ResetWidget) return;
	ResetWidget->AddToViewport(5);
}


void UPlayerWidget::SetHealth(const float NewHealthPercent){ProgressBar_Health->SetPercent(NewHealthPercent);}

void UPlayerWidget::SetStamina(const float NewStaminaPercent){ProgressBar_Stamina->SetPercent(NewStaminaPercent);}

void UPlayerWidget::SetMana(const float NewManaPercent){ProgressBar_Mana->SetPercent(NewManaPercent);}

void UPlayerWidget::SetLevel(const int CurrentLevel){TextBlock_Level->SetText(FText::AsNumber(CurrentLevel));}

void UPlayerWidget::SetExperience(const float CurrentExperience){ProgressBar_Experience->SetPercent(CurrentExperience);}