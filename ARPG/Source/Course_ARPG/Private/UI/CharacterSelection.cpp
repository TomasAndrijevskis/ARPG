
#include "UI/CharacterSelection.h"
#include "Characters/MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"
#include "Gamemode/ARPG_GameMode.h"

void UCharacterSelection::NativeConstruct()
{
	Super::NativeConstruct();

	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance)
	{
		return;
	}

	/*GameMode = Cast<AARPG_GameMode>(GetWorld()->GetAuthGameMode());
	if (!GameMode)
	{
		UE_LOG(LogTemp, Error, TEXT("GameMode is NULL"));
		return;
	}*/
	
	SetPlayerControllerProperties();
	SetButtonAction();
}


void UCharacterSelection::SetPlayerControllerProperties()
{
	PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController)
	{
		return;
	}
	PlayerController->SetShowMouseCursor(true);
	FInputModeGameAndUI InputMode;
	PlayerController->SetInputMode(InputMode);
}


void UCharacterSelection::SetButtonAction()
{
	Button_1->OnClicked.AddDynamic(this, &UCharacterSelection::SetCharacterClass1);
	Button_2->OnClicked.AddDynamic(this, &UCharacterSelection::SetCharacterClass2);
}


void UCharacterSelection::SetCharacterClass1()
{
	GameInstance->SetPlayerClass(CharacterClass1, true);
	UGameplayStatics::OpenLevel(GetWorld(),FName("TestMap"));
}


void UCharacterSelection::SetCharacterClass2()
{
	GameInstance->SetPlayerClass(CharacterClass2, true);
	UGameplayStatics::OpenLevel(GetWorld(),FName("TestMap"));
}