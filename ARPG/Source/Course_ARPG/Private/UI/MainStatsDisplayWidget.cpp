
#include "UI/MainStatsDisplayWidget.h"
#include "Components/StatsComponent.h"
#include "Components/TextBlock.h"


void UMainStatsDisplayWidget::UpdateText()
{
	if (APawn* Owner = GetOwningPlayerPawn())
	{
		UE_LOG(LogTemp, Warning, TEXT("Owner %s"), *Owner->GetName());
		if (UStatsComponent* StatsComp = Owner->FindComponentByClass<UStatsComponent>())
		{
			Text_Health->SetText(GetAsText(StatsComp->GetStatValue(EStats::Health), StatsComp->GetStatValue(EStats::MaxHealth)));
			Text_Mana->SetText(GetAsText(StatsComp->GetStatValue(EStats::Mana), StatsComp->GetStatValue(EStats::MaxMana)));
			Text_Stamina->SetText(GetAsText(StatsComp->GetStatValue(EStats::Stamina), StatsComp->GetStatValue(EStats::MaxStamina)));
		}
	}
}


FText UMainStatsDisplayWidget::GetAsText(float Value, float MaxValue){return FText::FromString(FString::SanitizeFloat(Value) + " / " + FString::SanitizeFloat(MaxValue));}
