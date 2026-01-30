
#include "Components/AttributesComponent.h"
#include "Data/DefaultAttributesDataAsset.h"


void UAttributesComponent::BeginPlay()
{
	Super::BeginPlay();
	for (const auto& Attribute : Attributes)
	{
		ArrAttributes.Add(Attribute.Key);
	}
	OnAttributesRevertedDelegate.AddUObject(this, &UAttributesComponent::SetDefaultAttributes);
}


void UAttributesComponent::UpgradeAttribute(const EAttributes& Attribute)
{
	Attributes[Attribute]++;
	OnAttributeUpgradedDelegate.Broadcast(Attributes[Attribute]);
}


void UAttributesComponent::SetDefaultAttributes()
{
	if (!DefaultAttributesDataAsset) return;
	for (const auto& Attribute : DefaultAttributesDataAsset->DefaultAttributes)
	{
		SetAttributeValue(Attribute.Key, Attribute.Value);
	}
}


void UAttributesComponent::SetDefaultCoefficients()
{
	if (!DefaultAttributesDataAsset) return;
	for (const auto& Attribute : DefaultAttributesDataAsset->DefaultAttributeCoefficients)
	{
		AttributeCoefficients[Attribute.Key] = Attribute.Value;
	}
}


FString UAttributesComponent::GetAttributeDescription(const EAttributes& Attribute) const
{
	FString Result;
	FString StatName;
	switch (Attribute)
	{
		case Vigor: StatName = "health";
			break;
		case Endurance: StatName = "stamina";
			break;
		case Wisdom: StatName = "magical damage";
			break;
		case Intelligence: StatName = "mana";
			break;
		case Strength: StatName = "physical strength";
			break;
		case Arcane: StatName = "spells damage";
			break;
		default: StatName = "unknown";
			break;
	}
	Result = "Your " + StatName + " will be increased by " + FString::FromInt(GetAttributeCoefficient(Attribute));
	return Result;
}


FString UAttributesComponent::GetAttributeName(const EAttributes& Attribute) const
{
	return UEnum::GetValueAsString(Attribute); 
}


TArray<TEnumAsByte<EAttributes>>& UAttributesComponent::GetAttributes()
{
	return ArrAttributes;
}


void UAttributesComponent::SetAttributeValue(const EAttributes& Attribute, const int Value)
{
	Attributes[Attribute] = Value;
}


int UAttributesComponent::GetAttributeValue(const EAttributes& Attribute) const
{
	return Attributes[Attribute];
}


int UAttributesComponent::GetAttributeCoefficient(const EAttributes& Attribute) const
{
	return AttributeCoefficients[Attribute];
}