
#include "Characters/AI/BTT_RangeAttack_Elemental.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Minion_Elemental.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_RangeAttack_Elemental::UBTT_RangeAttack_Elemental()
{
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_RangeAttack_Elemental::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	FighterRef = Cast<IFighter>(CharacterRef);
	if (!IsValid(CharacterRef))
	{
		return EBTNodeResult::Failed;
	}
	CheckDistance();
	Attack();
	return EBTNodeResult::Succeeded;
}


EBTNodeResult::Type UBTT_RangeAttack_Elemental::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef->StopMovement();
	return Super::AbortTask(OwnerComp, NodeMemory);
}


void UBTT_RangeAttack_Elemental::CheckDistance()
{
	PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	FVector PlayerLocation = PlayerRef->GetActorLocation();
	AEnemyCharacter* EnemyCharacterRef = Cast<AEnemyCharacter>(CharacterRef);
	
	if (!EnemyCharacterRef)
	{
		return;
	}
	float SightRadius = EnemyCharacterRef->GetSightRadius();
	float CurrentDistance = ControllerRef->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (CurrentDistance >= SightRadius)
	{
		ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GoingBack);
	}
	else
	{
		if (CurrentDistance > FighterRef->GetRangeDistance())
		{
			MoveToPlayer(FighterRef->GetRangeDistance(), PlayerLocation);
		}
	}
}


void UBTT_RangeAttack_Elemental::Attack()
{
	Cast<AMinion_Elemental>(CharacterRef)->ProjectileComp->SpawnProjectile();
	int CurrentHitCount = ControllerRef->GetBlackboardComponent()->GetValueAsInt(TEXT("HitCount"));
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), CurrentHitCount + 1);
}


void UBTT_RangeAttack_Elemental::MoveToPlayer(float AcceptableDistance, FVector PlayerLocation)
{
	FAIMoveRequest MoveRequest = PlayerLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableDistance);

	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
	
}
