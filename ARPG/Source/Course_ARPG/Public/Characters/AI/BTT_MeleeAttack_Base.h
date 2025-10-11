
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_MeleeAttack_Base.generated.h"


class IFighter;

UCLASS()
class COURSE_ARPG_API UBTT_MeleeAttack_Base : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_MeleeAttack_Base();

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY()
	AAIController* ControllerRef;

	IFighter* FighterRef;
	
private:

	UFUNCTION()
	void FinishAttack();

	UFUNCTION()
	void FinishMove() const;
	
	void Attack();
	
	void CheckDistance();
	
	void MoveToPlayer() const;
	
	UPROPERTY(EditAnywhere)
	float AttackRadius = 200.0f;

	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 100.0f;

	UPROPERTY()
	UBehaviorTreeComponent* CachedOwnerComp;
	
	FScriptDelegate MoveDelegate;
	
	uint8* CachedNodeMemory;

	bool bCanAttack = false;

	bool bIsAttackFinished;
};
