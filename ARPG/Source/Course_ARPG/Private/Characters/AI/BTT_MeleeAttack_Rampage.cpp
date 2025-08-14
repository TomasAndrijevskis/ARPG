
#include "Characters/AI/BTT_MeleeAttack_Rampage.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/AI/EEnemyStates.h"
#include "Kismet/KismetMathLibrary.h"


EBTNodeResult::Type UBTT_MeleeAttack_Rampage::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	double RandomValue = UKismetMathLibrary::RandomFloat();
	if (RandomValue > Threshold)
	{
		UE_LOG(LogTemp, Warning, TEXT("Random Value : %f"), RandomValue);
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::SpecialAttack);
	}
	return EBTNodeResult::InProgress;
}
