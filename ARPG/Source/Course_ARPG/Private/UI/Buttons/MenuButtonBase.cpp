
#include "UI/Buttons/MenuButtonBase.h"
#include "Components/TextBlock.h"


void UMenuButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();
	SetText();
}


void UMenuButtonBase::SetText()
{
	TextBlock->SetText(ButtonText);
}


void UMenuButtonBase::ChangeText(const FString& NewText)
{
	ButtonText = FText::FromString(NewText);
	SetText();
}


void UMenuButtonBase::ChangeText(const FText& NewText)
{
	ButtonText = NewText;
	SetText();
}