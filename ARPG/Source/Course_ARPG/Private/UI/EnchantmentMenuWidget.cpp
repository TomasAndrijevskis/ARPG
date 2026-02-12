
#include "UI/EnchantmentMenuWidget.h"


void UEnchantmentMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();
	CreateButtons();
}


void UEnchantmentMenuWidget::CreateButtons()
{
	if (!StatusEffectsVisualDataAsset) return;
}

/*
UButton* UEnchantmentMenuWidget::CreateButton(UTexture2D* Image)
{
	
}*/