
#include "UI/LevelWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void ULevelWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->FillLevelDisplayData(Data);
	SetText();
}


void ULevelWidget::SetText()
{
	Text_Level->SetText(GetAsText(Data.CurrentLevel));
	if (Data.RequiredExperience == -1) Text_Experience->SetText(FText::FromString("Maxed"));
	else Text_Experience->SetText(GetAsText(Data.CurrentExperience, Data.RequiredExperience));
}


FText ULevelWidget::GetAsText(float Value, float MaxValue)
{
	const FString Text = FString::FromInt(Value) + " / " + FString::FromInt(MaxValue);
	return FText::FromString(Text);
}


FText ULevelWidget::GetAsText(float Value)
{
	return FText::FromString(FString::FromInt(Value));
}