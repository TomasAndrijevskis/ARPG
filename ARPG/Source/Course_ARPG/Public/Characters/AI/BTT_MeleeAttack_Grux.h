
#pragma once

#include "CoreMinimal.h"
#include "Characters/AI/BTT_MeleeAttack_Base.h"
#include "BTT_MeleeAttack_Grux.generated.h"


UCLASS()
class COURSE_ARPG_API UBTT_MeleeAttack_Grux : public UBTT_MeleeAttack_Base
{
	GENERATED_BODY()

protected:
	
	virtual void TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds) override;
	
private:

	void HandleRangeAttack(UBehaviorTreeComponent& OwnerComp) const;
	
	UPROPERTY(EditAnywhere)
	bool bHasRangeAttack;
};
