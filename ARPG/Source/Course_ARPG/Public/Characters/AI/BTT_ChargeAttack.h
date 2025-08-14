
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_ChargeAttack.generated.h"


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

	AAIController* ControllerRef;
	
	ACharacter* CharacterRef;
	
	class UBossAnimInstance_Base* BossAnimInstance;
	
	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 100.0f;

	FScriptDelegate MoveCompletedDelegate;

	float OriginalWalkSpeed;
	
	UPROPERTY(EditAnywhere)
	float ChargeSpeedMultiplier;

	bool bIsFinished = false;
	
};
