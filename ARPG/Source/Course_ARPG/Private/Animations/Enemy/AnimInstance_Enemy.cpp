
#include "Animations/Enemy/AnimInstance_Enemy.h"


void UAnimInstance_Enemy::NativeUpdateAnimation(const float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateSpeed();
}
