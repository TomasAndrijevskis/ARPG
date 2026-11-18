
#include "UI/BaseClass/UserWidget_Base.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/ARPG_PlayerState.h"
#include "UI/HUD_Base.h"


void UUserWidget_Base::NativeConstruct()
{
	Super::NativeConstruct();
	this->OnVisibilityChanged.AddDynamic(this, &UUserWidget_Base::HandleVisibilityChanged);
}

AHUD_Base* UUserWidget_Base::GetHUD() const
{
	if (APlayerController* PC = GetOwningPlayer())
	{
		return Cast<AHUD_Base>(PC->GetHUD());
	}
	return nullptr;
}

AARPG_PlayerController* UUserWidget_Base::GetPlayerController() const
{
	return Cast<AARPG_PlayerController>(GetOwningPlayer());
}

AARPG_PlayerState* UUserWidget_Base::GetPlayerState() const
{
	if (const APlayerController* PC = GetPlayerController())
	{
		return PC->GetPlayerState<AARPG_PlayerState>();
	}
	return nullptr;
}