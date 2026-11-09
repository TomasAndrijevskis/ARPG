
#include "UI/QuickTravelMenu.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/ARPG_PlayerState.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/VerticalBox.h"
#include "Helpers/TeleportSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerWidget.h"
#include "UI/QuickTravelButton.h"
#include "UI/Buttons/MenuButtonBase.h"


void UQuickTravelMenu::NativeConstruct()
{
	Super::NativeConstruct();
	BindButton();
	CreateTravelMenu();
}


void UQuickTravelMenu::BindButton()
{
	if (const AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0)))
	{
		Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(this, &UQuickTravelMenu::RemoveWidget);
		Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(PlayerRef, &AMainCharacter_Base::CreateBonfireMenu);
	}
}


void UQuickTravelMenu::CreateTravelMenu()
{
	if (!QuickTravelButtonClass) return;

	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(GetOwningPlayer());
	if (!PlayerController) return;
	AARPG_PlayerState* PlayerState = PlayerController->GetPlayerState<AARPG_PlayerState>();
	if (!PlayerState) return;
	
	TArray<FSpawnPoint> Bonfires = PlayerState->GetUnlockedBonfires();
	const FString CurrentBonfireName = PlayerState->GetCurrentBonfireName();

	if (UTeleportSubsystem* Subsystem = GetGameInstance()->GetSubsystem<UTeleportSubsystem>())
	{
		Subsystem->OnPlayerTeleportRequestDelegate.AddUObject(this, &UQuickTravelMenu::RemoveWidget);
	}
	
	for (const auto& BonfireData : Bonfires)
	{
		UQuickTravelButton* QuickTravelButtonRef = Cast<UQuickTravelButton>(CreateWidget(this, QuickTravelButtonClass));
		QuickTravelButtonRef->InitializeButton(BonfireData, CurrentBonfireName);
		VB_QuickTravelContainer->AddChild(QuickTravelButtonRef);
	}
}


void UQuickTravelMenu::RemoveWidget()
{
	VB_QuickTravelContainer->ClearChildren();
	this->RemoveFromParent();
}