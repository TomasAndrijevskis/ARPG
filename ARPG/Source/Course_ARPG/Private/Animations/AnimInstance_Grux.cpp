
#include "Animations/AnimInstance_Grux.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Boss_Grux.h"
#include "Characters/Minion_Grux.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


void UAnimInstance_Grux::HandleProjectileSpawn()
{
	if (!PawnRef)
	{
		return;
	}
	Cast<ABoss_Grux>(PawnRef)->ProjectileComp->SpawnProjectile();
}


void UAnimInstance_Grux::HandleChargeStart(bool bIsReadyToCharge)
{
	if (!PawnRef)
	{
		return;
	}
	PawnRef->GetAIController()->GetBlackboardComponent()->SetValueAsBool(BlackboardChargeKey, bIsReadyToCharge);
}



void UAnimInstance_Grux::SetIsCharging(bool IsCharging)
{
	bIsCharging = IsCharging;
}