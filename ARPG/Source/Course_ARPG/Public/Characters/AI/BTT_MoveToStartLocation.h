
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Navigation/PathFollowingComponent.h"
#include "BTT_MoveToStartLocation.generated.h"

struct FPathFollowingResult;

UCLASS()
class COURSE_ARPG_API UBTT_MoveToStartLocation : public UBTTaskNode
{
	GENERATED_BODY()

public:

	UBTT_MoveToStartLocation();
	
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;


private:

	UFUNCTION()
	void OnMoveCompleted(FAIRequestID RequestID, EPathFollowingResult::Type Result);
	
	void ChangeState();

	void GoBack(FVector TargetLocation);

	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 100.0f;
	
	AAIController* ControllerRef;
	
	ACharacter* CharacterRef;

	FScriptDelegate ReturnToStartLocation;

	UBehaviorTreeComponent* CachedOwnerComp = nullptr;

	
};
