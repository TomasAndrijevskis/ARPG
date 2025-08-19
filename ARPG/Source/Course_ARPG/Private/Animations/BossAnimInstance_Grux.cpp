
#include "Animations/BossAnimInstance_Grux.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Boss_Grux.h"
#include "Characters/Minion_Grux.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


void UBossAnimInstance_Grux::HandleProjectileSpawn()
{
	if (!PawnRef)
	{
		return;
	}
	Cast<ABoss_Grux>(PawnRef)->ProjectileComp->SpawnProjectile();
}


void UBossAnimInstance_Grux::HandleChargeStart(bool bIsReadyToCharge)
{
	if (!PawnRef)
	{
		return;
	}
	PawnRef->GetAIController()->GetBlackboardComponent()->SetValueAsBool(BlackboardChargeKey, bIsReadyToCharge);
}



void UBossAnimInstance_Grux::SetIsCharging(bool IsCharging)
{
	bIsCharging = IsCharging;
}