
#include "Characters/AI/BTT_GroundSmashAttack.h"
#include "AIController.h"
#include "Animations/BossAnimInstance_Base.h"
#include "Animations/BossAnimInstance_Rampage.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"


EBTNodeResult::Type UBTT_GroundSmashAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	BossAnimInstance = Cast<UBossAnimInstance_Base>(CharacterRef->GetMesh()->GetAnimInstance());
	Cast<UBossAnimInstance_Rampage>(BossAnimInstance)->SetIsSmashingGround(true);
	return EBTNodeResult::Succeeded;
}

