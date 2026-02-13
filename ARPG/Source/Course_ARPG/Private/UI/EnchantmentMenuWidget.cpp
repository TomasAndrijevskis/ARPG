
#include "UI/EnchantmentMenuWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"


void UEnchantmentMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	CreateButtons();
	Button_Close->OnClicked.AddUniqueDynamic(this, &UEnchantmentMenuWidget::RemoveWidget);
}


void UEnchantmentMenuWidget::CreateButtons()
{
	if (!StatusEffectsVisualDataAsset) return;
	for (const auto& StatusEffect : StatusEffectsVisualDataAsset->StatusEffects)
	{
		if (StatusEffect.Value.Icon) SetButtonAlignment(CreateButton(StatusEffect.Value.Icon));
	}
}


UButton* UEnchantmentMenuWidget::CreateButton(UTexture2D* Image)
{
	UButton* NewButton = WidgetTree->ConstructWidget<UButton>(UButton::StaticClass());
	if (!NewButton) return nullptr;
	FButtonStyle CustomStyle;
	ApplyImageStyle(Image, CustomStyle.Normal, ESlateBrushDrawType::Image);
	ApplyImageStyle(Image, CustomStyle.Hovered, ESlateBrushDrawType::RoundedBox);
	ApplyImageStyle(Image, CustomStyle.Pressed, ESlateBrushDrawType::RoundedBox);
	ApplyImageStyle(Image, CustomStyle.Disabled, ESlateBrushDrawType::Image);
	NewButton->SetStyle(CustomStyle);
	return NewButton;
}


void UEnchantmentMenuWidget::ApplyImageStyle(UTexture2D* Image, FSlateBrush& BrushStyle,TEnumAsByte<ESlateBrushDrawType::Type> DrawType)
{
	BrushStyle.SetResourceObject(Image);
	BrushStyle.Tiling = ESlateBrushTileType::NoTile;
	BrushStyle.DrawAs = DrawType;
	BrushStyle.ImageSize = ImageSize;
}


void UEnchantmentMenuWidget::SetButtonAlignment(UButton* Button)
{
	UHorizontalBoxSlot* HBSlot = HorizontalBox_Elements->AddChildToHorizontalBox(Button);
	if (HBSlot)
	{
		HBSlot->SetPadding(FMargin(10.f, 5.f));
		HBSlot->SetHorizontalAlignment(HAlign_Fill);
		HBSlot->SetVerticalAlignment(VAlign_Center);
	}
}


void UEnchantmentMenuWidget::RemoveWidget()
{
	AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PC) return;
	PC->HandleEnchantmentMenuQuit();
	this->RemoveFromParent();
}