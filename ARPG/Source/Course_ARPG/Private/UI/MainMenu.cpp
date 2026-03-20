
#include "UI/MainMenu.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/Buttons/MenuButtonBase.h"


void UMainMenu::NativeConstruct()
{
	Super::NativeConstruct();
	Button_StartGame->Button->OnClicked.AddDynamic(this, &UMainMenu::OpenSaveSelectionMenu);
	Button_QuitGame->Button->OnClicked.AddDynamic(this, &UMainMenu::QuitGame);
	SetPlayerControllerProperties();
}


void UMainMenu::OpenSaveSelectionMenu()
{
	UGameplayStatics::OpenLevel(GetWorld(), "SaveSelectionMenu");
}


void UMainMenu::QuitGame()
{
	UKismetSystemLibrary::QuitGame(GetWorld(), UGameplayStatics::GetPlayerController(GetWorld(), 0), EQuitPreference::Quit, false);
}


void UMainMenu::SetPlayerControllerProperties()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController) return;
	PlayerController->SetShowMouseCursor(true);
	FInputModeGameAndUI InputMode;
	PlayerController->SetInputMode(InputMode);
}