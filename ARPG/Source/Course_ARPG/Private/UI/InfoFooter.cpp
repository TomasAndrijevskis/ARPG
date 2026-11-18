
#include "UI/InfoFooter.h"
#include "UI/HUD_Base.h"
#include "UI/Buttons/MenuButtonBase.h"


void UInfoFooter::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (AHUD_Base* HUD = GetHUD())
	{
		Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(HUD, &AHUD_Base::ToggleBonfireWidget);
	}
}
