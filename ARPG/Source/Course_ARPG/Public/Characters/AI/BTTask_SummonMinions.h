
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SummonMinions.generated.h"


UCLASS()
class COURSE_ARPG_API UBTTask_SummonMinions : public UBTTaskNode
{
	GENERATED_BODY()

public:
	
	UBTTask_SummonMinions();
	
protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:

	UFUNCTION()
	void StartSummon();
	
	UFUNCTION()
	void FinishTask();
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* SummonAnimMontage;
	
	AAIController* ControllerRef;

	ACharacter* CharacterRef;

	UBehaviorTreeComponent* CachedOwnerComp;


};
