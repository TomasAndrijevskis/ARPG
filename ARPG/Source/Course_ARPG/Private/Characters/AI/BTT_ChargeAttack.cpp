
#include "Characters/AI/BTT_ChargeAttack.h"
#include "AIController.h"
#include "Animations/AnimInstance_Base.h"
#include "Animations/AnimInstance_Grux.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/AI/EEnemyStates.h"
#include "Navigation/PathFollowingComponent.h"
#include "GameFramework/CharacterMovementComponent.h"


UBTT_ChargeAttack::UBTT_ChargeAttack()
{
	bNotifyTick = true;
	MoveCompletedDelegate.BindUFunction(this, "HandleMoveCompleted");
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_ChargeAttack::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	ControllerRef = OwnerComp.GetAIOwner();
	if (!ControllerRef) return EBTNodeResult::Failed;
	CharacterRef = ControllerRef->GetCharacter();
	if (!CharacterRef) return EBTNodeResult::Failed;
	BossAnimInstance = Cast<UAnimInstance_Base>(CharacterRef->GetMesh()->GetAnimInstance());
	if (!BossAnimInstance) return EBTNodeResult::Failed;
	Cast<UAnimInstance_Grux>(BossAnimInstance)->SetIsCharging(true);
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsReadyToCharge"), false);
	bIsFinished = false;
	return EBTNodeResult::InProgress;
}


void UBTT_ChargeAttack::ChargeAtPlayer()
{
	APawn* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	if (!PlayerRef) return;
	const FVector PlayerLocation = PlayerRef->GetActorLocation();
	
	FAIMoveRequest MoveRequest = PlayerLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);

	if (!ControllerRef || !CharacterRef) return;
	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);

	OriginalWalkSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalWalkSpeed * ChargeSpeedMultiplier;

	ControllerRef->ReceiveMoveCompleted.AddUnique(MoveCompletedDelegate);
}


void UBTT_ChargeAttack::HandleMoveCompleted()
{
	if (!CharacterRef) return;
	Cast<UAnimInstance_Grux>(BossAnimInstance)->SetIsCharging(false);
	FTimerHandle AttackTimerHandle;
	CharacterRef->GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &UBTT_ChargeAttack::FinishAttackTask, 1.0f, false);
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalWalkSpeed;
}


void UBTT_ChargeAttack::FinishAttackTask()
{
	bIsFinished = true;
}


void UBTT_ChargeAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	if (OwnerComp.GetBlackboardComponent()->GetValueAsBool(TEXT("IsReadyToCharge")))
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsReadyToCharge"), false);
		ChargeAtPlayer();
	}
	if (!bIsFinished) return;
	OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
	if (!ControllerRef) return;
	ControllerRef->ReceiveMoveCompleted.Remove(MoveCompletedDelegate);
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}


EBTNodeResult::Type UBTT_ChargeAttack::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (ControllerRef) ControllerRef->StopMovement();
	return Super::AbortTask(OwnerComp, NodeMemory);
}
