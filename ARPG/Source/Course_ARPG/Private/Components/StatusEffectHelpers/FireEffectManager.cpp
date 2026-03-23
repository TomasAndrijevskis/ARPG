
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "NiagaraFunctionLibrary.h"


void UFireEffectManager::HandleEffect()
{
	if (!VisualEffectComponent || !Icon || Resistance == 1) return;
	Super::HandleEffect();
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UFireEffectManager::ApplyProlongedDamage, DamageRate, true);
}


void UFireEffectManager::SetEffectType(){EffectType = EEffects::Fire;}