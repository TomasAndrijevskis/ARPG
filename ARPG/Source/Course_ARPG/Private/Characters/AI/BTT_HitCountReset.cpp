
#include "Characters/AI/BTT_HitCountReset.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"


UBTT_HitCountReset::UBTT_HitCountReset()
{
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_HitCountReset::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	if (!ControllerRef) return EBTNodeResult::Failed;
	ACharacter* CharacterRef = ControllerRef->GetCharacter();
	if (!CharacterRef) return EBTNodeResult::Failed;
	FTimerHandle TimerHandle;
	UBehaviorTreeComponent* LocalOwnerComp = &OwnerComp;
	
	if (AnimMontage)
	{
		float AnimDuration = CharacterRef->PlayAnimMontage(AnimMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,FTimerDelegate::CreateUObject(this, &ThisClass::FinishTask,LocalOwnerComp),AnimDuration,false);
	}
	else GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateUObject(this, &ThisClass::FinishTask,LocalOwnerComp), ResetDuration, false);
	return EBTNodeResult::InProgress;
}


void UBTT_HitCountReset::FinishTask(UBehaviorTreeComponent* LocalOwnerComp) const
{
	if (!ControllerRef || !LocalOwnerComp)
	{
		FinishLatentTask(*LocalOwnerComp, EBTNodeResult::Failed);
		return;
	}
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), 0);
	FinishLatentTask(*LocalOwnerComp, EBTNodeResult::Succeeded);
}