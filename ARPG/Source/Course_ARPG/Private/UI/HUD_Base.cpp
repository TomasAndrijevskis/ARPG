
#include "UI/HUD_Base.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/LevelingComponent.h"
#include "Components/StatsComponent.h"
#include "Data/EStats.h"
#include "UI/AbilityUpgradeWidget.h"
#include "UI/AttributeUpgradeWidget.h"
#include "UI/BonfireMenu.h"
#include "UI/EnchantmentMenuWidget.h"
#include "UI/PauseMenu.h"
#include "UI/PlayerDeath.h"
#include "UI/PlayerWidget.h"
#include "UI/QuickTravelMenu.h"
#include "UI/ResetWidget.h"


void AHUD_Base::BeginPlay()
{
	Super::BeginPlay();
	const FInputModeGameOnly InputMode;
	GetOwningPlayerController()->SetInputMode(InputMode);
}


void AHUD_Base::AssignPlayerRef()
{
	OwnerRef = GetOwningPawn();
}


void AHUD_Base::CreatePlayerWidget()
{
	if (!PlayerWidgetClass) return;
	PlayerWidget = Cast<UPlayerWidget>(CreateWidget(GetOwningPlayerController(), PlayerWidgetClass));
	if (!PlayerWidget) return;
	PlayerWidget->AddToViewport();
	if (OwnerRef)
	{
		if (UStatsComponent* StatsComp = OwnerRef->FindComponentByClass<UStatsComponent>())
		{
			PlayerWidget->SetHealth(StatsComp->GetStatPercentage(EStats::Health, EStats::MaxHealth));
			PlayerWidget->SetStamina(StatsComp->GetStatPercentage(EStats::Stamina, EStats::MaxStamina));
			PlayerWidget->SetMana(StatsComp->GetStatPercentage(EStats::Mana, EStats::MaxMana));
			StatsComp->OnHealthPercentUpdateDelegate.AddUObject(PlayerWidget, &UPlayerWidget::SetHealth);
			StatsComp->OnStaminaPercentUpdateDelegate.AddUObject(PlayerWidget, &UPlayerWidget::SetStamina);
			StatsComp->OnManaPercentUpdateDelegate.AddUObject(PlayerWidget, &UPlayerWidget::SetMana);
		}
		if (ULevelingComponent* LevelComp = OwnerRef->FindComponentByClass<ULevelingComponent>())
		{
			PlayerWidget->SetLevel(LevelComp->GetCurrentLevel());
			PlayerWidget->SetExperience(LevelComp->GetExperiencePercentage());
			LevelComp->OnLevelUpdatedDelegate.AddUObject(PlayerWidget, &UPlayerWidget::SetLevel);
			LevelComp->OnExperienceUpdatedDelegate.AddUObject(PlayerWidget, &UPlayerWidget::SetExperience);
			LevelComp->OnNewLevelDelegate.AddUObject(PlayerWidget, &UPlayerWidget::ShowLevelUpAnimation);
		}
	}
	CreateAbilitiesFooterPanel();
}


void AHUD_Base::CreateAbilitiesFooterPanel()
{
	if (!PlayerWidget || !OwnerRef) return;
	PlayerWidget->ClearAbilityFooterPanel();
	/*for (auto* Ability: OwnerRef->GetAbilitiesArray())
	{
		if (IsValid(Ability) && Ability->IsAbilityAvailable())
			PlayerWidget->CreateAbilityFooterPanel(Ability->GetIcon(), Ability->GetActionKey(), Ability);
	}*/
}


void AHUD_Base::CreateGameMenuWidgets()
{
	CreatePauseMenu();
	CreateBonfireMenu();
	CreateEnchantmentMenu();
	CreateResetMenu();
	CreateQuickTravelMenuWidget();
	CreateAbilityUpgradeScreen();
	CreateAttributesUpgradeScreen();
}


void AHUD_Base::CreatePauseMenu()
{
	if (!PauseMenuWidgetClass || !OwnerRef) return;
	PauseMenuWidget = Cast<UPauseMenu>(CreateWidget(GetOwningPlayerController(), PauseMenuWidgetClass));
	if (!PauseMenuWidget) return;
	PauseMenuWidget->AddToViewport(5);
}


void AHUD_Base::CreateBonfireMenu()
{
	if (!BonfireMenuWidgetClass || !OwnerRef) return;
	BonfireWidget = Cast<UBonfireMenu>(CreateWidget(GetOwningPlayerController(), BonfireMenuWidgetClass));
	if (!BonfireWidget) return;
	BonfireWidget->AddToViewport(5);
}


void AHUD_Base::CreateEnchantmentMenu()
{
	if (!EnchantmentMenuClass || !OwnerRef) return;
	EnchantmentMenu = Cast<UEnchantmentMenuWidget>(CreateWidget(GetOwningPlayerController(), EnchantmentMenuClass));
	if (!EnchantmentMenu) return;
	EnchantmentMenu->AddToViewport(5);
}


void AHUD_Base::CreateResetMenu()
{
	if (!ResetWidgetClass || !OwnerRef) return;
	ResetWidget = Cast<UResetWidget>(CreateWidget(GetOwningPlayerController(), ResetWidgetClass));
	if (!ResetWidget) return;
	ResetWidget->AddToViewport(5);
}


void AHUD_Base::CreateQuickTravelMenuWidget()
{
	if (!QuickTravelMenuWidgetClass || !OwnerRef) return;
	QuickTravelMenuWidget = Cast<UQuickTravelMenu>(CreateWidget(GetOwningPlayerController(), QuickTravelMenuWidgetClass));
	if (!QuickTravelMenuWidget) return;
	QuickTravelMenuWidget->AddToViewport(5);
}


void AHUD_Base::CreateAbilityUpgradeScreen()
{
	if (!AbilityUpgradeWidgetClass || !OwnerRef) return;
	AbilityUpgradeWidget = Cast<UAbilityUpgradeWidget>(CreateWidget(GetOwningPlayerController(), AbilityUpgradeWidgetClass));
	if (!AbilityUpgradeWidget) return;
	AbilityUpgradeWidget->AddToViewport(5);
}


void AHUD_Base::CreateAttributesUpgradeScreen()
{
	if (!AttributesUpgradeWidgetClass || !OwnerRef) return;
	AttributesUpgradeWidget = Cast<UAttributeUpgradeWidget>(CreateWidget(GetOwningPlayerController(), AttributesUpgradeWidgetClass));
	if (!AttributesUpgradeWidget) return;
	AttributesUpgradeWidget->AddToViewport(5);
}


void AHUD_Base::CreateDeathWidget()
{
	if (!PlayerDeathWidgetClass || !OwnerRef) return;
	if (UPlayerDeath* PlayerDeathWidget = Cast<UPlayerDeath>(CreateWidget(GetOwningPlayerController(), PlayerDeathWidgetClass)))
	{
		PlayerDeathWidget->AddToViewport(5);
	}
}


void AHUD_Base::ToggleWidget(UUserWidget* widgetToFocus)
{
	if (!IsValid(widgetToFocus)) return;
	if (ActiveWidget == widgetToFocus)
	{
		if (ActiveWidget->IsVisible()) FocusOnGame();
		else FocusOnWidget();
	}
	else
	{
		FocusOnGame();
		ActiveWidget = widgetToFocus;
		FocusOnWidget();
	}
}


void AHUD_Base::FocusOnGame()
{
	UE_LOG(LogTemp, Warning, TEXT("FocusOnGame"));
	if (!ActiveWidget) return;
	if (AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetOwningPlayerController()))
	{
		ActiveWidget->SetVisibility(ESlateVisibility::Collapsed);
		PC->OnWidgetClosed();
	}
}


void AHUD_Base::FocusOnWidget()
{
	if (!ActiveWidget) return;
	UE_LOG(LogTemp, Warning, TEXT("FocusOnWidget"));
	if (AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetOwningPlayerController()))
	{
		ActiveWidget->SetVisibility(ESlateVisibility::Visible);
		PC->OnWidgetOpened();
	}
}


void AHUD_Base::ToggleBonfireWidget()
{
	ToggleWidget(BonfireWidget);
}

void AHUD_Base::ToggleQuickTravelWidget()
{
	UE_LOG(LogTemp, Error, TEXT("ToggleQuickTravelWidget"));
	ToggleWidget(QuickTravelMenuWidget);
}

void AHUD_Base::ToggleAbilityUpgradeWidget()
{
	ToggleWidget(AbilityUpgradeWidget);
}

void AHUD_Base::ToggleAttributesUpgradeWidget()
{
	ToggleWidget(AttributesUpgradeWidget);
}

void AHUD_Base::TogglePauseWidget()
{
	ToggleWidget(PauseMenuWidget);
}

void AHUD_Base::ToggleEnchantmentWidget()
{
	ToggleWidget(EnchantmentMenu);
}

void AHUD_Base::ToggleResetWidget()
{
	ToggleWidget(ResetWidget);
}
