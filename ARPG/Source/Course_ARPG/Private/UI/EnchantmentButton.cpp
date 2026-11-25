
#include "UI/EnchantmentButton.h"
#include "Components/Button.h"
#include "UI/ConfirmationWindow.h"


void UEnchantmentButton::NativeConstruct()
{
	Super::NativeConstruct();
	Button_Element->OnClicked.AddUniqueDynamic(this, &UEnchantmentButton::CreateConfirmationWindow);
}


void UEnchantmentButton::SetImage(UTexture2D* Image)
{
	if (!Image) return;
	FButtonStyle CustomStyle;
	ApplyImageStyle(Image, CustomStyle.Normal, ESlateBrushDrawType::Image);
	ApplyImageStyle(Image, CustomStyle.Hovered, ESlateBrushDrawType::RoundedBox);
	ApplyImageStyle(Image, CustomStyle.Pressed, ESlateBrushDrawType::RoundedBox);
	ApplyImageStyle(Image, CustomStyle.Disabled, ESlateBrushDrawType::Image);
	Button_Element->SetStyle(CustomStyle);
}


void UEnchantmentButton::ApplyImageStyle(UTexture2D* Image, FSlateBrush& BrushStyle,TEnumAsByte<ESlateBrushDrawType::Type> DrawType)
{
	BrushStyle.SetResourceObject(Image);
	BrushStyle.Tiling = ESlateBrushTileType::NoTile;
	BrushStyle.DrawAs = DrawType;
	BrushStyle.ImageSize = ImageSize;
}


void UEnchantmentButton::CreateConfirmationWindow()
{
	if (!ConfirmationWindowWidgetClass) return;
	if (UConfirmationWindow* ConfirmationWindowRef = Cast<UConfirmationWindow>(CreateWidget(this, ConfirmationWindowWidgetClass)))
	{
		ConfirmationWindowRef->AddToViewport(10);
		ConfirmationWindowRef->OnConfirmedDelegate.AddUObject(this, &UEnchantmentButton::OnEnchantmentConfirmed);
	}
}


void UEnchantmentButton::OnEnchantmentConfirmed()
{
	OnEnchantmentConfirmedDelegate.Broadcast(Effect);
}