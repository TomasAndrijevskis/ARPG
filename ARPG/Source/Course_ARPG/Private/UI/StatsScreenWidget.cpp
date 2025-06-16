
#include "UI/StatsScreenWidget.h"

#include "Characters/EStats.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter.h"
#include "Characters/StatsComponent.h"
#include "Kismet/GameplayStatics.h"


void UStatsScreenWidget::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerRef = Cast<AMainCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	
}


float UStatsScreenWidget::ImproveStat(float CurrentValue)
{
	StatValue = CurrentValue;
	if (!PlayerRef)
	{
		//UE_LOG(LogTemp, Error, TEXT("Player Pointer is NULL"));
		return StatValue;
	}
	
	int Points = PlayerRef->LevelComp->GetCurrentPointsAmount();
	if (Points <= 0)
	{
		//UE_LOG(LogTemp, Error, TEXT("Points is 0"));
		return StatValue;
	}

	StatValue++;
	PlayerRef->StatsComp->SetStatValue(Stat, StatValue);
	Points--;
	PlayerRef->LevelComp->SetPoints(Points);
	PlayerRef->LevelComp->OnPointsUpdateDelegate.Broadcast(Points);
	
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
}
