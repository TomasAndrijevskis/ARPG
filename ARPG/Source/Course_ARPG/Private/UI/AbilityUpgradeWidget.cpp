
#include "UI/AbilityUpgradeWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Components/VerticalBox.h"
#include "Kismet/GameplayStatics.h"
#include "UI/AbilityUpgradeSlotWidget.h"
#include "UI/InfoFooter.h"
#include "UI/InfoHeader.h"


void UAbilityUpgradeWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Init();
}


void UAbilityUpgradeWidget::Init()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0));
	if (!PlayerRef) return;
	const int AvailablePoints = PlayerRef->GetCurrentAbilityPointsAmount();
	CreateUpgradeInfoHeader(AvailablePoints);
	for (const auto& Ability : PlayerRef->GetAbilitiesArray())
	{
		CreateAbilityUpgradeScreen(Ability);
	}
	CreateUpgradeInfoFooter();
}


void UAbilityUpgradeWidget::CreateAbilityUpgradeScreen(UAbilityComponent_Player* AbilityCompRef)
{
	if (!AbilityUpgradeSlotClass) return;
	UAbilityUpgradeSlotWidget* AbilityUpgradeSlotRef = Cast<UAbilityUpgradeSlotWidget>(CreateWidget(this, AbilityUpgradeSlotClass));
	if (!AbilityUpgradeSlotRef) return;
	VerticalBox_Slots->AddChild(AbilityUpgradeSlotRef);
	AbilityUpgradeSlotRef->InitializeAbilityUpgradeSlot(AbilityCompRef);
}


void UAbilityUpgradeWidget::CreateUpgradeInfoHeader(const int Value)
{
	if (!InfoHeaderWidgetClass) return;
	UInfoHeader* InfoHeaderWidgetRef = Cast<UInfoHeader>(CreateWidget(this, InfoHeaderWidgetClass));
	if (!InfoHeaderWidgetRef) return;
	VerticalBox_Slots->AddChild(InfoHeaderWidgetRef);
	InfoHeaderWidgetRef->InitializeInfoHeader(Value);
}


void UAbilityUpgradeWidget::CreateUpgradeInfoFooter()
{
	if (!InfoFooterWidgetClass) return;
	UInfoFooter* InfoFooterWidgetRef = Cast<UInfoFooter>(CreateWidget(this, InfoFooterWidgetClass));
	if (!InfoFooterWidgetRef) return;
	VerticalBox_Slots->AddChild(InfoFooterWidgetRef);
	InfoFooterWidgetRef->Button_Exit->OnClicked.AddUniqueDynamic(this, &UAbilityUpgradeWidget::RemoveWidget);
}


void UAbilityUpgradeWidget::RemoveWidget()
{
	this->RemoveFromParent();
}