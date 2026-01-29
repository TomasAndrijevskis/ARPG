
#include "UI/AttributeUpgradeSlot.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UAttributeUpgradeSlot::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	if (Button_ImproveStat) Button_ImproveStat->OnClicked.AddDynamic(this, &UAttributeUpgradeSlot::OnImproveAttributeClicked);
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
	UpdateText(AttributeName, AttributeValue);
}


void UAttributeUpgradeSlot::UpdateText(FString& Name, const float Value)
{
	FString Prefix = TEXT("Max");
	if (Name.StartsWith(Prefix)) Name = Name.RightChop(Prefix.Len());
	Text_StatName->SetText(FText::FromString(Name));
	Text_StatValue->SetText(FText::AsNumber(Value));
}