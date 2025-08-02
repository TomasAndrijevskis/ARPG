
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UBTT_Shoot.generated.h"


UCLASS()
class COURSE_ARPG_API UUBTT_Shoot : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UUBTT_Shoot();

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
private:

	void MoveToPlayer(float AcceptableDistance, FVector PlayerLocation);

	void CheckDistance();

	APawn* PlayerRef;
	
	AAIController* ControllerRef;
	
	ACharacter* CharacterRef;

	UPROPERTY(EditAnywhere)
	float MinimalDistance;
};
