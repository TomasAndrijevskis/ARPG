
#include "UI/LevelWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void ULevelWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->FillLevelDisplayData(Level, XP);
	SetText();
}


void ULevelWidget::SetText()
{
	Text_Level->SetText(FText::FromString(Level));
	Text_Experience->SetText(FText::FromString(XP));
}