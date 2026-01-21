
#include "UI/ControlSlot.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"


void UControlSlot::InitializeControlSlot(UTexture2D* NewIcon, const FText& NewDescription)
{
	Image_Icon->SetBrushFromTexture(NewIcon, true);
	TextBlock_Description->SetText(NewDescription);
}