
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "NiagaraComponentPoolMethodEnum.h"
#include "NiagaraFunctionLibrary.h"
#include "Components/StatusEffectHelpers/Data/StatusEffectsVisualData.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Character.h"


void UFireEffectManager::SetVisualData()
{
	if (!StatusEffectsVisualDataAsset) return;
	Effect = StatusEffectsVisualDataAsset->FireEffectData.Effect;
	Icon = StatusEffectsVisualDataAsset->FireEffectData.Icon;
}


void UFireEffectManager::HandleBurn(const float NewBurnDuration, const float NewBurnDamage, const bool bNewIsOverlapping, const float NewBurnRate)
{
	BurnDamage = NewBurnDamage;
	BurnDuration = NewBurnDuration;
	bIsOverlapping = bNewIsOverlapping;
	BurnRate = NewBurnRate;
	const FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	if (Effect)
	{
		EffectRef = UNiagaraFunctionLibrary::SpawnSystemAttached(
				Effect,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator, EffectScale,
				EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
	}
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UFireEffectManager::Burn, BurnRate, true);
}


void UFireEffectManager::Burn()
{
	if (BurnDuration > 0)
	{
		if (!bIsOverlapping) BurnDuration -= BurnRate;
		FDamageEvent TargetAttackedEvent{ };
		CharacterRef->TakeDamage(BurnDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else StopEffect();
}
