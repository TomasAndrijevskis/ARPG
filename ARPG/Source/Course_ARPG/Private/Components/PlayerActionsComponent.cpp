
#include "Components/PlayerActionsComponent.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/CombatComponent_Base.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Kismet/KismetMathLibrary.h"


void UPlayerActionsComponent::BeginPlay()
{
	Super::BeginPlay();
	
	PlayerRef = GetOwner<AMainCharacter_Base>();
	MovementComp = PlayerRef->GetCharacterMovement();

	if (!PlayerRef -> Implements<UMainPlayer>()) return;

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
	if (bIsRollActive || !IPlayerRef->HasEnoughStamina(RollCost) || !bCanRoll) return;
	PlayerRef->CombatComp->bCanAttack = false;
	bIsRollActive = true;
	OnRollDelegate.Broadcast(RollCost);

	FVector Direction = PlayerRef->GetCharacterMovement()->Velocity.Length()<1 ? PlayerRef->GetActorForwardVector() : PlayerRef->GetLastMovementInputVector();
	FRotator NewRotation = UKismetMathLibrary::MakeRotFromX(Direction);

	PlayerRef->SetActorRotation(NewRotation);
	float AnimDuration = PlayerRef->PlayAnimMontage(RollAnimMontage);

	FTimerHandle RollTimerHandle;
	PlayerRef->GetWorldTimerManager().SetTimer(RollTimerHandle, this, &UPlayerActionsComponent::FinishRollAnim, AnimDuration, false);
}


void UPlayerActionsComponent::FinishRollAnim()
{
	PlayerRef->CombatComp->bCanAttack = true;
	bIsRollActive = false;
}



bool UPlayerActionsComponent::CanRoll() const
{
	return bCanRoll;
}

void UPlayerActionsComponent::SetCanRoll(const bool CanRoll)
{
	bCanRoll = CanRoll;
}


bool UPlayerActionsComponent::IsRollActive() const
{
	return bIsRollActive;
}
