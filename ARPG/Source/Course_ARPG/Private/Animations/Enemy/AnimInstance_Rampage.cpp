
#include "Animations/Enemy/AnimInstance_Rampage.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Combat/Abilities/EnemyAbilities/AbComp_GroundSmash.h"


void UAnimInstance_Rampage::HandleSmashingGround() const
{
	if (!PawnRef) return;
	if (UAbComp_GroundSmash* GroundSmash = PawnRef->FindComponentByClass<UAbComp_GroundSmash>())
	{
		GroundSmash->StartAbility();
	}
}


void UAnimInstance_Rampage::SetIsSmashingGround(const bool bIsSmashing)
{
	if (!PawnRef) return;
	if (AEnemyCharacter* Enemy = Cast<AEnemyCharacter>(PawnRef))
	{
		if (!bIsSmashing) Enemy->GetAIController()->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), static_cast<uint8>(EEnemyStates::Melee));
		bIsSmashingGround = bIsSmashing;
	}
}
