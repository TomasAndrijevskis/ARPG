
#include "Combat/Abilities/Base/AbilityComponent_Base.h"


UAbilityComponent_Base::UAbilityComponent_Base()
{
	PrimaryComponentTick.bCanEverTick = true;
}


UTexture2D* UAbilityComponent_Base::GetIcon() const
{
	if (!Icon)
	{
		return nullptr;
	}
	return Icon;
}


float UAbilityComponent_Base::GetAbilityDuration() const
{
	return AbilityDuration;
}


void UAbilityComponent_Base::SetAbilityDuration(const float NewAbilityDuration)
{
	AbilityDuration = NewAbilityDuration;
}

