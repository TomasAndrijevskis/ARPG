
#pragma once

#include "CoreMinimal.h"
#include "Characters/Data/EAttributes.h"
#include "Components/ActorComponent.h"
#include "AttributesComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UAttributesComponent : public UActorComponent
{
	GENERATED_BODY()

public:	

	void SetAttributeValue(const EAttributes& Attribute, const int Value);

	int GetAttributeValue(const EAttributes& Attribute) const;

private:

	UPROPERTY(EditAnywhere)
	TMap<TEnumAsByte<EAttributes>, int> Attributes;
};