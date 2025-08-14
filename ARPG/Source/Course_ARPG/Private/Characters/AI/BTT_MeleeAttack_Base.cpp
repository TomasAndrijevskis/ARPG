
#include "Characters/AI/BTT_MeleeAttack_Base.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Interfaces/Fighter.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_MeleeAttack_Base::UBTT_MeleeAttack_Base()
{
	MoveDelegate.BindUFunction(this,"FinishAttackTask");
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


void UBTT_MeleeAttack_Base::FinishAttackTask()
{
	bIsFinished = true;
}


EBTNodeResult::Type UBTT_MeleeAttack_Base::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	bIsFinished = false;
	float Distance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));

	ControllerRef = OwnerComp.GetAIOwner();
	if (Distance > AttackRadius)
	{
		APawn* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
		FAIMoveRequest MoveRequest = PlayerRef;
		MoveRequest.SetUsePathfinding(true);
		MoveRequest.SetAcceptanceRadius(AcceptableRadius);

		ControllerRef->ReceiveMoveCompleted.AddUnique(MoveDelegate);
		
		ControllerRef->MoveTo(MoveRequest);
		ControllerRef->SetFocus(PlayerRef);
	}
	else
	{
		IFighter* FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());
		FighterRef->Attack();

		FTimerHandle AttackTimerHandle;
		ControllerRef->GetCharacter()->GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &UBTT_MeleeAttack_Base::FinishAttackTask,
			FighterRef->GetAnimDuration() - FighterRef->GetAttackAnimReductionTime(), false);
	}
	return EBTNodeResult::InProgress;
}


void UBTT_MeleeAttack_Base::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	float Distance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));

	IFighter* FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());
	if (Distance > FighterRef->GetMeleeRange())
	{
		//HandleRangeAttack(OwnerComp);
		AbortTask(OwnerComp, NodeMemory);
		FinishLatentTask(OwnerComp, EBTNodeResult::Aborted);
		ControllerRef->StopMovement();
		ControllerRef->ClearFocus(EAIFocusPriority::Gameplay);
		ControllerRef->ReceiveMoveCompleted.Remove(MoveDelegate);
	}
	if (!bIsFinished)
	{
		return;
	}
	
	OwnerComp.GetAIOwner()->ReceiveMoveCompleted.Remove(MoveDelegate);
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}


EBTNodeResult::Type UBTT_MeleeAttack_Base::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef->StopMovement();
	return Super::AbortTask(OwnerComp, NodeMemory);
}