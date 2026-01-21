
#include "UI/StatUpgradeSlot.h"
#include "Characters/Data/EStats.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UStatUpgradeSlot::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	if (Button_ImproveStat) Button_ImproveStat->OnClicked.AddDynamic(this, &UStatUpgradeSlot::OnImproveStatClicked);
}


void UStatUpgradeSlot::Init(const EStats& StatToImprove)
{
	Stat = StatToImprove;
	SetStatDisplayData();
}


void UStatUpgradeSlot::OnImproveStatClicked()
{
	ImproveStat();
	UpdateText(StatName, StatValue);
}


void UStatUpgradeSlot::ImproveStat()
{
	if (!PlayerRef) return;
	PlayerRef->UpgradeStat(Stat);
	SetStatDisplayData();
}


void UStatUpgradeSlot::SetStatDisplayData()
{
	if (!PlayerRef) return;
	PlayerRef->FillStatDisplayData(StatName, StatValue, Stat);
	UpdateText(StatName, StatValue);
}


void UStatUpgradeSlot::UpdateText(FString& Name, const float Value)
{
	FString Prefix = TEXT("Max");
	if (Name.StartsWith(Prefix)) Name = Name.RightChop(Prefix.Len());
	Text_StatName->SetText(FText::FromString(Name));
	Text_StatValue->SetText(FText::AsNumber(Value));
}