
#include "Combat/Abilities/Base/AbilityComponent_Base.h"


UAbilityComponent_Base::UAbilityComponent_Base()
{
	PrimaryComponentTick.bCanEverTick = true;
}


void UAbilityComponent_Base::SetAbilityDuration(const float NewAbilityDuration){AbilityDuration = NewAbilityDuration;}

float UAbilityComponent_Base::GetAbilityDuration() const{return AbilityDuration;}