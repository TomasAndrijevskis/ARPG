


#include "Characters/AI/BTT_RangeAttack.h"
#include "AIController.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/EEnemyStates.h"
#include "Interfaces/Fighter.h"

UBTT_RangeAttack::UBTT_RangeAttack()
{
	bCreateNodeInstance = true;
}

EBTNodeResult::Type UBTT_RangeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ACharacter* CharacterRef = OwnerComp.GetAIOwner()->GetPawn<ACharacter>();

	if (!IsValid(CharacterRef))
	{
		return EBTNodeResult::Failed;
	}
	
	IFighter* FighterRef = Cast<IFighter>(CharacterRef);
	
	float Distance = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	
	if (Distance < FighterRef->GetMeleeRange())
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
		
		AbortTask(OwnerComp, NodeMemory);
		return EBTNodeResult::Aborted;
	}
	
	CharacterRef->PlayAnimMontage(AnimMontage);

	double RandomValue = UKismetMathLibrary::RandomFloat();
	if (RandomValue > Threshold)
	{
		Threshold = 0.9;
		OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Charge);
	}
	else
	{
		Threshold -= 0.1;
	}
	
	return EBTNodeResult::Succeeded;
}
