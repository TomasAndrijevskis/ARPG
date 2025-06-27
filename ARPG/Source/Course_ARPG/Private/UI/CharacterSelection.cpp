


#include "UI/CharacterSelection.h"

#include "Characters/MainCharacter.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"

void UCharacterSelection::NativeConstruct()
{
	Super::NativeConstruct();

	GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance)
	{
		return;
	}
	
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
	GameInstance->SetPawnClass(CharacterClass1);
	UGameplayStatics::OpenLevel(GetWorld(),FName("TestMap"));
}


void UCharacterSelection::SetCharacterClass2()
{
	GameInstance->SetPawnClass(CharacterClass2);
	UGameplayStatics::OpenLevel(GetWorld(),FName("TestMap"));
}