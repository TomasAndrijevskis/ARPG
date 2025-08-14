
#include "Animations/BossAnimInstance_Grux.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/EC_Boss_Grux.h"
#include "Characters/EC_Minion_Grux.h"
#include "Combat/Projectiles/EnemyProjectileComponent.h"


void UBossAnimInstance_Grux::HandleProjectileSpawn()
{
	if (!PawnRef)
	{
		return;
	}
	Cast<AEC_Boss_Grux>(PawnRef)->ProjectileComp->SpawnProjectile();
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