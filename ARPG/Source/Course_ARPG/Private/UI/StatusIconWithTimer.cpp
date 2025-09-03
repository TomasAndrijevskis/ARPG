
#include "UI/StatusIconWithTimer.h"
#include "Combat/Abilities/Base/AbilityComponent_Base.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"
#include "Components/TextBlock.h"


void UStatusIconWithTimer::InitializeWidget(float Duration, UTexture2D* Image, UAbilityComponent_Base* NewAbilityCompRef, FVector2d ImageSize)
{
	if (!NewAbilityCompRef || !Image)
	{
		return;
	}
	AbilityCompRef = NewAbilityCompRef;
	SetCountdownTime(Duration);
	SetStatusIcon(Image, ImageSize);
	AbilityCompRef->OnAbilityTimerChangedDelegate.AddDynamic(this, &UStatusIconWithTimer::SetCountdownTime);
	AbilityCompRef->OnAbilityFinishedDelegate.AddDynamic(this, &UStatusIconWithTimer::RemoveWidget);
}


void UStatusIconWithTimer::RemoveWidget()
{
	AbilityCompRef->OnAbilityTimerChangedDelegate.Clear();
	if (this->GetParent())
	{
		this->GetParent()->RemoveChild(this);
	}
}


void UStatusIconWithTimer::SetCountdownTime(float TimeLeft)
{
	Text_Countdown->SetText(FText::AsNumber(TimeLeft));
}


void UStatusIconWithTimer::SetStatusIcon(UTexture2D* Icon, FVector2d ImageSize)
{
	FSlateBrush ImageStyle;
	ImageStyle.SetResourceObject(Icon);
	ImageStyle.SetImageSize(ImageSize);
	Image_StatusIcon->SetBrush(ImageStyle);
}
