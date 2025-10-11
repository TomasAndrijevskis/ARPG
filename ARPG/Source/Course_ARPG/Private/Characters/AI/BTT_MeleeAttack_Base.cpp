
#include "Characters/AI/BTT_MeleeAttack_Base.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"
#include "Interfaces/Fighter.h"
#include "GameFramework/Character.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_MeleeAttack_Base::UBTT_MeleeAttack_Base()
{
	MoveDelegate.BindUFunction(this,"FinishMove");
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_MeleeAttack_Base::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	CachedNodeMemory = NodeMemory;
	CachedOwnerComp = &OwnerComp;
	ControllerRef = OwnerComp.GetAIOwner();
	FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());

	CheckDistance();
	return EBTNodeResult::InProgress;
}


void UBTT_MeleeAttack_Base::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	float Distance = CachedOwnerComp->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (Distance >= FighterRef->GetMeleeRange())
	{
		AbortTask(*CachedOwnerComp, CachedNodeMemory);
		FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Aborted);
		ControllerRef->StopMovement();
		ControllerRef->ClearFocus(EAIFocusPriority::Gameplay);
		ControllerRef->ReceiveMoveCompleted.Remove(MoveDelegate);
	}
	if (!bIsAttackFinished)
	{
		return;
	}
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}


EBTNodeResult::Type UBTT_MeleeAttack_Base::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef->StopMovement();
	return Super::AbortTask(OwnerComp, NodeMemory);
}


void UBTT_MeleeAttack_Base::Attack()
{
	if (bCanAttack)
	{
		bIsAttackFinished = false;
		bCanAttack = false;
		FighterRef->Attack();
		FTimerHandle AttackTimerHandle;
		ControllerRef->GetCharacter()->GetWorldTimerManager().SetTimer(
			AttackTimerHandle, this, &UBTT_MeleeAttack_Base::FinishAttack, FighterRef->GetAnimDuration() - FighterRef->GetAttackAnimReductionTime(), false);
	}
}


void UBTT_MeleeAttack_Base::FinishAttack()
{
	bIsAttackFinished = true;
	bCanAttack = true;
	int CurrentHitCount = ControllerRef->GetBlackboardComponent()->GetValueAsInt(TEXT("HitCount"));
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), CurrentHitCount + 1);
	if (!ControllerRef->GetBlackboardComponent()->GetValueAsBool(TEXT("AttackedOnce")))
	{
		ControllerRef->GetBlackboardComponent()->SetValueAsBool(TEXT("AttackedOnce"), true);
	}
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}


void UBTT_MeleeAttack_Base::FinishMove() const
{
	ControllerRef->ReceiveMoveCompleted.Remove(MoveDelegate);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}


void UBTT_MeleeAttack_Base::CheckDistance()
{
	bIsAttackFinished = false;
	float Distance = CachedOwnerComp->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (Distance > AttackRadius)
	{
		MoveToPlayer();
	}
	else
	{
		bCanAttack = true;
		Attack();
	}
}


void UBTT_MeleeAttack_Base::MoveToPlayer() const
{
	APawn* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	FAIMoveRequest MoveRequest = PlayerRef;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);

	ControllerRef->ReceiveMoveCompleted.AddUnique(MoveDelegate);
		
	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
}
