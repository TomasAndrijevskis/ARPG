
#include "Animations/PlayerAnimInstance.h"
#include "KismetAnimationLibrary.h"



void UPlayerAnimInstance::HandleUpdatedTarget(AActor* NewTargetActorRef)
{
	bIsInCombat = IsValid(NewTargetActorRef);
}

void UPlayerAnimInstance::UpdateDirection()
{
	APawn* PawnRef = TryGetPawnOwner();
	if (!IsValid(PawnRef))
	{
		return;
	}
	if (!bIsInCombat)
	{
		return;
	}
	
	CurrentDirection = UKismetAnimationLibrary::CalculateDirection(PawnRef->GetVelocity(), PawnRef->GetActorRotation());
}

void UPlayerAnimInstance::UpdateSpeed()
{
	APawn* PawnRef {TryGetPawnOwner()};
	if (!IsValid(PawnRef))
	{
		return;
	}
	FVector Velocity { TryGetPawnOwner()->GetVelocity()};
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float

}
