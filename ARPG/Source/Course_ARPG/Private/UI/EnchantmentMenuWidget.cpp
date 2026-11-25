
#include "UI/EnchantmentMenuWidget.h"
#include "Components/EnchantmentComponent.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "UI/ConfirmationWindow.h"
#include "UI/EnchantmentButton.h"
#include "UI/HUD_Base.h"
#include "UI/Buttons/MenuButtonBase.h"


void UEnchantmentMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	CreateButtons();
	Button_Close->OnButtonClickedDelegate.AddUniqueDynamic(this, &UEnchantmentMenuWidget::RemoveWidget);
	Button_RemoveEnchantment->OnButtonClickedDelegate.AddUniqueDynamic(this, &UEnchantmentMenuWidget::CreateConfirmationWindow);
}


void UEnchantmentMenuWidget::CreateButtons()
{
	if (!StatusEffectsVisualDataAsset) return;
	for (const auto& StatusEffect : StatusEffectsVisualDataAsset->StatusEffects)
	{
		if (StatusEffect.Value.Icon) SetButtonAlignment(CreateButton(StatusEffect.Value.Icon, StatusEffect.Key));
	}
}


UEnchantmentButton* UEnchantmentMenuWidget::CreateButton(UTexture2D* Image, EEffects Effect)
{
	if (!EnchantmentButtonClass) return nullptr;
	UEnchantmentButton* NewButton = Cast<UEnchantmentButton>(CreateWidget(this, EnchantmentButtonClass));
	if (!NewButton) return nullptr;
	NewButton->SetImage(Image);
	NewButton->SetEffect(Effect);
	NewButton->OnEnchantmentConfirmedDelegate.AddUObject(this, &UEnchantmentMenuWidget::ChangeEnchantment);
	return NewButton;
}


void UEnchantmentMenuWidget::SetButtonAlignment(UEnchantmentButton* Button)
{
	UHorizontalBoxSlot* HBSlot = HorizontalBox_Elements->AddChildToHorizontalBox(Button);
	if (HBSlot)
	{
		HBSlot->SetPadding(FMargin(10.f, 10.f));
		HBSlot->SetHorizontalAlignment(HAlign_Fill);
		HBSlot->SetVerticalAlignment(VAlign_Center);
	}
}


void UEnchantmentMenuWidget::CreateConfirmationWindow()
{
	if (!ConfirmationWindowWidgetClass) return;
	UConfirmationWindow* ConfirmationWindowRef = Cast<UConfirmationWindow>(CreateWidget(this, ConfirmationWindowWidgetClass));
	if (!ConfirmationWindowRef) return;
	ConfirmationWindowRef->AddToViewport(10);
	ConfirmationWindowRef->OnConfirmedDelegate.AddUObject(this, &UEnchantmentMenuWidget::RemoveEnchantment);
}


void UEnchantmentMenuWidget::RemoveEnchantment()
{
	ChangeEnchantment(EEffects::Empty);
}


void UEnchantmentMenuWidget::ChangeEnchantment(EEffects NewEffect)
{
	if (EnchantmentComp)
	{
		EnchantmentComp->HandleEffectChange(NewEffect);
	}
	RemoveWidget();
}


void UEnchantmentMenuWidget::RemoveWidget()
{
	if (AHUD_Base* HUD = GetHUD()) HUD->ToggleEnchantmentWidget();
}
