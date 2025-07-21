
#include "UI/BonfireInteractionWidget.h"

#include "Components/TextBlock.h"

void UBonfireInteractionWidget::NativeConstruct()
{
	Super::NativeConstruct();
	
	Text_InteractionText->SetText(FText::FromString("Interact with bonfire: E"));
}
