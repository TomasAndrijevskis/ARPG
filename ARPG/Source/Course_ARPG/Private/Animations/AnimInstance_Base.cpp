
#include "Animations/AnimInstance_Base.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Components/TraceComponent.h"


void UAnimInstance_Base::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	PawnRef = Cast<AEnemyCharacter>(TryGetPawnOwner());
}


void UAnimInstance_Base::NativeUpdateAnimation(const float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateSpeed();
}


void UAnimInstance_Base::UpdateSpeed()
{
	if (!IsValid(PawnRef)) return;
	FVector Velocity = TryGetPawnOwner()->GetVelocity();
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float
}


void UAnimInstance_Base::HandleResetAttack() const
{
	PawnRef->TraceComp->HandleResetAttack();
}

