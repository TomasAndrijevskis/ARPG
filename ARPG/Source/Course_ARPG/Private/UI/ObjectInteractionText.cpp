
#include "UI/ObjectInteractionText.h"

#include "Components/TextBlock.h"


void UObjectInteractionText::NativeConstruct()
{
	Super::NativeConstruct();
}


void UObjectInteractionText::InitializeText(const FString& InteractionObject, const FString& InteractionObjectName,  const FString& InteractionKey)
{
	FString Text = InteractionObjectName;
	FString Text2 = "Interact with " + InteractionObject + ": " + InteractionKey;
	Text_InteractionText_Upper->SetText(FText::FromString(Text));
	Text_InteractionText_Lower->SetText(FText::FromString(Text2));
}
