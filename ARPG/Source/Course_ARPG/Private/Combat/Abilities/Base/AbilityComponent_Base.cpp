
#include "Combat/Abilities/Base/AbilityComponent_Base.h"


UAbilityComponent_Base::UAbilityComponent_Base()
{
	PrimaryComponentTick.bCanEverTick = true;
}


UTexture2D* UAbilityComponent_Base::GetIcon()
{
	if (!Icon)
	{
		return nullptr;
	}
	return Icon;
}


float UAbilityComponent_Base::GetAbilityDuration()
{
	return AbilityDuration;
}


void UAbilityComponent_Base::SetAbilityDuration(float NewAbilityDuration)
{
	AbilityDuration = NewAbilityDuration;
}

