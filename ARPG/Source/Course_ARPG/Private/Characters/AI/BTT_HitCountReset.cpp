
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
	ACharacter* CharacterRef = OwnerComp.GetAIOwner()->GetPawn<ACharacter>();

	FTimerHandle TimerHandle;
	UBehaviorTreeComponent* LocalOwnerComp = &OwnerComp;
	
	if (AnimMontage)
	{
		float AnimDuration = CharacterRef->PlayAnimMontage(AnimMontage);
		GetWorld()->GetTimerManager().SetTimer(TimerHandle,FTimerDelegate::CreateUObject(this,&UBTT_HitCountReset::FinishTask,LocalOwnerComp),AnimDuration,false);
	}
	else
	{
		GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateUObject(this,&UBTT_HitCountReset::FinishTask,LocalOwnerComp), ResetDuration, false);
	}
	return EBTNodeResult::InProgress;
}


void UBTT_HitCountReset::FinishTask(UBehaviorTreeComponent* LocalOwnerComp) const
{
	ControllerRef->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), 0);
	FinishLatentTask(*LocalOwnerComp, EBTNodeResult::Succeeded);
}
