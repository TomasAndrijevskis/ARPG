
#include "UI/AbilityUpgradeScreen.h"
#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter.h"
#include "Combat/Abilities/AbilityComponent_Base.h"
#include "Kismet/GameplayStatics.h"
#include "UI/DescriptionWidget.h"


void UAbilityUpgradeScreen::InitializeAbility(UAbilityComponent_Base* AbilityComp)
{
	AbilityComp_REF = AbilityComp;
	SetIconStyle(AbilityComp_REF->GetIcon());
	SetUpgradeButtonText(AbilityComp_REF->IsAbilityMaxLevel());
	SetAbilityIconEnable();
	SetupButtonCallbacks();
	SetRequiredPointsText();
}


void UAbilityUpgradeScreen::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerRef = Cast<AMainCharacter>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


void UAbilityUpgradeScreen::SetupButtonCallbacks()
{
	if (Button_UpgradeAbility)
	{
		Button_UpgradeAbility->OnClicked.AddDynamic(this, &UAbilityUpgradeScreen::UpgradeAbility);
		HandleUpgradeButtonActions();
		if (AbilityComp_REF->IsAbilityMaxLevel())
		{
			Button_UpgradeAbility->SetIsEnabled(false);
		}
	}

	if (Button_AbilityIcon)
	{
		Button_AbilityIcon->OnHovered.AddDynamic(this, &UAbilityUpgradeScreen::CreateAbilityDescriptionWidget);
		Button_AbilityIcon->OnUnhovered.AddDynamic(this, &UAbilityUpgradeScreen::RemoveAbilityDescriptionWidget);
	}
}


void UAbilityUpgradeScreen::HandleUpgradeButtonActions()
{
	RemoveAbilityDescriptionWidget();
	RemoveUpgradeDescriptionWidget();
	if (AbilityComp_REF->IsAbilityAvailable())
	{
		Button_UpgradeAbility->OnHovered.Clear();
		Button_UpgradeAbility->OnUnhovered.Clear();
			
		Button_UpgradeAbility->OnHovered.AddDynamic(this, &UAbilityUpgradeScreen::CreateUpgradeDescriptionWidget);
		Button_UpgradeAbility->OnUnhovered.AddDynamic(this, &UAbilityUpgradeScreen::RemoveUpgradeDescriptionWidget);
	}
	else
	{
		Button_UpgradeAbility->OnHovered.Clear();
		Button_UpgradeAbility->OnUnhovered.Clear();
			
		Button_UpgradeAbility->OnHovered.AddDynamic(this, &UAbilityUpgradeScreen::CreateAbilityDescriptionWidget);
		Button_UpgradeAbility->OnUnhovered.AddDynamic(this, &UAbilityUpgradeScreen::RemoveAbilityDescriptionWidget);
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


void UAbilityUpgradeScreen::SetUpgradeButtonText(bool bIsLevelMaxed)
{
	if (AbilityComp_REF->IsAbilityAvailable() && bIsLevelMaxed)
	{
		Text_Upgrade->SetText(FText::FromString("Maxed"));
	}
	else if (AbilityComp_REF->IsAbilityAvailable() && !bIsLevelMaxed)
	{
		Text_Upgrade->SetText(FText::FromString("Upgrade"));
	}
	else
	{
		Text_Upgrade->SetText(FText::FromString("Unlock"));
	}
}


void UAbilityUpgradeScreen::SetRequiredPointsText()
{
	int RequiredPoints = AbilityComp_REF->GetRequiredUpgradePoints();
	if (RequiredPoints == -1)
	{
		Text_RequiredPoints->SetText(FText::FromString(""));
	}
	else
	{
		FString Text = FString::Printf(TEXT("Required points: %d"), RequiredPoints);
		Text_RequiredPoints->SetText(FText::FromString(Text));
	}
	
}


void UAbilityUpgradeScreen::UpgradeAbility()
{
	if (!PlayerRef)
	{
		return;
	}

	int AvailablePoints = PlayerRef->LevelComp->GetCurrentAbilityPointsAmount();

	if (AvailablePoints <= 0)
	{
		return;
	}
	
	AbilityComp_REF->UpgradeAbility(AvailablePoints);

	SetUpgradeButtonText(AbilityComp_REF->IsAbilityMaxLevel());
	SetAbilityIconEnable();
	
	
	if (AbilityComp_REF->IsAbilityMaxLevel())
	{
		Button_UpgradeAbility->SetIsEnabled(false);
		SetUpgradeButtonText(AbilityComp_REF->IsAbilityMaxLevel());
	}
	HandleUpgradeButtonActions();
	SetRequiredPointsText();
}


void UAbilityUpgradeScreen::SetAbilityIconEnable()
{
	Button_AbilityIcon->SetIsEnabled(AbilityComp_REF->IsAbilityAvailable());
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
	AbilityDescription = AbilityComp_REF->GetAbilityDescription();
	CreateDescriptionWidget(HorizontalBox_AbilityDescription, AbilityDescriptionClass, AbilityDescription);
}


void UAbilityUpgradeScreen::CreateUpgradeDescriptionWidget()
{
	UpgradeDescription = AbilityComp_REF->GetUpgradeDescription();
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
