
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerActionsComponent.generated.h"

class IMainPlayer;
class AMainCharacter_Base;
class UCharacterMovementComponent;

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnSprintSignature, UPlayerActionsComponent, OnSprintDelegate, float, SprintStaminaCost);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnRollSignature, UPlayerActionsComponent, OnRollDelegate, float, RollStaminaCost);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UPlayerActionsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UPlayerActionsComponent(){};
	
	UFUNCTION(BlueprintCallable)
	void Sprint();

	UFUNCTION(BlueprintCallable)
	void Walk();

	UFUNCTION(BlueprintCallable)
	void Roll();
	
	UPROPERTY(BlueprintAssignable)
	FOnSprintSignature OnSprintDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnRollSignature OnRollDelegate;

	UPROPERTY(EditAnywhere)
	UAnimMontage* RollAnimMontage;

	bool GetCanRoll();

	void SetCanRoll(bool CanRoll);

	bool IsRollActive();
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	UFUNCTION()
	void FinishRollAnim();

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY()
	UCharacterMovementComponent* MovementComp;

	UPROPERTY(EditAnywhere)
	float SprintCost = 0.1f;
	
	UPROPERTY(EditAnywhere)
	float SprintSpeed = 800.0f;
	
	UPROPERTY(EditAnywhere)
	float WalkSpeed = 500.0f;
	
	UPROPERTY(EditAnywhere)
	float RollCost = 5.0f;

	IMainPlayer* IPlayerRef;
	
	bool bCanRoll = true;
	
	bool bIsRollActive = false;
};
