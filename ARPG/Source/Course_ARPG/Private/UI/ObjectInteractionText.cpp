
#include "UI/ObjectInteractionText.h"

#include "Components/TextBlock.h"


void UObjectInteractionText::NativeConstruct()
{
	Super::NativeConstruct();
}


void UObjectInteractionText::InitializeText(FString InteractionObject,  FString InteractionObjectName, FString InteractiontKey)
{
	//FString Text = "Interact with " + InteractionObject + ": " + InteractiontKey;
	FString Text = InteractionObjectName;
	FString Text2 = "Interact with " + InteractionObject + ": " + InteractiontKey;
	Text_InteractionText->SetText(FText::FromString(Text));
	Text_InteractionText_1->SetText(FText::FromString(Text2));
}
