
#include "UI/AdditionalStatsDisplayWidget.h"
#include "Components/StatsComponent.h"
#include "Components/TextBlock.h"


void UAdditionalStatsDisplayWidget::UpdateText()
{
	if (APawn* Owner = GetOwningPlayerPawn())
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner %s"), *Owner->GetName());
		if (UStatsComponent* StatsComp = Owner->FindComponentByClass<UStatsComponent>())
		{
			Text_MagicalStrength->SetText(GetAsText(StatsComp->GetStatValue(EStats::MagicalStrength)));
			Text_PhysicalStrength->SetText(GetAsText(StatsComp->GetStatValue(EStats::PhysicalStrength)));
			Text_MagDmgResistance->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(StatsComp->GetStatValue(EStats::MagDmgResistance))));
			Text_PhysDmgResistance->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(StatsComp->GetStatValue(EStats::PhysDmgResistance))));
			Text_ElementalResistance->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(StatsComp->GetStatValue(EStats::FireDmgResistance))));
			Text_ElementalDamageModificator->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(StatsComp->GetStatValue(EStats::ElementalDamageModificator))));
			Text_AbilityPower->SetText(FText::Format(FText::FromString("{0}%"), GetAsText(StatsComp->GetStatValue(EStats::AbilityPower))));
		}
	}
}


FText UAdditionalStatsDisplayWidget::GetAsText(float Value){return FText::FromString(FString::Printf(TEXT("%.2f"),Value));}