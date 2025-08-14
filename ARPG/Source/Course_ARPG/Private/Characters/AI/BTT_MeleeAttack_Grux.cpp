
#include "Characters/AI/BTT_MeleeAttack_Grux.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/AI/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "GameFramework/Character.h"


void UBTT_MeleeAttack_Grux::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	float Distance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));

	IFighter* FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());
	if (Distance > FighterRef->GetMeleeRange())
	{
		HandleRangeAttack(OwnerComp);
	}
}


void UBTT_MeleeAttack_Grux::HandleRangeAttack(UBehaviorTreeComponent& OwnerComp)
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
