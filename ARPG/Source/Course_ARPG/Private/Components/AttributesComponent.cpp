
#include "Components/AttributesComponent.h"


void UAttributesComponent::SetAttributeValue(const EAttributes& Attribute, const int Value)
{
	Attributes[Attribute] = Value;
}


int UAttributesComponent::GetAttributeValue(const EAttributes& Attribute) const
{
	return Attributes[Attribute];
}
