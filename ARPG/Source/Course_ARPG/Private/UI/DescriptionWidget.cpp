
#include "UI/DescriptionWidget.h"
#include "Components/TextBlock.h"


void UDescriptionWidget::SetDescription(const FString& Description)
{
	if (!Text_Description) return;
	Text_Description->SetText(FText::FromString(Description));
}


