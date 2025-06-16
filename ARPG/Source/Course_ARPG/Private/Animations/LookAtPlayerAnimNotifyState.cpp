


#include "Animations/LookAtPlayerAnimNotifyState.h"
#include "Characters/LookAtPlayerComponent.h"

void ULookAtPlayerAnimNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	ToggleRotationState(true, MeshComp);
}

void ULookAtPlayerAnimNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	ToggleRotationState(false, MeshComp);
}

void ULookAtPlayerAnimNotifyState::ToggleRotationState(bool bCanRotate, USkeletalMeshComponent* MeshComp)
{
	AActor* OwnerRef = MeshComp->GetOwner();
	if (!IsValid(OwnerRef))
	{
		return;
	}
	ULookAtPlayerComponent* RotationComp = OwnerRef->FindComponentByClass<ULookAtPlayerComponent>();
	if (!IsValid(RotationComp))
	{
		return;
	}
	RotationComp->bCanRotate = bCanRotate;
}
