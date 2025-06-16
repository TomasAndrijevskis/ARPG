


#include "Characters/LookAtPlayerComponent.h"
#include "Kismet/KismetMathLibrary.h"

ULookAtPlayerComponent::ULookAtPlayerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	
}


void ULookAtPlayerComponent::BeginPlay()
{
	Super::BeginPlay();
	
	
}


void ULookAtPlayerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(!bCanRotate)
	{
		return;
	}
	AActor* OwnerRef = GetOwner();
	FVector OwnerLocation = OwnerRef->GetActorLocation();
	FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();

	FRotator CurrentRotation = OwnerRef->GetActorRotation();
	FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(OwnerLocation, PlayerLocation);

	FRotator NewRotation = UKismetMathLibrary::RInterpTo_Constant(CurrentRotation, DesiredRotation, DeltaTime, Speed);
	FRotator NewYawOnlyRotation = {CurrentRotation.Pitch, NewRotation.Yaw, CurrentRotation.Roll};
	
	OwnerRef->SetActorRotation(NewYawOnlyRotation);
}

