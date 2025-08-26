
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_RangeAttack_Fey.generated.h"


class IFighter;

UCLASS()
class COURSE_ARPG_API UBTT_RangeAttack_Fey : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_RangeAttack_Fey();

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
private:

	void CheckDistance();

	UFUNCTION()
	void Attack();

	UFUNCTION()
	void Move();

	UFUNCTION()
	void FinishMove();

	UFUNCTION()
	void FinishAttack();
	
	AAIController* ControllerRef;

	ACharacter* CharacterRef;

	IFighter* FighterRef;

	UBehaviorTreeComponent* CachedOwnerComp;

	uint8* CachedNodeMemory;

	FScriptDelegate MoveDelegate;

	bool bCanAttack = false;

	bool bIsAttackFinished;
};
