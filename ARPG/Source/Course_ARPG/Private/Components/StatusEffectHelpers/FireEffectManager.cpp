
#include "Components/StatusEffectHelpers/FireEffectManager.h"
#include "NiagaraFunctionLibrary.h"


void UFireEffectManager::HandleEffect(float NewDuration, float NewDamage, float NewDamageRate, bool NewIsTakingDamage)
{
	if (!VisualEffectComponent || !Icon || Resistance == 1) return;
	Super::HandleEffect(NewDuration, NewDamage, NewDamageRate, NewIsTakingDamage);
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UFireEffectManager::ApplyProlongedDamage, DamageRate, true);
}


void UFireEffectManager::SetEffectType(){EffectType = EEffects::Fire;}