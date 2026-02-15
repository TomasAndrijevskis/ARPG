
#include "UI/EnchantmentButton.h"
#include "Components/Button.h"
#include "UI/ConfirmationWindow.h"


void UEnchantmentButton::NativeConstruct()
{
	Super::NativeConstruct();
	Button_Element->OnClicked.AddUniqueDynamic(this, &UEnchantmentButton::CreateConfirmationWindow);
}


void UEnchantmentButton::SetEffect(EEffects NewEffect)
{
	Effect = NewEffect;
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
	UE_LOG(LogTemp, Warning, TEXT("Effect: %s"), *UEnum::GetValueAsString(Effect));
	if (!ConfirmationWindowWidgetClass) return;
	UConfirmationWindow* ConfirmationWindowRef = Cast<UConfirmationWindow>(CreateWidget(this, ConfirmationWindowWidgetClass));
	if (!ConfirmationWindowRef) return;
	ConfirmationWindowRef->AddToViewport(10);
	ConfirmationWindowRef->OnConfirmedDelegate.AddUObject(this, &UEnchantmentButton::OnConfirmed);
}


void UEnchantmentButton::OnConfirmed()
{
	OnEnchantmentConfirmedDelegate.Broadcast();
}