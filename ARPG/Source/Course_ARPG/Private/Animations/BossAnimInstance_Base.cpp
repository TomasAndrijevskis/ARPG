
#include "Animations/BossAnimInstance_Base.h"
#include "Characters/EnemyCharacter_Base.h"
#include "Combat/TraceComponent.h"


void UBossAnimInstance_Base::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	PawnRef = Cast<AEnemyCharacter_Base>(TryGetPawnOwner());
}


void UBossAnimInstance_Base::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	UpdateSpeed();
}


void UBossAnimInstance_Base::UpdateSpeed()
{
	if (!IsValid(PawnRef))
	{
		return;
	}
	FVector Velocity { TryGetPawnOwner()->GetVelocity()};
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float
}


void UBossAnimInstance_Base::HandleResetAttack()
{
	PawnRef->TraceComp->HandleResetAttack();
}

