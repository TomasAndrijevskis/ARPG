
#include "Components/PlayerActionsComponent.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Kismet/KismetMathLibrary.h"


void UPlayerActionsComponent::BeginPlay()
{
	Super::BeginPlay();
	PlayerRef = GetOwner<AMainCharacter_Base>();
	if (!PlayerRef) return;
	MovementComp = PlayerRef->GetCharacterMovement();
	if (!PlayerRef || !PlayerRef -> Implements<UMainPlayer>()) return;
	IPlayerRef = Cast<IMainPlayer>(PlayerRef);
}


void UPlayerActionsComponent::Sprint()
{
	if (!IPlayerRef->HasEnoughStamina(SprintCost))
	{
		Walk();
		return; 
	}
	if (MovementComp->Velocity.Equals( FVector::ZeroVector, 1)) return;
	MovementComp->MaxWalkSpeed = SprintSpeed;
	OnSprintDelegate.Broadcast(SprintCost);
}


void UPlayerActionsComponent::Walk() const
{
	MovementComp->MaxWalkSpeed = WalkSpeed;
}


void UPlayerActionsComponent::Roll()
{
	if (!PlayerRef || !IPlayerRef) return;
	if (bIsRollActive || !IPlayerRef->HasEnoughStamina(RollCost) || !bCanRoll) return;
	PlayerRef->SetCanAttack(false);
	bIsRollActive = true;
	OnRollDelegate.Broadcast(RollCost);
	const FVector Direction = PlayerRef->GetCharacterMovement()->Velocity.Length()<1 ? PlayerRef->GetActorForwardVector() : PlayerRef->GetLastMovementInputVector();
	const FRotator NewRotation = UKismetMathLibrary::MakeRotFromX(Direction);

	PlayerRef->SetActorRotation(NewRotation);
	float AnimDuration = PlayerRef->PlayAnimMontage(RollAnimMontage);

	FTimerHandle RollTimerHandle;
	PlayerRef->GetWorldTimerManager().SetTimer(RollTimerHandle, this, &UPlayerActionsComponent::FinishRollAnim, AnimDuration, false);
}


void UPlayerActionsComponent::FinishRollAnim()
{
	PlayerRef->SetCanAttack(true);
	bIsRollActive = false;
}


void UPlayerActionsComponent::SetCanRoll(const bool CanRoll){bCanRoll = CanRoll;}

bool UPlayerActionsComponent::CanRoll() const{return bCanRoll;}

bool UPlayerActionsComponent::IsRollActive() const{return bIsRollActive;}