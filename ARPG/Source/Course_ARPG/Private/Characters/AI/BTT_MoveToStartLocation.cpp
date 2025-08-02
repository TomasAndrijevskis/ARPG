
#include "Characters/AI/BTT_MoveToStartLocation.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/AI/EEnemyStates.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_MoveToStartLocation::UBTT_MoveToStartLocation()
{
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_MoveToStartLocation::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	CachedOwnerComp = &OwnerComp;
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	FVector StartLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector(TEXT("StartLocation"));
	
	GoBack(StartLocation);
	return EBTNodeResult::InProgress;
}


void UBTT_MoveToStartLocation::GoBack(FVector TargetLocation)
{
	FAIMoveRequest MoveRequest = TargetLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);
	if (ControllerRef)
	{
		ControllerRef->MoveTo(MoveRequest);
		ControllerRef->ReceiveMoveCompleted.RemoveDynamic(this, &UBTT_MoveToStartLocation::OnMoveCompleted);
		ControllerRef->ReceiveMoveCompleted.AddDynamic(this, &UBTT_MoveToStartLocation::OnMoveCompleted);
	}
	
}


void UBTT_MoveToStartLocation::OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	if (Result == EPathFollowingResult::Success)
	{
		ControllerRef->ReceiveMoveCompleted.RemoveDynamic(this, &UBTT_MoveToStartLocation::OnMoveCompleted);
		ChangeState();
	}
}

void UBTT_MoveToStartLocation::ChangeState()
{
	ControllerRef -> GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Patrol);
	ControllerRef -> GetBlackboardComponent()->SetValueAsBool(TEXT("IsPatrolling"), true);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}

