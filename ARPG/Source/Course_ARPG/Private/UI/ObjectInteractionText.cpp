
#include "UI/ObjectInteractionText.h"

#include "Components/TextBlock.h"


void UObjectInteractionText::NativeConstruct()
{
	Super::NativeConstruct();
}


void UObjectInteractionText::InitializeText(FString InteractObject, FString InteractKey)
{
	FString Text = "Interact with " + InteractObject + ": " + InteractKey;
	Text_InteractionText->SetText(FText::FromString(Text));
}
