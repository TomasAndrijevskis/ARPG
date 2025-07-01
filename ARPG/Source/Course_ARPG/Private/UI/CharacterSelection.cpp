
#include "UI/CharacterSelection.h"
#include "Characters/MainCharacter_Base.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Gamemode/ARPG_GameMode.h"

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


