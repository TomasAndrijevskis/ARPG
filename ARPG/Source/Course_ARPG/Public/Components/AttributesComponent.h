
#pragma once

#include "CoreMinimal.h"
#include "Characters/Data/EAttributes.h"
#include "Components/ActorComponent.h"
#include "AttributesComponent.generated.h"


DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributeUpgraded, int);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	void SetAttributeValue(const EAttributes& Attribute, const int Value);

	int GetAttributeValue(const EAttributes& Attribute) const;

	int GetAttributeCoefficient(const EAttributes& Attribute) const;
	
	void UpgradeAttribute(const EAttributes& Attribute);

	FString GetAttributeName(const EAttributes& Attribute) const;
	
	TArray<TEnumAsByte<EAttributes>>& GetAttributes();
	
	FOnAttributeUpgraded OnAttributeUpgradedDelegate;

protected:

	virtual void BeginPlay() override;
	
private:
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, int> Attributes;

	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, int> AttributeCoefficients;
	
	UPROPERTY(EditDefaultsOnly)
	UDataAsset* DefaultAttributesDataAsset;

	TArray<TEnumAsByte<EAttributes>> ArrAttributes;
};