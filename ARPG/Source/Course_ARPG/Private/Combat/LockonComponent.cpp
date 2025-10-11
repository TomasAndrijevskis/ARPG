
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

	if (TargetDistance >= BreakDistance)
	{
		EndLockon();
		return;
	}
	
	TargetLocation.Z -= 125;
	
	FRotator NewRotation = UKismetMathLibrary::FindLookAtRotation(CurrentLocation, TargetLocation);

	Controller->SetControlRotation(NewRotation);
}


void ULockonComponent::StartLockon(const float Radius)
{
	//for enemies in certain radius
	TArray<FHitResult> OutResults;
	FVector CurrentLocation = OwnerRef->GetActorLocation();
	FCollisionShape Sphere = FCollisionShape::MakeSphere(Radius);
	FCollisionQueryParams IgnoreParams{ FName{TEXT("Ignore Collision Params")}, false, OwnerRef};
	
	//finds first collision that detects; multi -> all collisions detected
	AActor* TargetActor = nullptr;
	bool bHasFoundTarget = GetWorld()->SweepMultiByChannel(OutResults, CurrentLocation, CurrentLocation, FQuat::Identity,  ECollisionChannel::ECC_GameTraceChannel1, Sphere, IgnoreParams);
	if (!bHasFoundTarget)
	{
		return;
	}
	for (FHitResult OutResult : OutResults)
	{
		if (!OutResult.GetActor()->Implements<UEnemy>())
		{
			continue;
		}
		FHitResult HitResult;//for obstacles in sight between player and enemy
		bool bObstaclesBetween = GetWorld()->LineTraceSingleByChannel(HitResult, CurrentLocation, OutResult.GetActor()->GetActorLocation(), ECollisionChannel::ECC_Visibility);
		if (bObstaclesBetween)
		{
			UE_LOG(LogTemp, Error, TEXT("Object: %s"), *HitResult.GetActor()->GetName());
			continue;
		}
		TargetActor = OutResult.GetActor();
	}
	if (TargetActor != nullptr)
	{
		CurrentTargetActor = TargetActor;
		Controller->SetIgnoreLookInput(true);
		MovementComponent->bOrientRotationToMovement = false;
		MovementComponent->bUseControllerDesiredRotation = true;
		SpringArmComponent->TargetOffset = FVector{0.0,0.0, 80.0};

		IEnemy::Execute_OnSelect(CurrentTargetActor);

		OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
		bIsLocked = true;
	}
}


void ULockonComponent::EndLockon()
{
	IEnemy::Execute_OnDeselect(CurrentTargetActor);

	bIsLocked = false;
	CurrentTargetActor = nullptr;
	MovementComponent->bOrientRotationToMovement = true;
	MovementComponent->bUseControllerDesiredRotation = false;
	SpringArmComponent->TargetOffset = FVector::ZeroVector;
	Controller->ResetIgnoreLookInput();

	OnUpdatedTargetDelegate.Broadcast(CurrentTargetActor);
}


void ULockonComponent::ToggleLockon(const float Radius)
{
	if (IsValid(CurrentTargetActor))
	{
		EndLockon();
	}
	else
	{
		StartLockon(Radius);
	}
}



bool ULockonComponent::IsLocked() const
{
	return bIsLocked;
}