
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_HitCounter.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_HitCounter : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UBTT_HitCounter(){};
	
protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

	AAIController* ControllerRef;
};
