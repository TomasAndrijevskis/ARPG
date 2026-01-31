
#include "UI/StatsWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UStatsWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->FillStatsDisplayData(Health, Mana, Stamina, PhysicalDamage, MagicalDamage);
	SetText();
}


void UStatsWidget::SetText()
{
	Text_Health->SetText(FText::FromString(Health));
	Text_Mana->SetText(FText::FromString(Mana));
	Text_Stamina->SetText(FText::FromString(Stamina));
	Text_PhysicalDamage->SetText(FText::FromString(PhysicalDamage));
	Text_MagicalDamage->SetText(FText::FromString(MagicalDamage));
}