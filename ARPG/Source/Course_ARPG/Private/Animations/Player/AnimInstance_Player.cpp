
#include "Animations/Player/AnimInstance_Player.h"
#include "KismetAnimationLibrary.h"
#include "Characters/ARPG_Character_Base.h"


void UAnimInstance_Player::HandleUpdatedTarget(AActor* NewTargetActorRef)
{
	bIsInCombat = IsValid(NewTargetActorRef);
}


void UAnimInstance_Player::UpdateDirection()
{
	if (!IsValid(PawnRef) || !bIsInCombat) return;
	CurrentDirection = UKismetAnimationLibrary::CalculateDirection(PawnRef->GetVelocity(), PawnRef->GetActorRotation());
}


void UAnimInstance_Player::UpdateSpeed()
{
	Super::UpdateSpeed();
	if (CurrentSpeed > 0.0f) bIsMoving = true;
	else bIsMoving = false;
}