
#include "Animations/AnimInstance_Rampage.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemy/Boss_Rampage.h"
#include "Characters/Enemy/EnemyCharacter.h"


void UAnimInstance_Rampage::HandleSmashingGround() const
{
	if (!PawnRef) return;
	Cast<ABoss_Rampage>(PawnRef)->StartAbility();
}


void UAnimInstance_Rampage::SetIsSmashingGround(const bool bIsSmashing)
{
	if (!bIsSmashing)
		PawnRef->GetAIController()->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
	bIsSmashingGround = bIsSmashing;
}
