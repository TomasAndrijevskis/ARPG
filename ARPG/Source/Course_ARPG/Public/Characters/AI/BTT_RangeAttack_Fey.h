
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_RangeAttack_Fey.generated.h"


class IFighter;

UCLASS()
class COURSE_ARPG_API UBTT_RangeAttack_Fey : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_RangeAttack_Fey();

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:

	void MoveToPlayer(float AcceptableDistance, FVector PlayerLocation);
	
	void CheckDistance();

	void Attack();
	
	AAIController* ControllerRef;

	ACharacter* CharacterRef;

	IFighter* FighterRef;

	APawn* PlayerRef;
	
};
