
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BlockComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnBlockSignature, UBlockComponent, OnBlockDelegate, float, Cost);
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UBlockComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	bool CanBlock(const AActor* Opponent);

	UPROPERTY()
	FOnBlockSignature OnBlockDelegate;

private:

	UPROPERTY(EditAnywhere)
	float StaminaCost = 10.0f;

	UPROPERTY(EditAnywhere)
	UAnimMontage* BlockAnimMontage;
};
