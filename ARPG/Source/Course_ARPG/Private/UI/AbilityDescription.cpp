
#include "UI/AbilityDescription.h"
#include "Components/TextBlock.h"

void UAbilityDescription::SetDescription(FString Description)
{
	if (!Text_AbilityDescription)
	{
		UE_LOG(LogTemp, Error, TEXT("SetDescription - Null"));
		return;
	}
	Text_AbilityDescription->SetText(FText::FromString(Description));
}


