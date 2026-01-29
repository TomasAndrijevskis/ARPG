
#include "Components/AttributesComponent.h"
#include "Characters/Data/DefaultAttributesDataAsset.h"


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