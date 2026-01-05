
#include "UI/ObjectInteractionText.h"
#include "Components/TextBlock.h"


void UObjectInteractionText::InitializeText(const FString& InteractionObject, const FString& InteractionObjectName,  const FString& InteractionKey)
{
	FString ObjectName = InteractionObjectName;
	FString InteractionMessage = "Interact with " + InteractionObject + ": " + InteractionKey;
	Text_InteractionText_Upper->SetText(FText::FromString(ObjectName));
	Text_InteractionText_Lower->SetText(FText::FromString(InteractionMessage));
}
