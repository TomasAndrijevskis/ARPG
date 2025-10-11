
#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTT_PoisonExplosion.generated.h"

class IFighter;

UCLASS()
class COURSE_ARPG_API UBTT_PoisonExplosion : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	
	UBTT_PoisonExplosion();

protected:

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	IFighter* FighterRef;
	
private:

	UFUNCTION()
	void ExplodePoison();

	UFUNCTION()
	void FinishTask() const;

	UFUNCTION()
	void MoveToPlayer() const;
	
	UFUNCTION()
	void FinishMove() const;

	UFUNCTION()
	void CheckDistance();

	void StartAttack();
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* CastAnimMontage;
	
	UPROPERTY(EditAnywhere)
	UAnimMontage* ExplodeAnimMontage;

	UPROPERTY(EditAnywhere)
	float SpeedMultiplier;

	UPROPERTY()
	AAIController* ControllerRef;

	UPROPERTY()
	ACharacter* CharacterRef;

	UPROPERTY()
	UBehaviorTreeComponent* CachedOwnerComp;
	
	uint8* CachedNodeMemory;

	FScriptDelegate MoveDelegate;
};
