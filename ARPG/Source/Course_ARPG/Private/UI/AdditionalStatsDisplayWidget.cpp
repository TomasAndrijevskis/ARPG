
#include "UI/AdditionalStatsDisplayWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UAdditionalStatsDisplayWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->FillAdditionalStatsDisplayData(Data);
	SetText();
}


void UAdditionalStatsDisplayWidget::SetText()
{
	Text_MagicalStrength->SetText(GetAsText(Data.MagicalStrength));
	Text_PhysicalStrength->SetText(GetAsText(Data.PhysicalStrength));
	Text_MagDmgResistance->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(Data.MagDamageResistance)));
	Text_PhysDmgResistance->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(Data.PhysDamageResistance)));
	Text_AbilityPower->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(Data.AbilityPower)));
}


FText UAdditionalStatsDisplayWidget::GetAsText(float Value)
{
	return FText::FromString(FString::SanitizeFloat(Value));
}