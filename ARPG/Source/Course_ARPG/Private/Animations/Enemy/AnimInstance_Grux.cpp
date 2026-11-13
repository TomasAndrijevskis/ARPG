
#include "Animations/Enemy/AnimInstance_Grux.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Components/EnemyProjectileComponent.h"


void UAnimInstance_Grux::HandleLongRangeAttack()
{
	if (!PawnRef) return;
	if (UEnemyProjectileComponent* ProjectileComp = PawnRef->FindComponentByClass<UEnemyProjectileComponent>())
	{
		ProjectileComp->SpawnProjectile();
	}
}


void UAnimInstance_Grux::HandleChargeStart(const bool bIsReadyToCharge) const
{
	if (!PawnRef) return;
	if (AEnemyCharacter* Enemy = Cast<AEnemyCharacter>(PawnRef))
	{
		Enemy->GetAIController()->GetBlackboardComponent()->SetValueAsBool(BlackboardChargeKey, bIsReadyToCharge);
	}
}


void UAnimInstance_Grux::SetIsCharging(const bool IsCharging)
{
	bIsCharging = IsCharging;
}