
#include "Characters/AI/BTT_MeleeAttack_Rampage.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/AI/EEnemyStates.h"
#include "Interfaces/Fighter.h"
#include "Kismet/KismetMathLibrary.h"


EBTNodeResult::Type UBTT_MeleeAttack_Rampage::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	if (ControllerRef->GetBlackboardComponent()->GetValueAsBool(TEXT("AttackedOnce")))
	{
		double Threshold = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Threshold"));
		double RandomValue = UKismetMathLibrary::RandomFloat();
		if (RandomValue > Threshold)
		{
			UE_LOG(LogTemp, Warning, TEXT("Random Value : %f"), RandomValue);
			OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::SpecialAttack);
			OwnerComp.GetBlackboardComponent()->SetValueAsFloat(TEXT("Threshold"), OriginalThreshold);
		}
		else
		{
			OwnerComp.GetBlackboardComponent()->SetValueAsFloat(TEXT("Threshold"), Threshold -= .05);
		}
	}
	return EBTNodeResult::InProgress;
}


void UBTT_MeleeAttack_Rampage::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);

	if (OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance")) >= FighterRef->GetMeleeRange())
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::GoingBack);
	
}
