
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
	void PatrolForward();

	UFUNCTION()
	void PatrolBackward();

protected:
	
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:

	UFUNCTION()
	void DelayPatrol(const FVector& TargetLocation, const bool bDirectionForward) const;

	float GetRandomWaitDuration() const;

	float GetRandomPatrolDistance() const;

	UPROPERTY(EditAnywhere)
	float MinWaitDuration;

	UPROPERTY(EditAnywhere)
	float MaxWaitDuration;

	UPROPERTY(EditAnywhere)
	float MinPatrolDistance;

	UPROPERTY(EditAnywhere)
	float MaxPatrolDistance;

	UPROPERTY()
	AAIController* ControllerRef;

	UPROPERTY()
	ACharacter* CharacterRef;
	
	FVector StartLocation;
	
	FScriptDelegate MoveForwardDelegate;

	FScriptDelegate MoveBackwardDelegate;
};
