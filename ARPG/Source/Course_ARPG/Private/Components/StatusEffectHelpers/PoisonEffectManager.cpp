
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "Engine/DamageEvents.h"


void UPoisonEffectManager::SetVisualData()
{
	if (!StatusEffectsVisualDataAsset) return;
	Effect = StatusEffectsVisualDataAsset->PoisonEffectData.Effect;
	Icon = StatusEffectsVisualDataAsset->PoisonEffectData.Icon;
}


void UPoisonEffectManager::HandlePoison(const float NewPoisonDuration, const float NewPoisonDamage, const float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef)
{
	PoisonDamage = NewPoisonDamage;
	PoisonDuration = NewPoisonDuration;
	PoisonRate = NewPoisonRate;
	AbilityCompRef = NewAbilityCompRef;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (Effect && Icon)
	{
		EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				Effect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	}
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UPoisonEffectManager::Poison, PoisonRate, true);
}


void UPoisonEffectManager::Poison()
{
	if (PoisonDuration > 0)
	{
		PoisonDuration -= PoisonRate;
		AbilityCompRef->OnAbilityTimerChangedDelegate.Broadcast(PoisonDuration);
		FDamageEvent TargetAttackedEvent{ };
		CharacterRef->TakeDamage(PoisonDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else
	{
		AbilityCompRef->OnAbilityFinishedDelegate.Broadcast();
		StopEffect();
	}
}
