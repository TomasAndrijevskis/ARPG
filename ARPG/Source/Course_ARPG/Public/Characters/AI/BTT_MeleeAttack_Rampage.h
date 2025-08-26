
#pragma once

#include "CoreMinimal.h"
#include "Characters/AI/BTT_MeleeAttack_Base.h"
#include "BTT_MeleeAttack_Rampage.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_MeleeAttack_Rampage : public UBTT_MeleeAttack_Base
{
	GENERATED_BODY()

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
private:

	UPROPERTY(EditAnywhere)
	double OriginalThreshold;
};
