
#include "Animations/AnimInstance_Base.h"
#include "Characters/EnemyCharacter_Base.h"
#include "Combat/TraceComponent.h"


void UAnimInstance_Base::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	PawnRef = Cast<AEnemyCharacter_Base>(TryGetPawnOwner());
}


void UAnimInstance_Base::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateSpeed();
}


void UAnimInstance_Base::UpdateSpeed()
{
	if (!IsValid(PawnRef))
	{
		return;
	}
	FVector Velocity { TryGetPawnOwner()->GetVelocity()};
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float
}


void UAnimInstance_Base::HandleResetAttack()
{
	PawnRef->TraceComp->HandleResetAttack();
}

