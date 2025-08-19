
#pragma once

#include "CoreMinimal.h"
#include "EEnemyStates.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_PhaseTransition.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_PhaseTransition : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_PhaseTransition(){};
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:

	void ActivateSecondPhase();
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* PhaseTransitionMontage;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyStates> NextState;
	
	AAIController* ControllerRef;

	ACharacter* CharacterRef;

	UBehaviorTreeComponent* CachedOwnerComp = nullptr;
	
};
