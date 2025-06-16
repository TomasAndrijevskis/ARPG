
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

	UBlockComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	bool Check(AActor* Opponent);

	UPROPERTY(BlueprintAssignable)
	FOnBlockSignature OnBlockDelegate;

protected:

	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere)
	float StaminaCost = 10.0f;

	UPROPERTY(EditAnywhere)
	UAnimMontage* BlockAnimMontage;
};
