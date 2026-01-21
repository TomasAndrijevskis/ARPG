
#include "Components/LookAtPlayerComponent.h"
#include "Kismet/KismetMathLibrary.h"


ULookAtPlayerComponent::ULookAtPlayerComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void ULookAtPlayerComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if(!bCanRotate) return;
	AActor* OwnerRef = GetOwner();
	const FVector OwnerLocation = OwnerRef->GetActorLocation();
	const FVector PlayerLocation = GetWorld()->GetFirstPlayerController()->GetPawn()->GetActorLocation();
	const FRotator CurrentRotation = OwnerRef->GetActorRotation();
	const FRotator DesiredRotation = UKismetMathLibrary::FindLookAtRotation(OwnerLocation, PlayerLocation);
	const FRotator NewRotation = UKismetMathLibrary::RInterpTo_Constant(CurrentRotation, DesiredRotation, DeltaTime, Speed);
	const FRotator NewYawOnlyRotation = {CurrentRotation.Pitch, NewRotation.Yaw, CurrentRotation.Roll};
	OwnerRef->SetActorRotation(NewYawOnlyRotation);
}