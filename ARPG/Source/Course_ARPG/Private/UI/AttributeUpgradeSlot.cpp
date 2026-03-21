
#include "UI/AttributeUpgradeSlot.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "UI/DescriptionWidget.h"
#include "UI/Buttons/MenuButtonBase.h"


void UAttributeUpgradeSlot::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	SetButtonsBehaviour();
}


void UAttributeUpgradeSlot::SetButtonsBehaviour()
{
	Button_ImproveAttribute->OnButtonClickedDelegate.AddUniqueDynamic(this, &UAttributeUpgradeSlot::OnImproveAttributeClicked);
	Button_ImproveAttribute->OnButtonHoveredDelegate.AddUniqueDynamic(this, &UAttributeUpgradeSlot::CreateDescriptionWidget);
}


void UAttributeUpgradeSlot::Init(const EAttributes& AttributeToImprove)
{
	Attribute = AttributeToImprove;
	SetAttributeDisplayData();
}


void UAttributeUpgradeSlot::OnImproveAttributeClicked()
{
	ImproveAttribute();
	UpdateText(AttributeName, AttributeValue);
}


void UAttributeUpgradeSlot::ImproveAttribute()
{
	if (!PlayerRef) return;
	PlayerRef->UpgradeAttribute(Attribute);
	SetAttributeDisplayData();
}


void UAttributeUpgradeSlot::SetAttributeDisplayData()
{
	if (!PlayerRef) return;
	PlayerRef->FillAttributeDisplayData(AttributeName, AttributeValue, Attribute);
	PlayerRef->BuildAttributeDescription(Attribute, AttributeDescription);
	UpdateText(AttributeName, AttributeValue);
}


void UAttributeUpgradeSlot::UpdateDescription()
{
	if (!PlayerRef) return;
	PlayerRef->BuildAttributeDescription(Attribute, AttributeDescription);
	DescriptionWidgetRef->SetDescription(AttributeDescription);
}


void UAttributeUpgradeSlot::CreateDescriptionWidget()
{
	if (!DescriptionWidgetClass) return;
	DescriptionWidgetRef = Cast<UDescriptionWidget>(CreateWidget(this, DescriptionWidgetClass));
	if (!DescriptionWidgetRef) return;
	DescriptionWidgetRef->SetDescription(AttributeDescription);
	DescriptionWidgetRef->AddToViewport(10);
	Button_ImproveAttribute->OnButtonUnhoveredDelegate.AddUniqueDynamic(this, &ThisClass::RemoveDescriptionWidget);
	Button_ImproveAttribute->OnButtonClickedDelegate.AddUniqueDynamic(this, &ThisClass::UpdateDescription);
}


void UAttributeUpgradeSlot::RemoveDescriptionWidget()
{
	if (!DescriptionWidgetRef) return;
	DescriptionWidgetRef->RemoveFromParent();
	DescriptionWidgetRef = nullptr;
}


void UAttributeUpgradeSlot::UpdateText(const FString& Name, const float Value)
{
	Text_AttributeName->SetText(FText::FromString(Name));
	Text_AttributeValue->SetText(FText::AsNumber(Value));
}