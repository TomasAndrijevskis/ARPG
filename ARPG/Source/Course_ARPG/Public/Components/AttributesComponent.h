
#pragma once

#include "CoreMinimal.h"
#include "Data/EAttributes.h"
#include "Components/ActorComponent.h"
#include "Data/EStats.h"
#include "AttributesComponent.generated.h"


class UAttributesData;
class UDefaultAttributesData;
DECLARE_MULTICAST_DELEGATE_OneParam(FOnAttributeUpgraded, int);
DECLARE_MULTICAST_DELEGATE(FOnAttributesReverted);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	void SetAttributeValue(EAttributes Attribute, const int Value);

	int GetAttributeValue(EAttributes Attribute) const;
	
	void UpgradeAttribute(EAttributes Attribute);

	void SetDefaultAttributes();
	
	FString GetAttributeName(EAttributes Attribute) const;
	
	TArray<TEnumAsByte<EAttributes>>& GetAttributes();

	FString GetAttributeDescription(EStats Stat);
	
	FOnAttributeUpgraded OnAttributeUpgradedDelegate;

	FOnAttributesReverted OnAttributesRevertedDelegate;

	float GetStatScalingCoefficient(EStats Stat);

	TArray<EStats> GetRelatedStats(EAttributes Attribute);
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	UPROPERTY(EditDefaultsOnly)
	TMap<TEnumAsByte<EAttributes>, int> Attributes;
	
	UPROPERTY(EditDefaultsOnly)
	UDefaultAttributesData* DefaultAttributesDataAsset;

	UPROPERTY(EditDefaultsOnly)
	UAttributesData* AttributesDataAsset;
	
	TArray<TEnumAsByte<EAttributes>> ArrAttributes;
};