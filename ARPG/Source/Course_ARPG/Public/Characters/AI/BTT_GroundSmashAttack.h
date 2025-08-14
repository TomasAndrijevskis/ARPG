
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_GroundSmashAttack.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_GroundSmashAttack : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_GroundSmashAttack(){};

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	
	AAIController* ControllerRef;
	
	ACharacter* CharacterRef;

	class UBossAnimInstance_Base* BossAnimInstance;
	
};
