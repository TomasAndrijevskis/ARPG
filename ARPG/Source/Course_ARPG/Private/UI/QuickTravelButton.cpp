
#include "UI/QuickTravelButton.h"
#include "Components/TextBlock.h"
#include "Helpers/TeleportSubsystem.h"
#include "UI/Buttons/MenuButtonBase.h"


void UQuickTravelButton::NativeConstruct()
{
	Super::NativeConstruct();
	Button_QuickTravel->OnButtonClickedDelegate.Clear();
	Button_QuickTravel->OnButtonClickedDelegate.AddDynamic(this, &UQuickTravelButton::TeleportPlayer);
}


void UQuickTravelButton::InitializeButton(const FSpawnPoint& Data, const FString& CurrentBonfireName)
{
	SpawnPointData = Data;
	Button_QuickTravel->ChangeText(Data.LocationTag);
	if (CurrentBonfireName == SpawnPointData.LocationTag) Button_QuickTravel->SetIsEnabled(false);
}


void UQuickTravelButton::TeleportPlayer()
{
	if (UTeleportSubsystem* Subsystem = GetGameInstance()->GetSubsystem<UTeleportSubsystem>())
	{
		Subsystem->HandleTeleportDestination(SpawnPointData);
	}
}