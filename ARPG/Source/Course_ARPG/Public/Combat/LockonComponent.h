
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockonComponent.generated.h"


DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnUpdatedTargetSignature, ULockonComponent, OnUpdatedTargetDelegate, AActor*, NewTargetActorRef);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API ULockonComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	
	ULockonComponent();

	AActor* CurrentTargetActor;

	UPROPERTY(BlueprintAssignable)
	FOnUpdatedTargetSignature OnUpdatedTargetDelegate;
	
	void EndLockon();
	
protected:
	
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void StartLockon(float Radius = 750.f);

	UFUNCTION(BlueprintCallable)
	void ToggleLockon(float Radius = 750.f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float BreakDistance = 1000.f;

private:

	ACharacter* OwnerRef;
	
	APlayerController* Controller;
	
	class UCharacterMovementComponent* MovementComponent;
	
	class USpringArmComponent* SpringArmComponent;
		
};
