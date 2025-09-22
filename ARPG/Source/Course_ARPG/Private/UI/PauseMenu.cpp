
#include "UI/PauseMenu.h"
#include "Characters/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UPauseMenu::NativeConstruct()
{
	Super::NativeConstruct();

	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	Button_Resume->OnClicked.Clear();
	Button_MainMenu->OnClicked.Clear();
	Button_QuitGame->OnClicked.Clear();
	Button_Resume->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::RemovePauseMenu);
	Button_MainMenu->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::LoadToMainMenu);
	Button_QuitGame->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::SaveBeforeQuit);
}
