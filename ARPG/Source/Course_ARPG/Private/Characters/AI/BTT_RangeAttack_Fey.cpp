
#include "Characters/AI/BTT_RangeAttack_Fey.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Interfaces/Fighter.h"
#include "Kismet/GameplayStatics.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_RangeAttack_Fey::UBTT_RangeAttack_Fey()
{
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_RangeAttack_Fey::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	if (!ControllerRef) return EBTNodeResult::Failed;
	CharacterRef = ControllerRef->GetCharacter();
	if (!CharacterRef) return EBTNodeResult::Failed;
	FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());
	if (!FighterRef) return EBTNodeResult::Failed;
	PlayerRef = UGameplayStatics::GetPlayerPawn(this, 0);
	Attack();
	CheckDistance();
	return EBTNodeResult::Succeeded;
}


EBTNodeResult::Type UBTT_RangeAttack_Fey::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (ControllerRef) ControllerRef->StopMovement();
	return Super::AbortTask(OwnerComp, NodeMemory);
}


void UBTT_RangeAttack_Fey::CheckDistance()
{
	if (!PlayerRef || !FighterRef || !ControllerRef) return;
	PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	const FVector PlayerLocation = PlayerRef->GetActorLocation();
	const float CurrentDistance = ControllerRef->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (CurrentDistance > FighterRef->GetRangeDistance()) MoveToPlayer(FighterRef->GetRangeDistance(), PlayerLocation);
}


void UBTT_RangeAttack_Fey::Attack() const
{
	if (!FighterRef || !ControllerRef) return;
	FighterRef->Attack();
	int CurrentHitCount = ControllerRef->GetBlackboardComponent()->GetValueAsInt(TEXT("HitCount"));
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), CurrentHitCount + 1);
}


void UBTT_RangeAttack_Fey::MoveToPlayer(const float AcceptableDistance, const FVector& PlayerLocation) const
{
	if (!ControllerRef || !PlayerRef) return;
	FAIMoveRequest MoveRequest = PlayerLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableDistance);
	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
}