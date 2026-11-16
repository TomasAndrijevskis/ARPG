
#include "UI/BaseClass/UserWidget_Base.h"
#include "UI/HUD_Base.h"


AHUD_Base* UUserWidget_Base::GetHUD() const
{
	if (APlayerController* PC = GetOwningPlayer())
	{
		return Cast<AHUD_Base>(PC->GetHUD());
	}
	return nullptr;
}

