
#include "Characters/AI/BTT_RangeAttack_Fey.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Boss_Fey.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_RangeAttack_Fey::UBTT_RangeAttack_Fey()
{
	MoveDelegate.BindUFunction(this,"FinishMove");
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_RangeAttack_Fey::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	CachedOwnerComp = &OwnerComp;
	CachedNodeMemory = NodeMemory;
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	if (!IsValid(CharacterRef))
	{
		return EBTNodeResult::Failed;
	}
	FighterRef = Cast<IFighter>(CharacterRef);
	CheckDistance();
	return EBTNodeResult::InProgress;
}


EBTNodeResult::Type UBTT_RangeAttack_Fey::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef->StopMovement();
	return Super::AbortTask(OwnerComp, NodeMemory);
}


void UBTT_RangeAttack_Fey::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	float Distance = CachedOwnerComp->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (Distance < FighterRef->GetRangeDistance())
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


void UBTT_RangeAttack_Fey::CheckDistance()
{
	UE_LOG(LogTemp, Warning, TEXT("Check"));
	bIsAttackFinished = false;
	float Distance = CachedOwnerComp->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (Distance > FighterRef->GetRangeDistance())
	{
		UE_LOG(LogTemp, Warning, TEXT("Move"));
		Move();
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Attack"));
		bCanAttack = true;
		Attack();
	}
}


void UBTT_RangeAttack_Fey::Attack()
{
	UE_LOG(LogTemp, Warning, TEXT("attack task"));
	if (bCanAttack)
	{
		bCanAttack = false;
		bIsAttackFinished = false;
		FighterRef->Attack();
		FTimerHandle TimerHandle;
		float AnimDuration = FighterRef->GetAnimDuration();
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, this , &UBTT_RangeAttack_Fey::FinishAttack, AnimDuration / 2, false); //Animation is too long
	}
}


void UBTT_RangeAttack_Fey::FinishAttack()
{
	bIsAttackFinished = true;
	bCanAttack = true;
	int CurrentHitCount = CachedOwnerComp->GetBlackboardComponent()->GetValueAsInt(TEXT("HitCount"));
	CachedOwnerComp->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), CurrentHitCount + 1);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}


void UBTT_RangeAttack_Fey::Move()
{
	APawn* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	FAIMoveRequest MoveRequest = PlayerRef;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(FighterRef->GetRangeDistance() - 200); // Fey does not come exactly at this distance
	
	ControllerRef->ReceiveMoveCompleted.AddUnique(MoveDelegate);
	
	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
}


void UBTT_RangeAttack_Fey::FinishMove()
{
	ControllerRef->ReceiveMoveCompleted.Remove(MoveDelegate);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}


