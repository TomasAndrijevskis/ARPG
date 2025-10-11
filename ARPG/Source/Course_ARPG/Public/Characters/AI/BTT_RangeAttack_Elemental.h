
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_RangeAttack_Elemental.generated.h"


class IFighter;

UCLASS()
class COURSE_ARPG_API UBTT_RangeAttack_Elemental : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_RangeAttack_Elemental();

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:

	void MoveToPlayer(const float AcceptableDistance, const FVector& PlayerLocation) const;

	void CheckDistance();

	void Attack() const;

	UPROPERTY()
	APawn* PlayerRef;

	UPROPERTY()
	AAIController* ControllerRef;

	UPROPERTY()
	ACharacter* CharacterRef;

	IFighter* FighterRef;
};
