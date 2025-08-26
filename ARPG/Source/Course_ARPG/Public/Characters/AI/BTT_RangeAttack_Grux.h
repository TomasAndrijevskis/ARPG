
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_RangeAttack_Grux.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_RangeAttack_Grux : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_RangeAttack_Grux();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


private:

	UPROPERTY(EditAnywhere)
	UAnimMontage* AnimMontage;

	double Threshold = 0.9;
};
