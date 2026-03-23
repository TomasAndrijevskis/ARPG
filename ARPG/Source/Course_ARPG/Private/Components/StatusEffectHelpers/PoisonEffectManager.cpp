
#include "Components/StatusEffectHelpers/PoisonEffectManager.h"
#include "NiagaraFunctionLibrary.h"
#include "Characters/Player/MainCharacter_Base.h"


void UPoisonEffectManager::HandleEffect()
{
	if (!VisualEffectComponent || !Icon || Resistance == 1) return;
	Super::HandleEffect();
	GetWorld()->GetTimerManager().SetTimer(EffectTimerHandle, this, &UPoisonEffectManager::ApplyProlongedDamage, DamageRate, true);
}


void UPoisonEffectManager::SetEffectType(){EffectType = EEffects::Poison;}