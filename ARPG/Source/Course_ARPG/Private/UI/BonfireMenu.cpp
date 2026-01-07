
#include "UI/BonfireMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerWidget.h"


void UBonfireMenu::Init(UPlayerWidget* PlayerWidget)
{
	PlayerWidgetRef = PlayerWidget;
}


void UBonfireMenu::NativeConstruct()
{
	Super::NativeConstruct();
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (!PlayerController || !PlayerWidgetRef) return;
	Button_AbilitiesScreen->OnClicked.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateAbilityUpgradeScreen);
	Button_StatsScreen->OnClicked.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateStatsUpgradeScreen);
	Button_QuitBonfire->OnClicked.AddUniqueDynamic(PlayerController, &AARPG_PlayerController::HandleQuitBonfireMenu);
	Button_QuickTravelMenu->OnClicked.AddUniqueDynamic(PlayerController, &AARPG_PlayerController::CreateQuickTravelMenu);
	Button_QuitBonfire->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_QuickTravelMenu->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_AbilitiesScreen->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_StatsScreen->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
}


void UBonfireMenu::RemoveWidget()
{
	this->RemoveFromParent();
}