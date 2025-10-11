
#include "Characters/AI/BTT_PoisonExplosion.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/AI/EEnemyStates.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/Fighter.h"
#include "Navigation/PathFollowingComponent.h"


UBTT_PoisonExplosion::UBTT_PoisonExplosion()
{
	MoveDelegate.BindUFunction(this,"FinishMove");
	bNotifyTick = true;
	bCreateNodeInstance = true;
}


EBTNodeResult::Type UBTT_PoisonExplosion::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	CachedNodeMemory = NodeMemory;
	CachedOwnerComp = &OwnerComp;
	ControllerRef = OwnerComp.GetAIOwner();
	CharacterRef = ControllerRef->GetCharacter();
	FighterRef = Cast<IFighter>(ControllerRef->GetCharacter());
	CheckDistance();
	return EBTNodeResult::InProgress;
}


void UBTT_PoisonExplosion::CheckDistance()
{
	float Distance = ControllerRef->GetBlackboardComponent()->GetValueAsFloat(TEXT("Distance"));
	if (Distance > FighterRef->GetMeleeRange())
	{
		MoveToPlayer();
	}
	else
	{
		StartAttack();
	}
}


void UBTT_PoisonExplosion::StartAttack()
{
	float AnimDuration = CharacterRef->PlayAnimMontage(CastAnimMontage);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UBTT_PoisonExplosion::ExplodePoison, AnimDuration, false);
}


void UBTT_PoisonExplosion::ExplodePoison() 
{
	float AnimDuration = CharacterRef->PlayAnimMontage(ExplodeAnimMontage);
	FTimerHandle TimerHandle;
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &UBTT_PoisonExplosion::FinishTask, AnimDuration, false);
}


void UBTT_PoisonExplosion::FinishTask() const
{
	CharacterRef->FindComponentByClass<UCharacterMovementComponent>()->MaxWalkSpeed /= SpeedMultiplier;
	ControllerRef->GetBlackboardComponent()->SetValueAsEnum(TEXT("CurrentState"), EEnemyStates::Range);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}


void UBTT_PoisonExplosion::MoveToPlayer() const
{
	CharacterRef->FindComponentByClass<UCharacterMovementComponent>()->MaxWalkSpeed *= SpeedMultiplier;
	APawn* PlayerRef = GetWorld()->GetFirstPlayerController()->GetPawn();
	FAIMoveRequest MoveRequest = PlayerRef;
	MoveRequest.SetUsePathfinding(true);
	MoveRequest.SetAcceptanceRadius(FighterRef->GetMeleeRange() /2);
	UE_LOG(LogTemp, Error, TEXT("accept: %f"),FighterRef->GetMeleeRange());
	ControllerRef->ReceiveMoveCompleted.AddUnique(MoveDelegate);
		
	ControllerRef->MoveTo(MoveRequest);
	ControllerRef->SetFocus(PlayerRef);
}


void UBTT_PoisonExplosion::FinishMove() const
{
	ControllerRef->ReceiveMoveCompleted.Remove(MoveDelegate);
	FinishLatentTask(*CachedOwnerComp, EBTNodeResult::Succeeded);
}


