
#include "UI/QuickTravelMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "Objects/Bonfire.h"
#include "UI/PlayerWidget.h"
#include "UI/QuickTravelButton.h"
#include "UI/Buttons/MenuButtonBase.h"


void UQuickTravelMenu::NativeConstruct()
{
	Super::NativeConstruct();
	BindButton();
	SetBonfires();
	CreateTravelMenu();
}


void UQuickTravelMenu::BindButton()
{
	const AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(this, &UQuickTravelMenu::RemoveWidget);
	Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(PlayerRef, &AMainCharacter_Base::CreateBonfireMenu);
}


void UQuickTravelMenu::SetBonfires()
{
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PlayerController) return;
	Bonfires = PlayerController->GetUnlockedBonfires();
	BonfireName = PlayerController->GetCurrentBonfire()->GetBonfireName();
	PlayerController->OnPlayerTeleportRequestDelegate.AddUObject(this, &UQuickTravelMenu::RemoveWidget);
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