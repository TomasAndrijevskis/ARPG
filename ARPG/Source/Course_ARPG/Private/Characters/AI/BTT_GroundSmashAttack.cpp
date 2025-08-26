
#include "Characters/AI/BTT_GroundSmashAttack.h"
#include "AIController.h"
#include "Animations/AnimInstance_Base.h"
#include "Animations/AnimInstance_Rampage.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"


EBTNodeResult::Type UBTT_GroundSmashAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	BossAnimInstance = Cast<UAnimInstance_Base>(CharacterRef->GetMesh()->GetAnimInstance());
	Cast<UAnimInstance_Rampage>(BossAnimInstance)->SetIsSmashingGround(true);
	return EBTNodeResult::Succeeded;
}

