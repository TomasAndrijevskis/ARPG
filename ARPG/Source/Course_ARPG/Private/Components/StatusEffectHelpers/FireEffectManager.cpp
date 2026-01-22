
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "NiagaraComponentPoolMethodEnum.h"
#include "NiagaraFunctionLibrary.h"
#include "Engine/DamageEvents.h"
#include "GameFramework/Character.h"


void UFireEffectManager::HandleBurn(const float NewBurnDuration, const float NewBurnDamage, const bool bNewIsOverlapping, const float NewBurnRate)
{
	BurnDamage = NewBurnDamage;
	BurnDuration = NewBurnDuration;
	bIsOverlapping = bNewIsOverlapping;
	BurnRate = NewBurnRate;
	
	FVector SocketLocation = SkeletalMeshComp->GetSocketLocation(SocketName);
	
	if (BurnEffectRef && !BurnData.Effect)
	{
		BurnData.Effect = UNiagaraFunctionLibrary::SpawnSystemAttached(
				BurnEffectRef,SkeletalMeshComp,SocketName,SocketLocation,FRotator::ZeroRotator, EffectScale,
				EAttachLocation::KeepWorldPosition,false, ENCPoolMethod::None,true,true);
		BurnData.Type = EStatusEffects::Burn;
		BurnData.TimerHandle = BurnTimerHandle;
	}
	GetWorld()->GetTimerManager().SetTimer(BurnTimerHandle, this, &UFireEffectManager::Burn, BurnRate, true);
}


void UFireEffectManager::Burn()
{
	if (BurnDuration > 0)
	{
		if (!bIsOverlapping) BurnDuration -= BurnRate;
		FDamageEvent TargetAttackedEvent{ };
		CharacterRef->TakeDamage(BurnDamage, TargetAttackedEvent, GetOwner()->GetInstigatorController(), GetOwner());
	}
	else StopEffect(BurnData);
}
