
#include "UI/CharacterSelection.h"


void UCharacterSelection::NativeConstruct()
{
	Super::NativeConstruct();
	SetPlayerControllerProperties();
}


void UCharacterSelection::SetPlayerControllerProperties()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		return;
	}
	PlayerController->SetShowMouseCursor(true);
	FInputModeGameAndUI InputMode;
	PlayerController->SetInputMode(InputMode);
}


