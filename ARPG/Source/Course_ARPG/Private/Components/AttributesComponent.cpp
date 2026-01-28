
#include "Components/AttributesComponent.h"


void UAttributesComponent::BeginPlay()
{
	Super::BeginPlay();
	for (const auto& Attribute : Attributes)
	{
		ArrAttributes.Add(Attribute.Key);
	}
}


void UAttributesComponent::UpgradeAttribute(const EAttributes& Attribute)
{
	Attributes[Attribute] ++;
	OnAttributeUpgradedDelegate.Broadcast(Attributes[Attribute]);
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