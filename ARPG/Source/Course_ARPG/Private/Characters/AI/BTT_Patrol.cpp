
#include "Characters/AI/BTT_Patrol.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_Patrol::UBTT_Patrol()
{
	bNotifyTick = true;
	bCreateNodeInstance = true;
	MoveForwardDelegate.BindUFunction(this, "PatrolForward");
	MoveBackwardDelegate.BindUFunction(this, "PatrolBackward");
}


EBTNodeResult::Type UBTT_Patrol::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	StartLocation = CharacterRef->GetActorLocation();
	
	OwnerComp.GetBlackboardComponent()->SetValueAsVector(TEXT("StartLocation"), StartLocation);
	PatrolForward();
	return EBTNodeResult::InProgress;
}


void UBTT_Patrol::PatrolForward()
{
	if (!ControllerRef)
	{
		return;
	}
	bool bIsPatrolling = ControllerRef->GetBlackboardComponent()->GetValueAsBool(TEXT("IsPatrolling"));
	if (!bIsPatrolling)
	{
		return;
	}
	FVector ForwardDirection = CharacterRef->GetActorForwardVector();
	FVector TargetLocation = StartLocation + ForwardDirection * GetRandomPatrolDistance();
	FTimerDelegate DelayTimerDelegate;
	FTimerHandle DelayTimerHandle;
	DelayTimerDelegate.BindUFunction(this, FName("DelayPatrol"), TargetLocation, true);
	ControllerRef->GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, DelayTimerDelegate, GetRandomWaitDuration(), false);
}


void UBTT_Patrol::PatrolBackward()
{
	if (!ControllerRef)
	{
		return;
	}
	bool bIsPatrolling = ControllerRef->GetBlackboardComponent()->GetValueAsBool(TEXT("IsPatrolling"));
	if (!bIsPatrolling)
	{
		return;
	}
	FTimerDelegate DelayTimerDelegate;
	FTimerHandle DelayTimerHandle;
	DelayTimerDelegate.BindUFunction(this, FName("DelayPatrol"), StartLocation, false);
	ControllerRef->GetWorld()->GetTimerManager().SetTimer(DelayTimerHandle, DelayTimerDelegate, GetRandomWaitDuration(), false);
}


void UBTT_Patrol::DelayPatrol(FVector TargetLocation, bool bDirectionForward)
{
	FAIMoveRequest MoveRequest = TargetLocation;
	MoveRequest.SetUsePathfinding(true);
	ControllerRef->MoveTo(MoveRequest);
	if (bDirectionForward == true)
	{
		ControllerRef->ReceiveMoveCompleted.Remove(MoveForwardDelegate);
		ControllerRef->ReceiveMoveCompleted.AddUnique(MoveBackwardDelegate);
	}
	else
	{
		ControllerRef->ReceiveMoveCompleted.Remove(MoveBackwardDelegate);
		ControllerRef->ReceiveMoveCompleted.AddUnique(MoveForwardDelegate);
	}
	
}


EBTNodeResult::Type UBTT_Patrol::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UE_LOG(LogTemp, Error, TEXT("Patrol Abort"));
	if (IsValid(ControllerRef))
	{
		ControllerRef->StopMovement();
		ControllerRef->ReceiveMoveCompleted.Remove(MoveBackwardDelegate);
		ControllerRef->ReceiveMoveCompleted.Remove(MoveForwardDelegate);
	}
	return Super::AbortTask(OwnerComp, NodeMemory);
}



float UBTT_Patrol::GetRandomWaitDuration()
{
	return FMath::RandRange(MinWaitDuration, MaxWaitDuration);
}


float UBTT_Patrol::GetRandomPatrolDistance()
{
	return FMath::RandRange(MinPatrolDistance, MaxPatrolDistance);
}

