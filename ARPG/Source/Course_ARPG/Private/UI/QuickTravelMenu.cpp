
#include "UI/QuickTravelMenu.h"
#include "Characters/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerWidget.h"
#include "UI/QuickTravelButton.h"


void UQuickTravelMenu::NativeConstruct()
{
	Super::NativeConstruct();
	
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (!PlayerRef) return;
		
	Button_Exit->OnClicked.Clear();
	Button_Exit->OnClicked.AddDynamic(PlayerRef->GetPlayerWidget(), &UPlayerWidget::RemoveQuickTravelMenuWidget);
	Button_Exit->OnClicked.AddDynamic(PlayerRef->GetPlayerWidget(), &UPlayerWidget::CreateBonfireMenuWidget);
	CreateTravelMenu();
}


void UQuickTravelMenu::SetBonfires(TMap<FString, FVector> AvailableBonfires, FString CurrentBonfireName)
{
	Bonfires = AvailableBonfires;
	BonfireName = CurrentBonfireName;
}


void UQuickTravelMenu::CreateTravelMenu()
{
	if (QuickTravelButtonClass)
	{
		for (auto Bonfire : Bonfires)
		{
			QuickTravelButtonRef = Cast<UQuickTravelButton>(CreateWidget(this, QuickTravelButtonClass));
			QuickTravelButtonRef->InitializeButton(Bonfire.Key, Bonfire.Value, BonfireName);
			VB_QuickTravelContainer->AddChild(QuickTravelButtonRef);
		}
	}
}

