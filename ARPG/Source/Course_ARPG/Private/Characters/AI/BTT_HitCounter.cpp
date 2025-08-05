
#include "Characters/AI/BTT_HitCounter.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"


EBTNodeResult::Type UBTT_HitCounter::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	int CurrentHitCount = ControllerRef->GetBlackboardComponent()->GetValueAsInt(TEXT("HitCount"));
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), CurrentHitCount + 1);
	return EBTNodeResult::Succeeded;
}
