
#include "Animations/AnimInstance_Enemy.h"
#include "Characters/Enemy/EnemyCharacter.h"


void UAnimInstance_Enemy::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	PawnRef = Cast<AEnemyCharacter>(TryGetPawnOwner());
}


void UAnimInstance_Enemy::NativeUpdateAnimation(const float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateSpeed();
}


void UAnimInstance_Enemy::UpdateSpeed()
{
	if (!IsValid(PawnRef)) return;
	FVector Velocity = TryGetPawnOwner()->GetVelocity();
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float
}


void UAnimInstance_Enemy::HandleResetAttack() const
{
	PawnRef->ResetAttack();
}