
#include "UI/AbilityDescription.h"
#include "Components/TextBlock.h"

void UAbilityDescription::SetDescription(FString Description)
{
	if (Text_AbilityDescription)
	{
		Text_AbilityDescription->SetText(FText::FromString(Description));
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Null"));
	}
}


