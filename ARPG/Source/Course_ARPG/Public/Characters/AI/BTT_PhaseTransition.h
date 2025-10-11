
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
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

private:
	
	void ActivateSecondPhase() const;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* PhaseTransitionMontage;

	UPROPERTY(EditAnywhere)
	TEnumAsByte<EEnemyStates> NextState;

	UPROPERTY()
	AAIController* ControllerRef;

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY()
	UBehaviorTreeComponent* CachedOwnerComp = nullptr;
	
};
