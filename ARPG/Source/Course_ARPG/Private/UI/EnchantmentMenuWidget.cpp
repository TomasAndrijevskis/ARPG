
#include "UI/EnchantmentMenuWidget.h"
#include "Blueprint/WidgetTree.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "Components/HorizontalBoxSlot.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ConfirmationWindow.h"
#include "UI/EnchantmentButton.h"
#include "UI/Buttons/MenuButtonBase.h"


void UEnchantmentMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	CreateButtons();
	Button_Close->Button->OnClicked.AddUniqueDynamic(this, &UEnchantmentMenuWidget::RemoveWidget);
	Button_RemoveEnchantment->Button->OnClicked.AddUniqueDynamic(this, &UEnchantmentMenuWidget::CreateConfirmationWindow);
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
	NewButton->OnEnchantmentConfirmedDelegate.AddUObject(this, &UEnchantmentMenuWidget::RemoveWidget);
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
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	PlayerRef->HandleEffectChange(EEffects::Empty);
	RemoveWidget();
}


void UEnchantmentMenuWidget::RemoveWidget()
{
	AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PC) return;
	PC->HandleEnchantmentMenuQuit();
	this->RemoveFromParent();
}
