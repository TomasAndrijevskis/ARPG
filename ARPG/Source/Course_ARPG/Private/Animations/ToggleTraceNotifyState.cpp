


#include "Animations/ToggleTraceNotifyState.h"
#include "Combat/TraceComponent.h"


void UToggleTraceNotifyState::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, const FAnimNotifyEventReference& EventReference)
{
	ToggleTraceState(true, MeshComp);
}

void UToggleTraceNotifyState::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, const FAnimNotifyEventReference& EventReference)
{
	ToggleTraceState(false, MeshComp);
}

void UToggleTraceNotifyState::ToggleTraceState(bool bIsAttacking, USkeletalMeshComponent* MeshComp)
{
	if (!IsValid(MeshComp))
	{
		return;
	}

	AActor* Owner = MeshComp->GetOwner();
	if (!IsValid(Owner))
	{
		return;
	}

	UTraceComponent* TraceComp = Owner->FindComponentByClass<UTraceComponent>();
	if (!IsValid(TraceComp))
	{
		return;
	}
	
	TraceComp->bIsAttacking = bIsAttacking;
}
