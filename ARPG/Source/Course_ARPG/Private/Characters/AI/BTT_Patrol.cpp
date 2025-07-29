
#include "Characters/AI/BTT_Patrol.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/EEnemyStates.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_Patrol::UBTT_Patrol()
{
	bNotifyTick = true;
	bCreateNodeInstance = true;
	MoveForwardDelegate.BindUFunction(this, "HandlePatrolCompleted");
	MoveBackwardDelegate.BindUFunction(this, "Patrol");
}


EBTNodeResult::Type UBTT_Patrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	StartLocation = CharacterRef->GetActorLocation();
	
	OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), StartLocation);
	Patrol();
	return EBTNodeResult::InProgress;
}


void UBTT_Patrol::Patrol()
{
	FVector ForwardDirection = CharacterRef->GetActorForwardVector();
	FVector TargetLocation = StartLocation + ForwardDirection * 1000.0f;;
	FAIMoveRequest MoveRequest = TargetLocation;
	MoveRequest.SetUsePathfinding(true);

	ControllerRef->MoveTo(MoveRequest);

	ControllerRef->ReceiveMoveCompleted.Remove(MoveBackwardDelegate);
	ControllerRef->ReceiveMoveCompleted.AddUnique(MoveForwardDelegate);
}


void UBTT_Patrol::HandlePatrolCompleted()
{
	FAIMoveRequest MoveRequest = StartLocation;
	MoveRequest.SetUsePathfinding(true);

	if (!ControllerRef)
	{
		return;
	}
	bool bIsPatrolling = ControllerRef->GetBlackboardComponent()->GetValueAsBool(TEXT("IsPatrolling"));
	if (!bIsPatrolling)
	{
		return;
	}
	
	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->ReceiveMoveCompleted.Remove(MoveForwardDelegate);
	ControllerRef->ReceiveMoveCompleted.AddUnique(MoveBackwardDelegate);
	
}

EBTNodeResult::Type UBTT_Patrol::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (IsValid(ControllerRef))
	{
		ControllerRef->StopMovement();
		ControllerRef->ReceiveMoveCompleted.Remove(MoveBackwardDelegate);
		ControllerRef->ReceiveMoveCompleted.Remove(MoveForwardDelegate);
	}
	return EBTNodeResult::Aborted;
}


/*void UBTT_Patrol::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	bool bIsPatrolling = OwnerComp.GetBlackboardComponent()->GetValueAsBool(TEXT("IsPatrolling"));
	if (!bIsPatrolling)
	{
		if (IsValid(ControllerRef))
		{
			ControllerRef->StopMovement();
			ControllerRef->ReceiveMoveCompleted.Remove(MoveBackwardDelegate);
			ControllerRef->ReceiveMoveCompleted.Remove(MoveForwardDelegate);
		}
		FinishLatentTask(OwnerComp, EBTNodeResult::Aborted);
	}
}*/

