
#include "Characters/AI/BTTask_SummonMinions.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Boss_Fey.h"
#include "Characters/AI/EEnemyStates.h"
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
	CharacterRef = ControllerRef->GetCharacter();
	StartSummon();
	return EBTNodeResult::InProgress;
}


void UBTTask_SummonMinions::StartSummon()
{
	Cast<ABoss_Fey>(CharacterRef)->SetCanTakeDamage(false);
	float AnimDuration = CharacterRef->PlayAnimMontage(SummonAnimMontage);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle,this, &UBTTask_SummonMinions::FinishTask, AnimDuration, false);
}


void UBTTask_SummonMinions::FinishTask() const
{
	Cast<ABoss_Fey>(CharacterRef)->SetCanTakeDamage(true);
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}

