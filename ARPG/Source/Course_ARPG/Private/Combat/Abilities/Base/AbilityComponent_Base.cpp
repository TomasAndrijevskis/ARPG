
#include "Combat/Abilities/Base/AbilityComponent_Base.h"


UAbilityComponent_Base::UAbilityComponent_Base()
{
	PrimaryComponentTick.bCanEverTick = true;
}


float UAbilityComponent_Base::GetAbilityDuration() const
{
	return AbilityDuration;
}


void UAbilityComponent_Base::SetAbilityDuration(const float NewAbilityDuration)
{
	AbilityDuration = NewAbilityDuration;
}