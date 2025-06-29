
#include "UI/CharacterSelect.h"
#include "Characters/Data/CharacterSelectionStruct.h"
#include "Kismet/GameplayStatics.h"
#include "SaveGame/ARPG_GameInstance.h"


void UCharacterSelect::NativeConstruct()
{
	Super::NativeConstruct();

	SetData();
	Button_SelectCharacter->OnClicked.AddDynamic(this, &UCharacterSelect::SetCharacterClass);
}


void UCharacterSelect::SetData()
{
	FCharacterSelectionStruct* CharacterRow = CharactersDataTable->FindRow<FCharacterSelectionStruct>(CharacterData.RowName, TEXT("Level to look for"));
	if (CharacterRow)
	{
		Text_CharacterName->SetText(CharacterRow->Description);
		SetButtonStyle(CharacterRow->Image);
		CharacterClass = CharacterRow->SelectedCharacterClass;
	}
}


void UCharacterSelect::SetCharacterClass()
{
	UARPG_GameInstance* GameInstance = Cast<UARPG_GameInstance>(GetGameInstance());
	if (!GameInstance)
	{
		return;
	}
	GameInstance->SetPlayerClass(CharacterClass, true);
	UGameplayStatics::OpenLevel(GetWorld(),FName("TestMap"));
}


void UCharacterSelect::SetButtonStyle(UTexture2D* Image)
{
	FButtonStyle CustomStyle;
	
	FSlateBrush NormalBrush;
	NormalBrush.SetResourceObject(Image);
	NormalBrush.TintColor = FSlateColor(FLinearColor(1.f, 1.f, 1.f, 1.f));
	
	FSlateBrush HoveredBrush;
	HoveredBrush.SetResourceObject(Image);
	HoveredBrush.TintColor = FSlateColor(FLinearColor(1.f, 1.f, 1.f, 0.7f));
	
	FSlateBrush PressedBrush;
	PressedBrush.SetResourceObject(Image);
	PressedBrush.TintColor = FSlateColor(FLinearColor(1.f, 1.f, 1.f, 0.4f));
	
	CustomStyle.SetNormal(NormalBrush);
	CustomStyle.SetHovered(HoveredBrush);
	CustomStyle.SetPressed(PressedBrush);
	
	Button_SelectCharacter->SetStyle(CustomStyle);
}



