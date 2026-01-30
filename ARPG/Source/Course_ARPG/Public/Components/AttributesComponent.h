
#pragma once

#include "CoreMinimal.h"
#include "Data/EAttributes.h"
#include "Components/ActorComponent.h"
#include "AttributesComponent.generated.h"


class UDefaultAttributesDataAsset;
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributeUpgraded, int);
DECLARE_MULTICAST_DELEGATE(FOnAttributesReverted);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	void SetAttributeValue(const EAttributes& Attribute, const int Value);

	int GetAttributeValue(const EAttributes& Attribute) const;
	
	int GetAttributeCoefficient(const EAttributes& Attribute) const;
	
	void UpgradeAttribute(const EAttributes& Attribute);

	void SetDefaultAttributes();

	void SetDefaultCoefficients();
	
	FString GetAttributeName(const EAttributes& Attribute) const;
	
	TArray<TEnumAsByte<EAttributes>>& GetAttributes();

	FString GetAttributeDescription(const EAttributes& Attribute) const;
	
	FOnAttributeUpgraded OnAttributeUpgradedDelegate;

	FOnAttributesReverted OnAttributesRevertedDelegate;
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, int> Attributes;

	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, int> AttributeCoefficients;
	
	UPROPERTY(EditDefaultsOnly)
	UDefaultAttributesDataAsset* DefaultAttributesDataAsset;

	TArray<TEnumAsByte<EAttributes>> ArrAttributes;
};