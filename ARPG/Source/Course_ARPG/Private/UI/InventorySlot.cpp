
#include "UI/InventorySlot.h"
#include "Components/Button.h"


void UInventorySlot::NativeConstruct()
{
	Super::NativeConstruct();
	SetButtonStyle();
}


void UInventorySlot::SetButtonStyle()
{
	FButtonStyle CustomStyle;
	ApplyButtonStyle(CustomStyle.Normal, ESlateBrushDrawType::Image, FSlateColor(FLinearColor(1.f, 1.f, 1.f, 1.f)));
	ApplyButtonStyle(CustomStyle.Hovered, ESlateBrushDrawType::Image, FSlateColor(FLinearColor(1.f, 1.f, 1.f, .4f)));
	ApplyButtonStyle(CustomStyle.Pressed, ESlateBrushDrawType::Image, FSlateColor(FLinearColor(1.f, 1.f, 1.f, .7f)));
	Button_Slot->SetStyle(CustomStyle);
}


void UInventorySlot::ApplyButtonStyle(FSlateBrush& BrushStyle, TEnumAsByte<ESlateBrushDrawType::Type> DrawType, const FSlateColor& Color) const
{
	if (Icon) BrushStyle.SetResourceObject(Icon);
	BrushStyle.TintColor = Color;
	BrushStyle.Tiling = ESlateBrushTileType::NoTile;
	BrushStyle.DrawAs = DrawType;
	BrushStyle.ImageSize = IconSize;
}


void UInventorySlot::SetIcon(UTexture2D* NewIcon){Icon = NewIcon;}