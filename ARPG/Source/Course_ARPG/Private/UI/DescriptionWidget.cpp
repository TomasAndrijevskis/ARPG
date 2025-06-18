
#include "UI/DescriptionWidget.h"
#include "Components/TextBlock.h"

void UDescriptionWidget::SetDescription(FString Description)
{
	if (!Text_Description)
	{
		UE_LOG(LogTemp, Error, TEXT("SetDescription - Null"));
		return;
	}
	Text_Description->SetText(FText::FromString(Description));
}


