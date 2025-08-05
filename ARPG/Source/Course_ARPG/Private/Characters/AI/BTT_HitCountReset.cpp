
#include "Characters/AI/BTT_HitCountReset.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"


EBTNodeResult::Type UBTT_HitCountReset::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	MyOwnerComp = &OwnerComp;
	
	ACharacter* CharacterRef = OwnerComp.GetAIOwner()->GetPawn<ACharacter>();
	float AnimDuration = CharacterRef->PlayAnimMontage(AnimMontage);

	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UBTT_HitCountReset::FinishTask, AnimDuration, false);
	
	return EBTNodeResult::InProgress;
}


void UBTT_HitCountReset::FinishTask()
{
	ControllerRef = MyOwnerComp->GetAIOwner();
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), 0);
	
	FinishLatentTask(*MyOwnerComp, EBTNodeResult::Succeeded);
}
