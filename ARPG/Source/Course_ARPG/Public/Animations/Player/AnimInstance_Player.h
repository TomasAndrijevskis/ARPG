
#pragma once

#include "CoreMinimal.h"
#include "Animations/AnimInstance_Base.h"
#include "AnimInstance_Player.generated.h"


class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UAnimInstance_Player : public UAnimInstance_Base
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable)
	void HandleUpdatedTarget(AActor* NewTargetActorRef);

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool bIsBlocking = false;
	
protected:

	virtual void UpdateSpeed() override;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsInCombat = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float CurrentDirection = 0.0f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsMoving = false;

private:
	
	UFUNCTION(BlueprintCallable, meta = (AllowPrivateAccess = true))
	void UpdateDirection();
};
