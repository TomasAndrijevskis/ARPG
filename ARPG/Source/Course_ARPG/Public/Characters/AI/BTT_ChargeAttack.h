
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ChargeAttack.generated.h"


class UAnimInstance_Enemy;

UCLASS()

class COURSE_ARPG_API UBTT_ChargeAttack : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_ChargeAttack();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	void ChargeAtPlayer();
	
	UFUNCTION()
	void HandleMoveCompleted();
	
	UFUNCTION()
	void FinishAttackTask();

protected:

	virtual void TickTask ( UBehaviorTreeComponent & OwnerComp,  uint8* NodeMemory,  float DeltaSeconds) override;

	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:

	UPROPERTY()
	AAIController* ControllerRef;

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY()
	UAnimInstance_Enemy* BossAnimInstance;
	
	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 100.0f;

	UPROPERTY(EditAnywhere)
	float ChargeSpeedMultiplier;
	
	FScriptDelegate MoveCompletedDelegate;

	float OriginalWalkSpeed;
	
	bool bIsFinished = false;
	
};
