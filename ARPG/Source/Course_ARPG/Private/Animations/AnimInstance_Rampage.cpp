
#include "Animations/AnimInstance_Rampage.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Boss_Rampage.h"
#include "Characters/Minion_Rampage.h"
#include "Combat/GroundSmashComponent.h"


void UAnimInstance_Rampage::HandleSmashingGround() const
{
	if (!PawnRef)
	{
		return;
	}

	if (PawnRef->FindComponentByClass<UGroundSmashComponent>())
	{
		PawnRef->FindComponentByClass<UGroundSmashComponent>()->SpawnParticles();
	}
}


void UAnimInstance_Rampage::SetIsSmashingGround(const bool bIsSmashing)
{
	if (!bIsSmashing)
	{
		PawnRef->GetAIController()->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
	}
	bIsSmashingGround = bIsSmashing;
}
