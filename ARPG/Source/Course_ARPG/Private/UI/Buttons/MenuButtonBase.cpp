
#include "UI/Buttons/MenuButtonBase.h"

#include "Components/Button.h"
#include "Components/TextBlock.h"


void UMenuButtonBase::NativePreConstruct()
{
	Super::NativePreConstruct();
	SetText();
}


void UMenuButtonBase::NativeConstruct()
{
	Super::NativeConstruct();
	if (Button)
	{
		Button->OnClicked.AddUniqueDynamic(this, &UMenuButtonBase::HandleButtonClick);
		Button->OnHovered.AddDynamic(this, &UMenuButtonBase::HandleButtonHover);
		Button->OnPressed.AddDynamic(this, &UMenuButtonBase::HandleButtonPress);
		Button->OnUnhovered.AddDynamic(this, &UMenuButtonBase::HandleButtonUnhover);
	}
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


void UMenuButtonBase::SetText(){TextBlock->SetText(ButtonText);}

void UMenuButtonBase::HandleButtonClick(){OnButtonClickedDelegate.Broadcast();}

void UMenuButtonBase::HandleButtonHover(){OnButtonHoveredDelegate.Broadcast();}

void UMenuButtonBase::HandleButtonUnhover(){OnButtonUnhoveredDelegate.Broadcast();}

void UMenuButtonBase::HandleButtonPress(){OnButtonPressedDelegate.Broadcast();}