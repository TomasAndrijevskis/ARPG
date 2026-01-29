
#include "UI/CharacterSelect.h"
#include "Data/CharacterSelectionData.h"
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
	FCharacterSelectionData* CharacterRow = CharactersDataTable->FindRow<FCharacterSelectionData>(CharacterData.RowName, TEXT("Character class to look for"));
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
	if (!GameInstance) return;
	GameInstance->SetPlayerClass(CharacterClass, true);
	UGameplayStatics::OpenLevel(GetWorld(),FName(GameInstance->GetCurrentMap()));
}


void UCharacterSelect::SetButtonStyle(UTexture2D* Image)
{
	if (!Image) return;
	FButtonStyle CustomStyle;
	ApplyImageStyle(Image, CustomStyle.Normal, FSlateColor(FLinearColor(1.f, 1.f, 1.f, 1.f)));
	ApplyImageStyle(Image, CustomStyle.Hovered, FSlateColor(FLinearColor(1.f, 1.f, 1.f, 0.4f)));
	ApplyImageStyle(Image, CustomStyle.Pressed, FSlateColor(FLinearColor(1.f, 1.f, 1.f, 0.7f)));
	Button_SelectCharacter->SetStyle(CustomStyle);
}


void UCharacterSelect::ApplyImageStyle(UTexture2D* Image, FSlateBrush& BrushStyle, const FSlateColor& Color)
{
	BrushStyle.SetResourceObject(Image);
	BrushStyle.TintColor = Color;
}