
#include "UI/AbilityUpgradeScreen.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "UI/DescriptionWidget.h"


void UAbilityUpgradeScreen::InitializeAbility(UAbilityComponent_Base* AbilityComp)
{
	AbilityComp_REF = AbilityComp;
	SetIconStyle(AbilityComp_REF->GetIcon());
	AbilityDescription = AbilityComp_REF->GetDescription();
	UpgradeDescription = AbilityComp_REF->GetUpgradeRequirements();
	SetButtonText();
	SetAbilityIconEnable();
	SetupButtonCallbacks();
}


void UAbilityUpgradeScreen::SetupButtonCallbacks()
{
	if (Button_UpgradeAbility)
	{
		BindUpgradeButtonAction(AbilityComp_REF->GetAbilityAvailability());
		
		Button_UpgradeAbility->OnHovered.AddDynamic(this, &UAbilityUpgradeScreen::CreateUpgradeDescriptionWidget);
		Button_UpgradeAbility->OnUnhovered.AddDynamic(this, &UAbilityUpgradeScreen::RemoveUpgradeDescriptionWidget);
	}

	if (Button_AbilityIcon)
	{
		Button_AbilityIcon->OnHovered.AddDynamic(this, &UAbilityUpgradeScreen::CreateAbilityDescriptionWidget);
		Button_AbilityIcon->OnUnhovered.AddDynamic(this, &UAbilityUpgradeScreen::RemoveAbilityDescriptionWidget);
	}
}


void UAbilityUpgradeScreen::BindUpgradeButtonAction(bool bIsAbilityActive)
{
	if (bIsAbilityActive)
	{
		Button_UpgradeAbility->OnClicked.Clear();
		Button_UpgradeAbility->OnClicked.AddDynamic(this, &UAbilityUpgradeScreen::Test);
	}
	else
	{
		Button_UpgradeAbility->OnClicked.Clear();
		Button_UpgradeAbility->OnClicked.AddDynamic(this, &UAbilityUpgradeScreen::UnlockAbility);	
	}
}


void UAbilityUpgradeScreen::CreateDescriptionWidget(UHorizontalBox* HorizontalBox, TSubclassOf<UDescriptionWidget> WidgetClass, FString Description)
{
	if (!WidgetClass)
	{
		UE_LOG(LogTemp, Error, TEXT("Null!"));
		return;
	}
	
	UDescriptionWidget* DescriptionWidget = CreateWidget<UDescriptionWidget>(GetWorld(), WidgetClass);
	
	if (!DescriptionWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create"));
		return;
	}
	
	HorizontalBox->AddChild(DescriptionWidget);
	DescriptionWidget->SetDescription(Description);	
}


void UAbilityUpgradeScreen::RemoveDescriptionWidget(UHorizontalBox* HorizontalBox)
{
	HorizontalBox->ClearChildren();
}


void UAbilityUpgradeScreen::UnlockAbility()
{
	AbilityComp_REF->SetAbilityAvailability(true);
	SetButtonText();
	SetAbilityIconEnable();
	BindUpgradeButtonAction(AbilityComp_REF->GetAbilityAvailability());
}


void UAbilityUpgradeScreen::SetButtonText()
{
	if (AbilityComp_REF->GetAbilityAvailability())
	{
		Text_Upgrade->SetText(FText::FromString("Upgrade"));
	}
	else
	{
		Text_Upgrade->SetText(FText::FromString("Unlock"));
	}
}


void UAbilityUpgradeScreen::Test()
{
	UE_LOG(LogTemp, Error, TEXT("Testing Upgrade Description"));
}


void UAbilityUpgradeScreen::SetAbilityIconEnable()
{
	Button_AbilityIcon->SetIsEnabled(AbilityComp_REF->GetAbilityAvailability());
}


void UAbilityUpgradeScreen::SetIconStyle(UTexture2D* Icon)
{
	FButtonStyle CustomStyle;

	// Normal Brush (Image)
	FSlateBrush NormalBrush;
	NormalBrush.SetResourceObject(Icon);
	NormalBrush.DrawAs = ESlateBrushDrawType::Image;
	NormalBrush.Tiling = ESlateBrushTileType::NoTile;
	NormalBrush.ImageSize = FVector2D(64, 64);
	
	// Hovered Brush
	FSlateBrush HoveredBrush;
	HoveredBrush.SetResourceObject(Icon);
	HoveredBrush.DrawAs = ESlateBrushDrawType::RoundedBox;
	HoveredBrush.Tiling = ESlateBrushTileType::NoTile;
	HoveredBrush.ImageSize = FVector2D(64, 64);
	
	// Disabled Brush
	FSlateBrush DisabledBrush;
	DisabledBrush.SetResourceObject(Icon);
	DisabledBrush.DrawAs = ESlateBrushDrawType::Image;
	DisabledBrush.Tiling = ESlateBrushTileType::NoTile;
	DisabledBrush.ImageSize = FVector2D(64, 64);
	DisabledBrush.TintColor = FSlateColor(FLinearColor(1.f, 1.f, 1.f, 0.3f)); 
	
	// Apply Brushes
	CustomStyle.SetNormal(NormalBrush);
	CustomStyle.SetHovered(HoveredBrush);
	CustomStyle.SetDisabled(DisabledBrush);
	CustomStyle.SetPressed(HoveredBrush);
	
	Button_AbilityIcon->SetStyle(CustomStyle);
}


void UAbilityUpgradeScreen::CreateAbilityDescriptionWidget()
{
	CreateDescriptionWidget(HorizontalBox_AbilityDescription, AbilityDescriptionClass, AbilityDescription);
}


void UAbilityUpgradeScreen::CreateUpgradeDescriptionWidget()
{
	CreateDescriptionWidget(HorizontalBox_UpgradeDescription, UpgradeDescriptionClass, UpgradeDescription);
}


void UAbilityUpgradeScreen::RemoveAbilityDescriptionWidget()
{
	RemoveDescriptionWidget(HorizontalBox_AbilityDescription);
}


void UAbilityUpgradeScreen::RemoveUpgradeDescriptionWidget()
{
	RemoveDescriptionWidget(HorizontalBox_UpgradeDescription);
}
