
#include "UI/QuickTravelButton.h"
#include "Characters/ARPG_PlayerController.h"
#include "Characters/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Objects/BonfireData.h"
#include "UI/BonfireInteractionAnim.h"


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


void UQuickTravelButton::InitializeButton(FString NewTravelLocationName, FBonfireData BonfireData, FString CurrentBonfireName)
{
	TravelMapName = BonfireData.MapName;
	TravelLocation = BonfireData.Location;
	TravelLocation.X = TravelLocation.X + 200;

	Text_QuickTravelLocation->SetText(FText::FromString(NewTravelLocationName));

	if (CurrentBonfireName == NewTravelLocationName)
	{
		Button_QuickTravel->SetIsEnabled(false);
	}
}


void UQuickTravelButton::ShowAnimBeforeTeleport()
{
	if (BonfireInteractionAnimClass)
	{
		BonfireInteractionAnimRef = Cast<UBonfireInteractionAnim>(CreateWidget(this, BonfireInteractionAnimClass));
		BonfireInteractionAnimRef->AddToViewport(6);
		AnimDuration = BonfireInteractionAnimRef->GetAnimDuration();
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
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(PlayerController->GetGameInstance());
	if (!GameInstance)
	{
		return;
	}
	FString MapName = UGameplayStatics::GetCurrentLevelName(GetWorld());
	if (MapName ==  TravelMapName)
	{
		PlayerRef->TeleportTo(TravelLocation, PlayerRef->GetActorRotation());
		//GameInstance->SavePlayerLocation();
	}
	else
	{
		GameInstance->SavePlayerLocation(TravelLocation);
		UGameplayStatics::OpenLevel(this, FName(*TravelMapName));
	}
}


void UQuickTravelButton::EnablePlayerInput()
{
	PlayerRef->EnableInput(PlayerController);
}


