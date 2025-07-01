


#include "Characters/PlayerActionsComponent.h"

#include "Characters/MainCharacter_Base.h"
#include "Combat/CombatComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Interfaces/MainPlayer.h"
#include "Kismet/KismetMathLibrary.h"

UPlayerActionsComponent::UPlayerActionsComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}


void UPlayerActionsComponent::BeginPlay()
{
	Super::BeginPlay();
	
	CharacterRef = GetOwner<AMainCharacter_Base>();
	MovementComp = CharacterRef->GetCharacterMovement();

	if (!CharacterRef -> Implements<UMainPlayer>())
	{
		return;
	}

	IPlayerRef = Cast<IMainPlayer>(CharacterRef);
	
}


void UPlayerActionsComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


}

void UPlayerActionsComponent::Sprint()
{
	if (!IPlayerRef->HasEnoughStamina(SprintCost))
	{
		Walk();
		return; 
	}
	if (MovementComp->Velocity.Equals( FVector::ZeroVector, 1))
	{
		return;
	}
	
	MovementComp->MaxWalkSpeed = SprintSpeed;
	OnSprintDelegate.Broadcast(SprintCost);
}

void UPlayerActionsComponent::Walk()
{
	MovementComp->MaxWalkSpeed = WalkSpeed;
}

void UPlayerActionsComponent::Roll()
{
	if (bIsRollActive || !IPlayerRef->HasEnoughStamina(RollCost) || !bCanRoll)
	{
		return;
	}
	CharacterRef->CombatComp->bCanAttack = false;
	bIsRollActive = true;
	OnRollDelegate.Broadcast(RollCost);

	FVector Direction = CharacterRef->GetCharacterMovement()->Velocity.Length()<1 ? CharacterRef->GetActorForwardVector() : CharacterRef->GetLastMovementInputVector();
	FRotator NewRotation = UKismetMathLibrary::MakeRotFromX(Direction);

	CharacterRef->SetActorRotation(NewRotation);
	float AnimDuration = CharacterRef->PlayAnimMontage(RollAnimMontage);

	FTimerHandle RollTimerHandle;
	CharacterRef->GetWorldTimerManager().SetTimer(RollTimerHandle, this, &UPlayerActionsComponent::FinishRollAnim, AnimDuration, false);
}

void UPlayerActionsComponent::FinishRollAnim()
{
	CharacterRef->CombatComp->bCanAttack = true;
	bIsRollActive = false;
}

