
#include "UI/MainMenu.h"
#include "Kismet/GameplayStatics.h"
#include "UI/SaveMenu.h"
#include "UI/Buttons/MenuButtonBase.h"


void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();
	Button_StartGame->OnButtonClickedDelegate.AddDynamic(this, &UMainMenu::CreateSaveMenuWidget);
	Button_QuitGame->OnButtonClickedDelegate.AddDynamic(this, &UMainMenu::QuitGame);
	SetPlayerControllerProperties();
}


void UMainMenu::QuitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, false);
}


void UMainMenu::SetPlayerControllerProperties()
{
	if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
	{
		PlayerController->SetShowMouseCursor(true);
		FInputModeGameAndUI InputMode;
		PlayerController->SetInputMode(InputMode);
	}
}


void UMainMenu::CreateSaveMenuWidget()
{
	if (!SaveMenuWidgetClass) return;
	if (USaveMenu* SaveMenuWidget = CreateWidget<USaveMenu>(this, SaveMenuWidgetClass))
	{
		SaveMenuWidget->AddToViewport(1);
	}
}
