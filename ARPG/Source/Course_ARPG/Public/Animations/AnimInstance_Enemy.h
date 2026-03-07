
#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimInstance_Enemy.generated.h"


class AEnemyCharacter;

UCLASS()
class COURSE_ARPG_API UAnimInstance_Enemy : public UAnimInstance
{
	GENERATED_BODY()

public:

	virtual void NativeBeginPlay() override;

	virtual void NativeUpdateAnimation(const float DeltaSeconds) override;
	
protected:

	UFUNCTION(BlueprintCallable)
	void HandleResetAttack() const;

	UFUNCTION(BlueprintCallable)
	void UpdateSpeed();
	
	UPROPERTY(BlueprintReadOnly, EditAnywhere)
	float CurrentSpeed = 0.0f;

	UPROPERTY()
	AEnemyCharacter* PawnRef;
};
