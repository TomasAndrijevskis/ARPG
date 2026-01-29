
#include "UI/AttributeUpgradeWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "UI/InfoFooter.h"
#include "UI/InfoHeader.h"
#include "UI/AttributeUpgradeSlot.h"


void UAttributeUpgradeWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Init();
}


void UAttributeUpgradeWidget::Init()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (!PlayerRef) return;
	const int AvailablePoints = PlayerRef->GetCurrentAttributePointsAmount();
	CreateUpgradeInfoHeader(AvailablePoints);
	for (const auto Attribute : PlayerRef->GetAttributesArray())
	{
		CreateAttributesUpgradeScreen(Attribute);
	}
	CreateUpgradeInfoFooter();
}


void UAttributeUpgradeWidget::CreateAttributesUpgradeScreen(const EAttributes& Attribute)
{
	if (!StatUpgradeSlotClass) return;
	UAttributeUpgradeSlot* StatUpgradeSlot = Cast<UAttributeUpgradeSlot>(CreateWidget(this, StatUpgradeSlotClass));
	if (!StatUpgradeSlot) return;
	VerticalBox_Slots->AddChild(StatUpgradeSlot);
	StatUpgradeSlot->Init(Attribute);
}


void UAttributeUpgradeWidget::CreateUpgradeInfoHeader(const int Value)
{
	if (!InfoHeaderWidgetClass) return;
	UInfoHeader* InfoHeaderWidgetRef = Cast<UInfoHeader>(CreateWidget(this, InfoHeaderWidgetClass));
	if (!InfoHeaderWidgetRef) return;
	VerticalBox_Slots->AddChild(InfoHeaderWidgetRef);
	InfoHeaderWidgetRef->InitializeInfoHeader(Value);
}


void UAttributeUpgradeWidget::CreateUpgradeInfoFooter()
{
	if (!InfoFooterWidgetClass) return;
	UInfoFooter* InfoFooterWidgetRef = Cast<UInfoFooter>(CreateWidget(this, InfoFooterWidgetClass));
	if (!InfoFooterWidgetRef) return;
	VerticalBox_Slots->AddChild(InfoFooterWidgetRef);
	InfoFooterWidgetRef->Button_Exit->OnClicked.AddUniqueDynamic(this, &UAttributeUpgradeWidget::RemoveWidget);
}


void UAttributeUpgradeWidget::RemoveWidget()
{
	this->RemoveFromParent();
}