
#include "Animations/BossAnimInstance_Rampage.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/EC_Boss_Rampage.h"
#include "Combat/GroundSmashComponent.h"


void UBossAnimInstance_Rampage::HandleSmashingGround()
{
	if (!PawnRef)
	{
		return;
	}
	Cast<AEC_Boss_Rampage>(PawnRef)->AbilityComp_GroundSmash->SpawnParticles();
}


void UBossAnimInstance_Rampage::SetIsSmashingGround(bool bIsSmashing)
{
	if (!bIsSmashing)
	{
		PawnRef->GetAIController()->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
	}
	bIsSmashingGround = bIsSmashing;
}
