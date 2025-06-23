
#include "UI/StatsScreenWidget.h"

#include "Characters/EStats.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UStatsScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerRef = Cast<AMainCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));

	if (Button_ImproveStat)
	{
		Button_ImproveStat->OnClicked.AddDynamic(this, &UStatsScreenWidget::OnClickedImproveStat);
	}
}


void UStatsScreenWidget::OnClickedImproveStat()
{
	ImproveStat(StatValue);
	UpdateText(StatName, StatValue);
}


float UStatsScreenWidget::ImproveStat(float CurrentValue)
{
	StatValue = CurrentValue;
	if (!PlayerRef)
	{
		return StatValue;
	}
	
	int Points = PlayerRef->LevelComp->GetCurrentStatPointsAmount();
	if (Points <= 0)
	{
		return StatValue;
	}

	StatValue++;
	PlayerRef->StatsComp->SetStatValue(Stat, StatValue);
	Points--;
	PlayerRef->LevelComp->SetStatPoints(Points);
	PlayerRef->LevelComp->OnStatPointsUpdateDelegate.Broadcast(Points);
	
	return StatValue;
}


void UStatsScreenWidget::SetStatsVariables(EStats StatToImprove)
{
	Stat = StatToImprove;

	if (!PlayerRef)
	{
		return;
	}

	StatName = PlayerRef->StatsComp->GetStatName(Stat);
	StatValue = PlayerRef->StatsComp->GetStatValue(Stat);

	UpdateText(StatName, StatValue);
}


void UStatsScreenWidget::UpdateText(FString Name, float Value)
{
	Text_StatName->SetText(FText::FromString(Name));
	Text_StatValue->SetText(FText::AsNumber(Value));
}