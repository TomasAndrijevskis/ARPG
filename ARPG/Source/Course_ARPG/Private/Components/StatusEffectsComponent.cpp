
#include "Components/StatusEffectsComponent.h"
#include "NiagaraComponent.h"
#include "GameFramework/Character.h"


void UStatusEffectsComponent::BeginPlay()
{
	Super::BeginPlay();
	CharacterRef = Cast<ACharacter>(GetOwner());
	if (CharacterRef) SkeletalMeshComp = CharacterRef->GetMesh();
	SetVisualData();
}


void UStatusEffectsComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}


void UStatusEffectsComponent::StopEffect()
{
	GetWorld()->GetTimerManager().ClearTimer(EffectTimerHandle);
	if (EffectRef)
	{
		EffectRef->DestroyComponent();
		EffectRef = nullptr;
	}
}
