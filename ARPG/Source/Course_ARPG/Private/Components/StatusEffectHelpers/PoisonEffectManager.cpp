
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "Engine/DamageEvents.h"


void UPoisonEffectManager::BeginPlay()
{
	Super::BeginPlay();
	SetVisualData(EEffects::Poison);
}


void UPoisonEffectManager::SetVisualData(EEffects StatusEffect)
{
	if (!StatusEffectsVisualDataAsset) return;
	VisualEffect = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].VisualEffect;
	Icon = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].Icon;
}


void UPoisonEffectManager::HandlePoison(const float NewPoisonDuration, const float NewPoisonDamage, const float NewPoisonRate, UAbilityComponent_Base* NewAbilityCompRef)
{
	if (PoisonDamageResistance == 1) return;
	PoisonDamage = GetFinalDamage(NewPoisonDamage);
	PoisonDuration = NewPoisonDuration;
	PoisonRate = NewPoisonRate;
	AbilityCompRef = NewAbilityCompRef;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (VisualEffect && Icon)
	{
		EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				VisualEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator,EffectScale,
	EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	}
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UPoisonEffectManager::ApplyPoison, PoisonRate, true);
}


void UPoisonEffectManager::ApplyPoison()
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


float UPoisonEffectManager::GetFinalDamage(const float Damage)
{
	return Damage - (Damage * PoisonDamageResistance);
}


void UPoisonEffectManager::SetDamageResistance(float NewResistance)
{
	PoisonDamageResistance = NewResistance;
}
