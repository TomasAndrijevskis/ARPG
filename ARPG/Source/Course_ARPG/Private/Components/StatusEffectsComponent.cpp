
#include "Components/StatusEffectsComponent.h"
#include "NiagaraComponent.h"
#include "Characters/Enemy/EnemyCharacter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "GameFramework/Character.h"


void UStatusEffectsComponent::BeginPlay()
{
	Super::BeginPlay();
	OnResistanceChangedDelegate.AddUObject(this, &UStatusEffectsComponent::SetDamageResistance);
	CharacterRef = Cast<ACharacter>(GetOwner());
	if (CharacterRef) SkeletalMeshComp = CharacterRef->GetMesh();
	HandleOwner();
}


void UStatusEffectsComponent::SetVisualData(EEffects StatusEffect)
{
	if (!StatusEffectsVisualDataAsset) return;
	VisualEffect = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].VisualEffect;
	Icon = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].Icon;
	DamageType = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].DamageType;
}


void UStatusEffectsComponent::HandleOwner()
{
	if (Cast<AMainCharacter_Base>(CharacterRef))
		OnStatusIconCreateRequestDelegate.AddUObject(Cast<AMainCharacter_Base>(CharacterRef), &AMainCharacter_Base::CreateStatusEffectIcon);
	if (Cast<AEnemyCharacter>(CharacterRef))
		OnStatusIconCreateRequestDelegate.AddUObject(Cast<AEnemyCharacter>(CharacterRef), &AEnemyCharacter::CreateStatusEffectIcon);
}


void UStatusEffectsComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
	GetWorld()->GetTimerManager().ClearAllTimersForObject(this);
}


void UStatusEffectsComponent::StopEffect()
{
	GetWorld()->GetTimerManager().ClearTimer(EffectTimerHandle);
	OnStatusIconRemoveRequestDelegate.Broadcast();
	if (EffectRef)
	{
		EffectRef->DestroyComponent();
		EffectRef = nullptr;
	}
}