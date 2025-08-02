
#include "Characters/AI/UBTT_Shoot.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/EnemyCharacter_Elemental.h"
#include "Characters/MainCharacter_Base.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"
#include "Navigation/PathFollowingComponent.h"


UUBTT_Shoot::UUBTT_Shoot()
{
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UUBTT_Shoot::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	if (!IsValid(CharacterRef))
	{
		return EBTNodeResult::Failed;
	}
	CheckDistance();
	Cast<AEnemyCharacter_Elemental>(CharacterRef)->ProjectileComp->SpawnProjectile();
	return EBTNodeResult::Succeeded;
}


void UUBTT_Shoot::CheckDistance()
{
	PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	FVector PlayerLocation = PlayerRef->GetActorLocation();
	
	AEnemyCharacter_Base* EnemyCharacterRef = Cast<AEnemyCharacter_Base>(CharacterRef);
	float SightRadius;
	if (EnemyCharacterRef)
	{
		SightRadius = EnemyCharacterRef->GetSightRadius();
	}
	float CurrentDistance = ControllerRef->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (CurrentDistance >= SightRadius)
	{
		UE_LOG(LogTemp, Warning, TEXT("Out of sight radius"));
		ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GoingBack);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("In sight radius"));
		if (CurrentDistance > MinimalDistance)
		{
			MoveToPlayer(MinimalDistance, PlayerLocation);
		}
	}
}


void UUBTT_Shoot::MoveToPlayer(float AcceptableDistance, FVector PlayerLocation)
{
	FAIMoveRequest MoveRequest = PlayerLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableDistance);

	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
	
}
