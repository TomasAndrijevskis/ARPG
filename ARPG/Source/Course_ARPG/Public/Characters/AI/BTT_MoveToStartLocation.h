
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Navigation/PathFollowingComponent.h"
#include "BTT_MoveToStartLocation.generated.h"

//struct FPathFollowingResult;

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
	
	void ChangeState() const;

	void GoBack(const FVector& TargetLocation);

	UPROPERTY(EditAnywhere)
	float AcceptableRadius = 100.0f;

	UPROPERTY()
	AAIController* ControllerRef;
	
	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY()
	UBehaviorTreeComponent* CachedOwnerComp = nullptr;
	
	FScriptDelegate ReturnToStartLocation;
	
};
