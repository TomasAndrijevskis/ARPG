
#include "UI/LevelWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void ULevelWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->FillLevelData(CurrentLevel, CurrentXP, RequiredXP);
	SetText();
}


void ULevelWidget::SetText()
{
	Text_CurrentLevel->SetText(FText::FromString(FString::FromInt(CurrentLevel)));
	Text_CurrentExperience->SetText(FText::FromString(FString::FromInt(CurrentXP)));
	Text_RequiredExperience->SetText(FText::FromString(FString::FromInt(RequiredXP)));
}