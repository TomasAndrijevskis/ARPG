
#include "Combat/LockonComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/KismetMathLibrary.h"
#include "GameFramework/SpringArmComponent.h"
#include "Interfaces/Enemy.h"

ULockonComponent::ULockonComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}


void ULockonComponent::BeginPlay()
{
	Super::BeginPlay();
	
	OwnerRef = GetOwner<ACharacter>();
	Controller = GetWorld()->GetFirstPlayerController();
	MovementComponent = OwnerRef->GetCharacterMovement();

	SpringArmComponent = OwnerRef->FindComponentByClass<USpringArmComponent>();
}


void ULockonComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!IsValid(CurrentTargetActor))
	{
		return;
	}

	FVector CurrentLocation = OwnerRef->GetActorLocation();
	FVector TargetLocation = CurrentTargetActor->GetActorLocation();
	
	double TargetDistance = FVector::Distance(CurrentLocation, TargetLocation);

	if (TargetDistance>=BreakDistance)
	{
		EndLockon();
		return;
	}
	
	TargetLocation.Z -=125;
	
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);

	Controller->SetControlRotation(NewRotation);
}


void ULockonComponent::StartLockon(float Radius)
{
	FHitResult OutResult;
	FVector CurrentLocation = {OwnerRef->GetActorLocation()};
	FCollisionShape Sphere{FCollisionShape::MakeSphere(Radius)};
	FCollisionQueryParams IgnoreParams{ FName{TEXT("Ignore Collision Params")}, false, OwnerRef};
	
	//finds first collision that detects; multi -> all collisions detected
	bool bHasFoundTarget {GetWorld()->SweepSingleByChannel(OutResult, CurrentLocation, CurrentLocation, FQuat::Identity,  ECollisionChannel::ECC_GameTraceChannel1, Sphere, IgnoreParams)};

	if (!bHasFoundTarget)
	{
		return;
	}

	if (!OutResult.GetActor()->Implements<UEnemy>()){return;}
		
	CurrentTargetActor = OutResult.GetActor();
	
	Controller->SetIgnoreLookInput(true);
	MovementComponent->bOrientRotationToMovement = false;
	MovementComponent->bUseControllerDesiredRotation = true;
	SpringArmComponent->TargetOffset = FVector{0.0,0.0, 80.0};

	IEnemy::Execute_OnSelect(CurrentTargetActor);

	OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
	//UE_LOG(LogTemp, Warning, TEXT("Lockon: %s"), *OutResult.GetActor()->GetName());
}


void ULockonComponent::EndLockon()
{
	IEnemy::Execute_OnDeselect(CurrentTargetActor);
	
	CurrentTargetActor = nullptr;
	MovementComponent->bOrientRotationToMovement = true;
	MovementComponent->bUseControllerDesiredRotation = false;
	SpringArmComponent->TargetOffset = FVector::ZeroVector;
	Controller->ResetIgnoreLookInput();

	OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
}


void ULockonComponent::ToggleLockon(float Radius)
{
	if (IsValid(CurrentTargetActor))
	{
		UE_LOG(LogTemp, Error, TEXT("Lockon|Valid actor: %s"), *CurrentTargetActor->GetName());
		EndLockon();
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("Lockon|NotValid "));
		StartLockon(Radius);
	}
}
