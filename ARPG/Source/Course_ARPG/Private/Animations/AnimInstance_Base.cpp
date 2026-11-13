
#include "Animations/AnimInstance_Base.h"
#include "Characters/ARPG_Character_Base.h"
#include "Components/CombatComponent_Base.h"


void UAnimInstance_Base::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	PawnRef = Cast<AARPG_Character_Base>(TryGetPawnOwner());
}


void UAnimInstance_Base::UpdateSpeed()
{
	if (!IsValid(PawnRef)) return;
	FVector Velocity = PawnRef->GetVelocity();
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float
}


void UAnimInstance_Base::HandleResetAttack()
{
	if (!IsValid(PawnRef)) return;
	if (UCombatComponent_Base* CombatComp = PawnRef->FindComponentByClass<UCombatComponent_Base>())
	{
		CombatComp->HandleResetAttack();
	}
}
