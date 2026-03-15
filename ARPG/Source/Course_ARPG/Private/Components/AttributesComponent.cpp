
#include "Components/AttributesComponent.h"
#include "Data/DefaultAttributesData.h"
#include "Data/Attributes/AttributesData.h"


void UAttributesComponent::BeginPlay()
{
	Super::BeginPlay();
	for (const auto& Attribute : Attributes)
	{
		ArrAttributes.Add(Attribute.Key);
	}
	OnAttributesRevertedDelegate.AddUObject(this, &UAttributesComponent::SetDefaultAttributes);
}


void UAttributesComponent::UpgradeAttribute(EAttributes Attribute)
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


float UAttributesComponent::GetStatScalingCoefficient(EStats Stat)
{
	if (!AttributesDataAsset) return 0.f;
	for (const auto& Attribute : AttributesDataAsset->Attribute)
	{
		for (const auto& Coefficient : Attribute.Value.StatsCoefficients)
		{
			if (Coefficient.Key == Stat) return Coefficient.Value;
		}
	}
	return 0.f;
}


TArray<EStats> UAttributesComponent::GetRelatedStats(EAttributes Attribute)
{
	TArray<EStats> RelatedStats;
	if (!AttributesDataAsset) return RelatedStats;
	for (const auto& Attr : AttributesDataAsset->Attribute)
	{
		if (Attr.Key == Attribute)
		{
			for (const auto& Stats : Attr.Value.StatsCoefficients)
			{
				RelatedStats.Add(Stats.Key);
			}
		}
	}
	return RelatedStats;
}


void UAttributesComponent::SetAttributeValue(EAttributes Attribute, const int Value){	Attributes[Attribute] = Value;}

FString UAttributesComponent::GetAttributeName(EAttributes Attribute) const{return UEnum::GetValueAsString(Attribute); }

TArray<TEnumAsByte<EAttributes>>& UAttributesComponent::GetAttributes(){return ArrAttributes;}

int UAttributesComponent::GetAttributeValue(EAttributes Attribute) const{return Attributes[Attribute];}