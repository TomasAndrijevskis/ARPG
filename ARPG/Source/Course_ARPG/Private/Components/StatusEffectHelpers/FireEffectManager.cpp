
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "NiagaraComponentPoolMethodEnum.h"
#include "NiagaraFunctionLibrary.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Character.h"


void UFireEffectManager::BeginPlay()
{
	Super::BeginPlay();
	SetVisualData(EEffects::Fire);
}


void UFireEffectManager::SetVisualData(EEffects StatusEffect)
{
	if (!StatusEffectsVisualDataAsset) return;
	VisualEffect = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].VisualEffect;
	Icon = StatusEffectsVisualDataAsset->StatusEffects[StatusEffect].Icon;
}


void UFireEffectManager::HandleBurn(const float NewBurnDuration, const float NewBurnDamage, const bool bNewIsOverlapping, const float NewBurnRate)
{
	if (BurnDamageResistance == 1) return;
	BurnDamage = GetFinalDamage(NewBurnDamage);
	BurnDuration = NewBurnDuration;
	bIsOverlapping = bNewIsOverlapping;
	BurnRate = NewBurnRate;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (VisualEffect && Icon && bIsOverlapping)
	{
		EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				VisualEffect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator, EffectScale,
				EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		OnStatusIconCreateRequestDelegate.Broadcast(Icon, this);
	}
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UFireEffectManager::ApplyBurn, BurnRate, true);
}


void UFireEffectManager::ApplyBurn()
{
	if (BurnDuration > 0)
	{
		if (!bIsOverlapping) BurnDuration -= BurnRate;
		FDamageEvent TargetAttackedEvent{ };
		CharacterRef->TakeDamage(BurnDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else StopEffect();
}


float UFireEffectManager::GetFinalDamage(const float Damage)
{
	return Damage - (Damage * BurnDamageResistance);
}


void UFireEffectManager::SetDamageResistance(float NewResistance)
{
	BurnDamageResistance = NewResistance;
}
