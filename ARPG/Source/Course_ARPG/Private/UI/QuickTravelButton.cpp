
#include "UI/QuickTravelButton.h"
#include "Characters/ARPG_PlayerController.h"
#include "Characters/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerTeleport.h"


void UQuickTravelButton::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (PlayerRef)
	{
		PlayerController = Cast<AARPG_PlayerController>(PlayerRef->GetController());
	}
	
	Button_QuickTravel->OnClicked.Clear();
	Button_QuickTravel->OnClicked.AddDynamic(this, &UQuickTravelButton::ShowAnimBeforeTeleport);
}


void UQuickTravelButton::InitializeButton(FString NewTravelLocationName, FVector NewTravelLocation, FString CurrentBonfireName)
{
	TravelLocation = NewTravelLocation;
	TravelLocation.X = TravelLocation.X + 200;

	Text_QuickTravelLocation->SetText(FText::FromString(NewTravelLocationName));

	if (CurrentBonfireName == NewTravelLocationName)
	{
		Button_QuickTravel->SetIsEnabled(false);
	}
}


void UQuickTravelButton::ShowAnimBeforeTeleport()
{
	if (PlayerTeleportClass)
	{
		PlayerTeleportRef = Cast<UPlayerTeleport>(CreateWidget(this, PlayerTeleportClass));
		PlayerTeleportRef->AddToViewport(6);
		AnimDuration = PlayerTeleportRef->GetAnimDuration();
	}
	PlayerRef->DisableInput(PlayerController);
	PlayerController->RemoveQuickTravelMenu();
	FTimerHandle TimerHandleTeleport;
	FTimerHandle TimerHandleInput;
	GetWorld()->GetTimerManager().SetTimer(TimerHandleTeleport, this, &UQuickTravelButton::TeleportPlayer, AnimDuration/2, false);
	GetWorld()->GetTimerManager().SetTimer(TimerHandleInput, this, &UQuickTravelButton::EnablePlayerInput, AnimDuration, false);
}


void UQuickTravelButton::TeleportPlayer()
{
	PlayerRef->SetActorLocation(TravelLocation);
}


void UQuickTravelButton::EnablePlayerInput()
{
	PlayerRef->EnableInput(PlayerController);
}


