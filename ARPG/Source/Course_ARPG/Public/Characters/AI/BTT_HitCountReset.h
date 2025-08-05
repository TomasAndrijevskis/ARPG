
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_HitCountReset.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_HitCountReset : public UBTTaskNode
{
	GENERATED_BODY()

public:
	
	UBTT_HitCountReset(){};


protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

	void FinishTask();

	UBehaviorTreeComponent* MyOwnerComp;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* AnimMontage;
	
	AAIController* ControllerRef;
};
