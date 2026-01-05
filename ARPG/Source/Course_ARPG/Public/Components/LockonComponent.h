
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "LockonComponent.generated.h"


class UCharacterMovementComponent;
class USpringArmComponent;

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnUpdatedTargetSignature, ULockonComponent, OnUpdatedTargetDelegate, AActor*, NewTargetActorRef);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API ULockonComponent : public UActorComponent
{
	GENERATED_BODY()


public:	
	
	ULockonComponent();

	void EndLockon();

	bool IsLocked() const;
	
	UPROPERTY()
	AActor* CurrentTargetActor;

	UPROPERTY()
	FOnUpdatedTargetSignature OnUpdatedTargetDelegate;
	
protected:
	
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void StartLockon(const float Radius);

	UFUNCTION(BlueprintCallable)
	void ToggleLockon(const float Radius);

	UPROPERTY(EditAnywhere)
	float BreakDistance = 1000.f;

private:

	UPROPERTY()
	ACharacter* OwnerRef;

	UPROPERTY()
	APlayerController* Controller;

	UPROPERTY()
	UCharacterMovementComponent* MovementComponent;

	UPROPERTY()
	USpringArmComponent* SpringArmComponent;

	bool bIsLocked = false;
};
