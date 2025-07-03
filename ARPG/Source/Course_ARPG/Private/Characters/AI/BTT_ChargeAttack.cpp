
#include "Characters/AI/BTT_ChargeAttack.h"
#include "AIController.h"
#include "Animations/BossAnimInstance.h"
#include "GameFramework/Character.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/EEnemyStates.h"
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
	CharacterRef = ControllerRef->GetCharacter();
	BossAnimInstance = Cast<UBossAnimInstance>(CharacterRef->GetMesh()->GetAnimInstance());
	BossAnimInstance->bIsCharging = true;
	OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsReadyToCharge"), false);
	bIsFinished = false;
	return EBTNodeResult::InProgress;
}


void UBTT_ChargeAttack::ChargeAtPlayer()
{
	APawn* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	FVector PlayerLocation = PlayerRef->GetActorLocation();

	FAIMoveRequest MoveRequest = PlayerLocation;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(AcceptableRadius);

	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);

	OriginalWalkSpeed = CharacterRef->GetCharacterMovement()->MaxWalkSpeed;
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = ChargeWalkSpeed;

	ControllerRef->ReceiveMoveCompleted.AddUnique(MoveCompletedDelegate);
}


void UBTT_ChargeAttack::HandleMoveCompleted()
{
	BossAnimInstance->bIsCharging = false;
	FTimerHandle AttackTimerHandle;
	CharacterRef->GetWorldTimerManager().SetTimer(AttackTimerHandle, this, &UBTT_ChargeAttack::FinishAttackTask, 1.0f, false);
	CharacterRef->GetCharacterMovement()->MaxWalkSpeed = OriginalWalkSpeed;
}


void UBTT_ChargeAttack::FinishAttackTask()
{
	bIsFinished = true;
	UE_LOG(LogTemp, Warning, TEXT("Task finished"));
}


void UBTT_ChargeAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	bool bIsReadyToCharge = OwnerComp.GetBlackboardComponent()->GetValueAsBool(TEXT("IsReadyToCharge"));

	if (bIsReadyToCharge)
	{
		OwnerComp.GetBlackboardComponent()->SetValueAsBool(TEXT("IsReadyToCharge"), false);
		ChargeAtPlayer();
	}
	if (!bIsFinished)
	{
		return;
	}
	OwnerComp.GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Melee);
	ControllerRef->ReceiveMoveCompleted.Remove(MoveCompletedDelegate);
	FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
}
