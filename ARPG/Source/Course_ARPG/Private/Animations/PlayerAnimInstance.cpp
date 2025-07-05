
#include "Animations/PlayerAnimInstance.h"
#include "KismetAnimationLibrary.h"


void UPlayerAnimInstance::HandleUpdatedTarget(AActor* NewTargetActorRef)
{
	bIsInCombat = IsValid(NewTargetActorRef);
}


void UPlayerAnimInstance::UpdateDirection()
{
	APawn* PlayerRef = TryGetPawnOwner();
	if (!IsValid(PlayerRef))
	{
		return;
	}
	if (!bIsInCombat)
	{
		return;
	}
	
	CurrentDirection = UKismetAnimationLibrary::CalculateDirection(PlayerRef->GetVelocity(), PlayerRef->GetActorRotation());
}


void UPlayerAnimInstance::UpdateSpeed()
{
	APawn* PlayerRef = TryGetPawnOwner();
	if (!IsValid(PlayerRef))
	{
		return;
	}
	FVector Velocity = PlayerRef->GetVelocity();
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float

}
