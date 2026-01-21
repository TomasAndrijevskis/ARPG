
#include "Characters/AI/BTTask_SummonMinions.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/AI/EEnemyStates.h"
#include "Characters/Enemy/Boss_Fey.h"
#include "GameFramework/Character.h"


UBTTask_SummonMinions::UBTTask_SummonMinions()
{
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTTask_SummonMinions::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	CachedOwnerComp = &OwnerComp;
	ControllerRef = OwnerComp.GetAIOwner();
	if (!ControllerRef) return EBTNodeResult::Failed;
	CharacterRef = ControllerRef->GetCharacter();
	if (!CharacterRef) return EBTNodeResult::Failed;
	StartSummon();
	return EBTNodeResult::InProgress;
}


void UBTTask_SummonMinions::StartSummon()
{
	if (!CharacterRef || !SummonAnimMontage) return;
	Cast<ABoss_Fey>(CharacterRef)->SetCanTakeDamage(false);
	const float AnimDuration = CharacterRef->PlayAnimMontage(SummonAnimMontage);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &UBTTask_SummonMinions::FinishTask, AnimDuration, false);
}


void UBTTask_SummonMinions::FinishTask() const
{
	if (!CharacterRef || !ControllerRef)
	{
		FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Failed);
		return;
	}
	Cast<ABoss_Fey>(CharacterRef)->SetCanTakeDamage(true);
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}