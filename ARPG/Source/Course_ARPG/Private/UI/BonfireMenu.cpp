
#include "UI/BonfireMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "UI/PlayerWidget.h"
#include "UI/Buttons/MenuButtonBase.h"


void UBonfireMenu::Init(UPlayerWidget* PlayerWidget)
{
	PlayerWidgetRef = PlayerWidget;
}


void UBonfireMenu::NativeConstruct()
{
	Super::NativeConstruct();
	if (!PlayerWidgetRef) return;
	Button_QuitBonfire->OnButtonClickedDelegate.AddUniqueDynamic(this, &UBonfireMenu::RequestToRemoveWidget);
	Button_AbilitiesScreen->OnButtonClickedDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateAbilityUpgradeScreen);
	Button_AttributesScreen->OnButtonClickedDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateAttributesUpgradeScreen);
	Button_QuickTravelMenu->OnButtonClickedDelegate.AddUniqueDynamic(PlayerWidgetRef, &UPlayerWidget::CreateQuickTravelMenuWidget);
	
	Button_QuitBonfire->OnButtonClickedDelegate.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_QuickTravelMenu->OnButtonClickedDelegate.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_AbilitiesScreen->OnButtonClickedDelegate.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
	Button_AttributesScreen->OnButtonClickedDelegate.AddUniqueDynamic(this, &UBonfireMenu::RemoveWidget);
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