
#include "UI/BonfireMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "UI/PlayerWidget.h"


void UBonfireMenu::Init(UPlayerWidget* PlayerWidget)
{
	PlayerWidgetRef = PlayerWidget;
}


void UBonfireMenu::NativeConstruct()
{
	Super::NativeConstruct();
	if (!PlayerWidgetRef) return;
	Button_QuitBonfire->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RequestToRemoveWidget);
	Button_AbilitiesScreen->OnClicked.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateAbilityUpgradeScreen);
	Button_AttributesScreen->OnClicked.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateAttributesUpgradeScreen);
	Button_QuickTravelMenu->OnClicked.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateQuickTravelMenuWidget);
	Button_QuitBonfire->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_QuickTravelMenu->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_AbilitiesScreen->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_AttributesScreen->OnClicked.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
}


void UBonfireMenu::RemoveWidget()
{
	this->RemoveFromParent();
}


void UBonfireMenu::RequestToRemoveWidget()
{
	AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PC) return;
	PC->HandleBonfireMenuQuit();
}