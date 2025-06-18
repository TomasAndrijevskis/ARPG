
#include "UI/AbilityUpgradeScreen.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "UI/AbilityDescription.h"


void UAbilityUpgradeScreen::NativeConstruct()
{
	Super::NativeConstruct();

	if (Button_ImproveStat)
	{
		Button_ImproveStat->OnClicked.AddDynamic(this, &UAbilityUpgradeScreen::UnlockAbility);
	}

	if (Button_AbilityIcon)
	{
		Button_AbilityIcon->OnHovered.AddDynamic(this, &UAbilityUpgradeScreen::CreateDescriptionWidget);
		Button_AbilityIcon->OnUnhovered.AddDynamic(this, &UAbilityUpgradeScreen::RemoveDescriptionWidget);
	}
}


void UAbilityUpgradeScreen::SetAbility(UAbilityComponent_Base* AbilityComp)
{
	AbilityComp_REF = AbilityComp;
	SetIconStyle(AbilityComp_REF->GetIcon());
	AbilityDescription = AbilityComp_REF->GetDescription();
	SetAbilityIconAvailability();
}


void UAbilityUpgradeScreen::UnlockAbility()
{
	AbilityComp_REF->SetAbilityAvailability(true);
	SetAbilityIconAvailability();
}


void UAbilityUpgradeScreen::CreateDescriptionWidget()
{
	if (!AbilityDescriptionClass)
	{
		UE_LOG(LogTemp, Error, TEXT("Null!"));
		return;
	}
	
	UAbilityDescription* DescriptionWidget = CreateWidget<UAbilityDescription>(GetWorld(), AbilityDescriptionClass);
	
	if (!DescriptionWidget)
	{
		UE_LOG(LogTemp, Error, TEXT("Failed to create"));
		return;
	}

	UE_LOG(LogTemp, Error, TEXT("Created description widget"));
	HorizontalBox_Description->AddChild(DescriptionWidget);
	DescriptionWidget->SetDescription(AbilityDescription);	
}


void UAbilityUpgradeScreen::RemoveDescriptionWidget()
{
	HorizontalBox_Description->ClearChildren();
}


void UAbilityUpgradeScreen::SetAbilityIconAvailability()
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
	CustomStyle.SetPressed(NormalBrush);
	
	Button_AbilityIcon->SetStyle(CustomStyle);
}




