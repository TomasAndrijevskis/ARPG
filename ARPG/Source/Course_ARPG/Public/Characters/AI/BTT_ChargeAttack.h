

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
	
private:

	AAIController* ControllerRef;
	ACharacter* CharacterRef;
	class UBossAnimInstance* BossAnimInstance;
	
	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 100.0f;

	FScriptDelegate MoveCompletedDelegate;

	float OriginalWalkSpeed;
	UPROPERTY(EditAnywhere)
	float ChargeWalkSpeed = 2000.0f;

	bool bIsFinished = false;

protected:

	virtual void TickTask ( UBehaviorTreeComponent & OwnerComp,  uint8* NodeMemory,  float DeltaSeconds) override;
};
