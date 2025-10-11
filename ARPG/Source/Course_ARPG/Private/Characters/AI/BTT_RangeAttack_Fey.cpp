
#include "Characters/AI/BTT_RangeAttack_Fey.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Boss_Fey.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_RangeAttack_Fey::UBTT_RangeAttack_Fey()
{
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_RangeAttack_Fey::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	if (!IsValid(CharacterRef))
	{
		return EBTNodeResult::Failed;
	}
	
	FighterRef = Cast<IFighter>(CharacterRef);
	Attack();
	CheckDistance();
	return EBTNodeResult::Succeeded;
}


EBTNodeResult::Type UBTT_RangeAttack_Fey::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (IsValid(ControllerRef))
	{
		ControllerRef->StopMovement();
	}
	return Super::AbortTask(OwnerComp, NodeMemory);
}


void UBTT_RangeAttack_Fey::CheckDistance()
{
	PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	FVector PlayerLocation = PlayerRef->GetActorLocation();
	float CurrentDistance = ControllerRef->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (CurrentDistance > FighterRef->GetRangeDistance())
	{
		MoveToPlayer(FighterRef->GetRangeDistance(), PlayerLocation);
	}
}


void UBTT_RangeAttack_Fey::Attack() const
{
	if (FighterRef)
	{
		FighterRef->Attack();
		int CurrentHitCount = ControllerRef->GetBlackboardComponent()->GetValueAsInt(TEXT("HitCount"));
		ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), CurrentHitCount + 1);
	}
}


void UBTT_RangeAttack_Fey::MoveToPlayer(const float AcceptableDistance, const FVector& PlayerLocation) const
{
	FAIMoveRequest MoveRequest = PlayerLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableDistance);

	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
	
}



