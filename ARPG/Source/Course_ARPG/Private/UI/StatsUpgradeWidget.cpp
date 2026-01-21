
#include "UI/StatsUpgradeWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "UI/InfoFooter.h"
#include "UI/InfoHeader.h"
#include "UI/StatUpgradeSlot.h"


void UStatsUpgradeWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Init();
}


void UStatsUpgradeWidget::Init()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (!PlayerRef) return;
	const int AvailablePoints = PlayerRef->GetCurrentStatPointsAmount();
	CreateUpgradeInfoHeader(AvailablePoints);
	for (const auto Stat : PlayerRef->GetStatsArray())
	{
		CreateStatsUpgradeScreen(Stat);
	}
	CreateUpgradeInfoFooter();
}


void UStatsUpgradeWidget::CreateStatsUpgradeScreen(const EStats& Stat)
{
	if (!StatUpgradeSlotClass) return;
	UStatUpgradeSlot* StatUpgradeSlot = Cast<UStatUpgradeSlot>(CreateWidget(this, StatUpgradeSlotClass));
	if (!StatUpgradeSlot) return;
	VerticalBox_Slots->AddChild(StatUpgradeSlot);
	StatUpgradeSlot->Init(Stat);
}


void UStatsUpgradeWidget::CreateUpgradeInfoHeader(const int Value)
{
	if (!InfoHeaderWidgetClass) return;
	UInfoHeader* InfoHeaderWidgetRef = Cast<UInfoHeader>(CreateWidget(this, InfoHeaderWidgetClass));
	if (!InfoHeaderWidgetRef) return;
	VerticalBox_Slots->AddChild(InfoHeaderWidgetRef);
	InfoHeaderWidgetRef->InitializeInfoHeader(Value);
}


void UStatsUpgradeWidget::CreateUpgradeInfoFooter()
{
	if (!InfoFooterWidgetClass) return;
	UInfoFooter* InfoFooterWidgetRef = Cast<UInfoFooter>(CreateWidget(this, InfoFooterWidgetClass));
	if (!InfoFooterWidgetRef) return;
	VerticalBox_Slots->AddChild(InfoFooterWidgetRef);
	InfoFooterWidgetRef->Button_Exit->OnClicked.AddUniqueDynamic(this, &UStatsUpgradeWidget::RemoveWidget);
}


void UStatsUpgradeWidget::RemoveWidget()
{
	this->RemoveFromParent();
}