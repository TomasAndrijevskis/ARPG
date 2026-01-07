
#include "UI/QuickTravelMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Objects/Bonfire.h"
#include "UI/PlayerWidget.h"
#include "UI/QuickTravelButton.h"


void UQuickTravelMenu::NativeConstruct()
{
	Super::NativeConstruct();
	Button_Exit->OnClicked.AddDynamic(this, &UQuickTravelMenu::RemoveWidget);
	SetBonfires();
	CreateTravelMenu();
}


void UQuickTravelMenu::SetBonfires()
{
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController) return;
	Bonfires = PlayerController->GetUnlockedBonfires();
	BonfireName = PlayerController->GetCurrentBonfire()->GetBonfireName();
	PlayerController->OnPlayerTeleportedDelegate.AddUObject(this, &UQuickTravelMenu::RemoveWidget);
}


void UQuickTravelMenu::CreateTravelMenu()
{
	if (!QuickTravelButtonClass) return;
	for (const auto& Bonfire : Bonfires)
	{
		UQuickTravelButton* QuickTravelButtonRef = Cast<UQuickTravelButton>(CreateWidget(this, QuickTravelButtonClass));
		QuickTravelButtonRef->InitializeButton(Bonfire.Key, Bonfire.Value, BonfireName);
		VB_QuickTravelContainer->AddChild(QuickTravelButtonRef);
	}
}


void UQuickTravelMenu::RemoveWidget()
{
	this->RemoveFromParent();
}

