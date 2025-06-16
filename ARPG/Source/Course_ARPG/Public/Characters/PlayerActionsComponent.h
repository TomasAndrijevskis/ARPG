

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerActionsComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam( FOnSprintSignature, UPlayerActionsComponent, OnSprintDelegate, float, SprintStaminaCost);
DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_OneParam(FOnRollSignature, UPlayerActionsComponent, OnRollDelegate, float, RollStaminaCost);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UPlayerActionsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UPlayerActionsComponent();

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void Sprint();

	UFUNCTION(BlueprintCallable)
	void Walk();

	UFUNCTION(BlueprintCallable)
	void Roll();

	UFUNCTION()
	void FinishRollAnim();

	UPROPERTY(BlueprintAssignable)
	FOnSprintSignature OnSprintDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnRollSignature OnRollDelegate;

	bool bIsRollActive = false;

	UPROPERTY(EditAnywhere)
	UAnimMontage* RollAnimMontage;

	bool bCanRoll = true;
	
protected:

	virtual void BeginPlay() override;
	
private:

	class AMainCharacter* CharacterRef;
	
	class IMainPlayer* IPlayerRef;
	
	class UCharacterMovementComponent* MovementComp;

	UPROPERTY(EditAnywhere)
	float SprintCost = 0.1f;
	
	UPROPERTY(EditAnywhere)
	float SprintSpeed = 800.0f;
	
	UPROPERTY(EditAnywhere)
	float WalkSpeed = 500.0f;
	
	UPROPERTY(EditAnywhere)
	float RollCost = 5.0f;
	
};
