
#include "Characters/AI/BTT_PhaseTransition.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Boss.h"
#include "GameFramework/Character.h"


EBTNodeResult::Type UBTT_PhaseTransition::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	CachedOwnerComp = &OwnerComp;
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	CharacterRef->GetMesh()->GetAnimInstance()->Montage_Stop(0.01f);

	FTimerHandle TimerHandle;
	float AnimDuration = CharacterRef->PlayAnimMontage(PhaseTransitionMontage);

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UBTT_PhaseTransition::ActivateSecondPhase, AnimDuration, false);
	return EBTNodeResult::InProgress;
}


void UBTT_PhaseTransition::ActivateSecondPhase() const
{
	CachedOwnerComp->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), NextState);
	CachedOwnerComp->GetBlackboardComponent()->SetValueAsBool(TEXT("IsSecondPhase"), true);
	CachedOwnerComp->GetBlackboardComponent()->SetValueAsInt(TEXT("HitCount"), 0);
	Cast<ABoss>(CharacterRef)->ActivateSecondPhase();
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}
