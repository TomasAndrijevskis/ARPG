
#include "Animations/Player/AnimInstance_Player.h"
#include "KismetAnimationLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"


void UAnimInstance_Player::NativeBeginPlay()
{
	Super::NativeBeginPlay();
	PlayerRef = Cast<AMainCharacter_Base>(TryGetPawnOwner());
}


void UAnimInstance_Player::HandleUpdatedTarget(AActor* NewTargetActorRef)
{
	bIsInCombat = IsValid(NewTargetActorRef);
}


void UAnimInstance_Player::UpdateDirection()
{
	if (!IsValid(PlayerRef) || !bIsInCombat) return;
	CurrentDirection = UKismetAnimationLibrary::CalculateDirection(PlayerRef->GetVelocity(), PlayerRef->GetActorRotation());
}


void UAnimInstance_Player::UpdateSpeed()
{
	if (!IsValid(PlayerRef)) return;
	FVector Velocity = PlayerRef->GetVelocity();
	CurrentSpeed = static_cast<float>(Velocity.Length()); // double->float
	if (CurrentSpeed > 0.0f) bIsMoving = true;
	else bIsMoving = false;
}


void UAnimInstance_Player::HandleResetAttack() const
{
	if (!IsValid(PlayerRef)) return;
	PlayerRef->HandleResetAttack();
}
