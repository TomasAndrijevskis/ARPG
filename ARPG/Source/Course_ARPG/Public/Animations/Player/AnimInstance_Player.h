
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstance_Player.generated.h"


class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UAnimInstance_Player : public UAnimInstance
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void HandleUpdatedTarget(AActor* NewTargetActorRef);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBlocking = false;
	
protected:
	
	virtual void NativeBeginPlay() override;

	UFUNCTION(BlueprintCallable)
	virtual void HandleLongRangeAttack(){};
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentSpeed = 0.0f ;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsInCombat = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentDirection = 0.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMoving = false;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
private:

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void UpdateSpeed();

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void HandleResetAttack() const;

	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void UpdateDirection();
};
