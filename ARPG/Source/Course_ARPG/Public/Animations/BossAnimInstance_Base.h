
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "BossAnimInstance_Base.generated.h"


class AEnemyCharacter_Base;

UCLASS()
class COURSE_ARPG_API UBossAnimInstance_Base : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeBeginPlay() override;

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
protected:

	UFUNCTION(BlueprintCallable)
	void HandleResetAttack();
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float CurrentSpeed = 0.0f;

	UFUNCTION(BlueprintCallable)
	void UpdateSpeed();

	AEnemyCharacter_Base* PawnRef;
};
