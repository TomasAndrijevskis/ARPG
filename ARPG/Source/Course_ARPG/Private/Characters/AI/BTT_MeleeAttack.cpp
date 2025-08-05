
#include "Characters/AI/BTT_MeleeAttack.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Characters/AI/EEnemyStates.h"
#include "Navigation/PathFollowingComponent.h"
#include "Interfaces/Fighter.h"
#include "GameFramework/Character.h"


UBTT_MeleeAttack::UBTT_MeleeAttack()
{
	MoveDelegate.BindUFunction(this,"FinishAttackTask");
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


void UBTT_MeleeAttack::FinishAttackTask()
{
	bIsFinished = true;
	
}


EBTNodeResult::Type UBTT_MeleeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
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

		FTimerHandle AttackTimerHandle; // -.3 сек на 2 фазе будет норм, но стоит добавить счетчик ударов - допустим 5 после которых будет перерыв на секунду
		ControllerRef->GetCharacter()->GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &UBTT_MeleeAttack::FinishAttackTask,
			FighterRef->GetAnimDuration() - FighterRef->GetAttackAnimReductionTime(), false);
	}
	return EBTNodeResult::InProgress;
}


void UBTT_MeleeAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	float Distance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));

	IFighter* FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());
	if (Distance > FighterRef->GetMeleeRange())
	{
		HandleRangeAttack(OwnerComp);
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


void UBTT_MeleeAttack::HandleRangeAttack(UBehaviorTreeComponent& OwnerComp)
{
	if (bHasRangeAttack)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
	}
	else
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GoingBack);
	}
}