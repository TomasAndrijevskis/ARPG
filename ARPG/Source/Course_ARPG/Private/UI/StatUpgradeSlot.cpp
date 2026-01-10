
#include "UI/StatUpgradeSlot.h"
#include "Characters/Data/EStats.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Components/LevelingComponent.h"
#include "Components/StatsComponent.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UStatUpgradeSlot::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (Button_ImproveStat) Button_ImproveStat->OnClicked.AddDynamic(this, &UStatUpgradeSlot::OnImproveStatClicked);
}


void UStatUpgradeSlot::OnImproveStatClicked()
{
	ImproveStat();
	UpdateText(StatName, StatValue);
}


void UStatUpgradeSlot::ImproveStat()
{
	if (!PlayerRef) return;
	int Points = PlayerRef->LevelComp->GetCurrentStatPointsAmount();
	if (Points <= 0) return;
	if (Stat == Strength) StatValue += 5;
	else StatValue += 10;
	PlayerRef->StatsComp->SetStatValue(Stat, StatValue);
	Points--;
	PlayerRef->LevelComp->SetStatPoints(Points);
	PlayerRef->LevelComp->IncreaseUsedStatPoints();
	PlayerRef->LevelComp->OnStatPointsUpdateDelegate.Broadcast(Points);
}


void UStatUpgradeSlot::SetStatsVariables(const EStats& StatToImprove)
{
	Stat = StatToImprove;
	if (!PlayerRef) return;
	StatName = PlayerRef->StatsComp->GetStatName(Stat);
	StatValue = PlayerRef->StatsComp->GetStatValue(Stat);
	UpdateText(StatName, StatValue);
}


void UStatUpgradeSlot::UpdateText(FString& Name, const float Value)
{
	FString Prefix = TEXT("Max");
	if (Name.StartsWith(Prefix)) Name = Name.RightChop(Prefix.Len());
	Text_StatName->SetText(FText::FromString(Name));
	Text_StatValue->SetText(FText::AsNumber(Value));
}