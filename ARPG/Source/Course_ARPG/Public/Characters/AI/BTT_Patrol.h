
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_Patrol.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_Patrol : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_Patrol();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UFUNCTION()
	void Patrol();

	UFUNCTION()
	void HandlePatrolCompleted();

protected:

	//virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;

	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:
	
	
	AAIController* ControllerRef;
	
	ACharacter* CharacterRef;
	
	FVector StartLocation;

	//bool bIsFinished;
	
	FScriptDelegate MoveForwardDelegate;

	FScriptDelegate MoveBackwardDelegate;
};
