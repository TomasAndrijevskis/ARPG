
#include "UI/StatusIcon.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"
#include "Components/TextBlock.h"


void UStatusIcon::SetValue(const float TimeLeft)
{
	Text_Value->SetText(FText::AsNumber(TimeLeft));
}


void UStatusIcon::SetStatusIcon(UTexture2D* Icon, const FVector2d& ImageSize)
{
	FSlateBrush ImageStyle;
	ImageStyle.SetResourceObject(Icon);
	ImageStyle.SetImageSize(ImageSize);
	Image_Icon->SetBrush(ImageStyle);
}


void UStatusIcon::RemoveWidget()
{
	if (this->GetParent()) this->GetParent()->RemoveChild(this);
}