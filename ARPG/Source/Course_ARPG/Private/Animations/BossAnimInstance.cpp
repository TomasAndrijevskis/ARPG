


#include "Animations/BossAnimInstance.h"

void UBossAnimInstance::UpdateSpeed()
{
	APawn* PawnRef {TryGetPawnOwner()};
	if (!IsValid(PawnRef))
	{
		return;
	}
	FVector Velocity { TryGetPawnOwner()->GetVelocity()};
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float

}
