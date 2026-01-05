
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_GroundSmashAttack.generated.h"


class UAnimInstance_Base;
UCLASS()
class COURSE_ARPG_API UBTT_GroundSmashAttack : public UBTTaskNode
{
	GENERATED_BODY()

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

	UPROPERTY()
	AAIController* ControllerRef;

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY()
	UAnimInstance_Base* BossAnimInstance;
	
};
