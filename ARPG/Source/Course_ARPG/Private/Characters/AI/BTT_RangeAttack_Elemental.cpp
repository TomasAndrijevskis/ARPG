
#include "Characters/AI/BTT_RangeAttack_Elemental.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Enemy/Minion_Elemental.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/EnemyProjectileComponent.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_RangeAttack_Elemental::UBTT_RangeAttack_Elemental()
{
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_RangeAttack_Elemental::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	if (!ControllerRef) return EBTNodeResult::Failed;
	CharacterRef = ControllerRef->GetCharacter();
	if (!CharacterRef) return EBTNodeResult::Failed;
	FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());
	if (!FighterRef) return EBTNodeResult::Failed;
	CheckDistance();
	Attack();
	return EBTNodeResult::Succeeded;
}


EBTNodeResult::Type UBTT_RangeAttack_Elemental::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (ControllerRef) ControllerRef->StopMovement();
	return Super::AbortTask(OwnerComp, NodeMemory);
}


void UBTT_RangeAttack_Elemental::CheckDistance()
{
	if (!PlayerRef || !CharacterRef || !ControllerRef || !FighterRef) return;
	PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	const FVector PlayerLocation = PlayerRef->GetActorLocation();
	AEnemyCharacter* EnemyCharacterRef = Cast<AEnemyCharacter>(CharacterRef);
	if (!EnemyCharacterRef) return;
	const float SightRadius = EnemyCharacterRef->GetSightRadius();
	const float CurrentDistance = ControllerRef->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (CurrentDistance >= SightRadius)
		ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GoingBack);
	else
	{
		if (CurrentDistance > FighterRef->GetRangeDistance()) MoveToPlayer(FighterRef->GetRangeDistance(), PlayerLocation);
	}
}


void UBTT_RangeAttack_Elemental::Attack() const
{
	if (!CharacterRef || !ControllerRef) return;
	Cast<AMinion_Elemental>(CharacterRef)->ProjectileComp->SpawnProjectile();
	int CurrentHitCount = ControllerRef->GetBlackboardComponent()->GetValueAsInt(TEXT("HitCount"));
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), CurrentHitCount + 1);
}


void UBTT_RangeAttack_Elemental::MoveToPlayer(const float AcceptableDistance, const FVector& PlayerLocation) const
{
	if (!ControllerRef || !PlayerRef) return;
	FAIMoveRequest MoveRequest = PlayerLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableDistance);
	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
}