
#include "UI/CharacterSelection.h"
#include "Kismet/GameplayStatics.h"
#include "UI/CharacterSelect.h"


void UCharacterSelection::NativeConstruct()
{
	Super::NativeConstruct();
	SetPlayerControllerProperties();
	AmountOfCharacters = GetAmountOfCharacters();
	Button_Left->OnClicked.AddUniqueDynamic(this, &UCharacterSelection::DecreaseIndex);
	Button_Right->OnClicked.AddUniqueDynamic(this, &UCharacterSelection::IncreaseIndex);
	Button_ExitToSaveSelectionMenu->OnClicked.AddUniqueDynamic(this, &UCharacterSelection::ExitToSaveSelectionMenu);
	OnIndexChangedDelegate.AddUObject(this, &UCharacterSelection::OnIndexChanged);
	CreateCharacterSelectWidget();
}



void UCharacterSelection::SetPlayerControllerProperties()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (!PlayerController) return;
	PlayerController->SetShowMouseCursor(true);
	FInputModeGameAndUI InputMode;
	PlayerController->SetInputMode(InputMode);
}


void UCharacterSelection::CreateCharacterSelectWidget()
{
	if (!CharacterWidgetClass) return;
	CharacterWidgetRef = Cast<UCharacterSelect>(CreateWidget(this,CharacterWidgetClass));
	if (!CharacterWidgetRef) return;
	CharacterWidgetRef->SetCharacterData(GetCharacterData(Index));
	CharacterWidgetRef->AddToViewport(5);
}


FCharacterSelectionData* UCharacterSelection::GetCharacterData(int CharacterIndex) const
{
	if (!CharacterDataAsset) return nullptr;
	if (!CharacterDataAsset->CharactersData.IsValidIndex(CharacterIndex)) return nullptr;
	return &CharacterDataAsset->CharactersData[CharacterIndex];
}


int UCharacterSelection::GetAmountOfCharacters() const
{
	if (!CharacterDataAsset) return 0;
	return CharacterDataAsset->CharactersData.Num();
}


void UCharacterSelection::OnIndexChanged()
{
	if (!CharacterWidgetRef) return;
	CharacterWidgetRef->SetCharacterData(GetCharacterData(Index));
}


void UCharacterSelection::DecreaseIndex()
{
	if (Index > 0) Index--;
	else Index = AmountOfCharacters - 1;
	OnIndexChangedDelegate.Broadcast();
}


void UCharacterSelection::IncreaseIndex()
{
	if (Index < AmountOfCharacters - 1) Index++;
	else Index = 0;
	OnIndexChangedDelegate.Broadcast();
}


void UCharacterSelection::ExitToSaveSelectionMenu()
{
	UGameplayStatics::OpenLevel(this, "SaveSelectionMenu");
}