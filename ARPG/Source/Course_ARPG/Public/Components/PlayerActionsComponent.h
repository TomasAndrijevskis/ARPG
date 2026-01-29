
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerActionsComponent.generated.h"


class IMainPlayer;
class AMainCharacter_Base;
class UCharacterMovementComponent;

DECLARE_MULTICAST_DELEGATE_OneParam(FOnSprint, float);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnRoll, float);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class COURSE_ARPG_API UPlayerActionsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UFUNCTION(BlueprintCallable)
	void Sprint();

	UFUNCTION(BlueprintCallable)
	void Walk() const;

	UFUNCTION(BlueprintCallable)
	void Roll();

	bool CanRoll() const;

	void SetCanRoll(const bool CanRoll);

	bool IsRollActive() const;
	
	FOnSprint OnSprintDelegate;
	
	FOnRoll OnRollDelegate;

	UPROPERTY(EditAnywhere)
	UAnimMontage* RollAnimMontage;
	
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
