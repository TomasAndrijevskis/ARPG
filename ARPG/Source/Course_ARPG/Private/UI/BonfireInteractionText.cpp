
#include "UI/BonfireInteractionText.h"

#include "Components/TextBlock.h"

void UBonfireInteractionText::NativeConstruct()
{
	Super::NativeConstruct();
	
	Text_InteractionText->SetText(FText::FromString("Interact with bonfire: B"));
}
