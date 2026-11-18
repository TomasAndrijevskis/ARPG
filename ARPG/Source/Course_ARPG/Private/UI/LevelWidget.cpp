
#include "UI/LevelWidget.h"
#include "Components/LevelingComponent.h"
#include "Components/TextBlock.h"


void ULevelWidget::UpdateText()
{
	if (APawn* Owner = GetOwningPlayerPawn())
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner %s"), *Owner->GetName());
		if (ULevelingComponent* LevelComp = Owner->FindComponentByClass<ULevelingComponent>())
		{
			Text_Level->SetText(GetAsText(LevelComp->GetCurrentLevel()));
			if (LevelComp->GetRequiredExperience() == -1) Text_Experience->SetText(FText::FromString("Maxed"));
			else Text_Experience->SetText(GetAsText(LevelComp->GetCurrentExperience(), LevelComp->GetRequiredExperience()));
		}
	}
}


FText ULevelWidget::GetAsText(float Value, float MaxValue)
{
	const FString Text = FString::FromInt(Value) + " / " + FString::FromInt(MaxValue);
	return FText::FromString(Text);
}


FText ULevelWidget::GetAsText(float Value){return FText::FromString(FString::FromInt(Value));}