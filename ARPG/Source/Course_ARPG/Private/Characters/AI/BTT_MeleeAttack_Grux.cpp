
#include "Characters/AI/BTT_MeleeAttack_Grux.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Data/EEnemyStates.h"
#include "Interfaces/Fighter.h"


void UBTT_MeleeAttack_Grux::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
	if (!FighterRef) return;
	float Distance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (Distance > FighterRef->GetMeleeRange()) HandleRangeAttack(OwnerComp);
}


void UBTT_MeleeAttack_Grux::HandleRangeAttack(UBehaviorTreeComponent& OwnerComp) const
{
	if (bHasRangeAttack)
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), static_cast<uint8>(EEnemyStates::Range));
	else
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), static_cast<uint8>(EEnemyStates::GoingBack));
}
