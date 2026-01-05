
#include "UI/AbilityUpgradeScreen.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/LevelingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UI/DescriptionWidget.h"


void UAbilityUpgradeScreen::InitializeAbility(UAbilityComponent_Player* AbilityComp)
{
	if (!AbilityComp) return;
	AbilityComp_Ref = AbilityComp;
	if (!AbilityComp_Ref) return;
	SetIcon(AbilityComp_Ref->GetIcon());
	SetUpgradeButtonText(AbilityComp_Ref->IsAbilityMaxLevel());
	SetAbilityIconEnable();
	SetupButtonCallbacks();
	SetRequiredPointsText();
}


void UAbilityUpgradeScreen::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


void UAbilityUpgradeScreen::SetupButtonCallbacks()
{
	if (Button_UpgradeAbility)
	{
		Button_UpgradeAbility->OnClicked.AddDynamic(this, &UAbilityUpgradeScreen::UpgradeAbility);
		HandleUpgradeButtonActions();
		if (AbilityComp_Ref->IsAbilityMaxLevel()) Button_UpgradeAbility->SetIsEnabled(false);
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
	if (AbilityComp_Ref->IsAbilityAvailable())
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


void UAbilityUpgradeScreen::CreateDescriptionWidget(const TSubclassOf<UDescriptionWidget>& WidgetClass, const FString& Description)
{
	if (!WidgetClass) return;
	
	DescriptionWidgetRef = CreateWidget<UDescriptionWidget>(GetWorld(), WidgetClass);
	if (!DescriptionWidgetRef) return;
	DescriptionWidgetRef->AddToViewport(10);
	DescriptionWidgetRef->SetDescription(Description);
}


void UAbilityUpgradeScreen::RemoveDescriptionWidget()
{
	if (DescriptionWidgetRef)
	{
		DescriptionWidgetRef->RemoveFromParent();
		DescriptionWidgetRef = nullptr;
	}
}


void UAbilityUpgradeScreen::SetUpgradeButtonText(const bool bIsLevelMaxed)
{
	if (AbilityComp_Ref->IsAbilityAvailable() && bIsLevelMaxed) Text_Upgrade->SetText(FText::FromString("Maxed"));
	else if (AbilityComp_Ref->IsAbilityAvailable() && !bIsLevelMaxed) Text_Upgrade->SetText(FText::FromString("Upgrade"));
	else Text_Upgrade->SetText(FText::FromString("Unlock"));
}


void UAbilityUpgradeScreen::SetRequiredPointsText()
{
	int RequiredPoints = AbilityComp_Ref->GetRequiredUpgradePoints();
	if (RequiredPoints == -1) Text_RequiredPoints->SetText(FText::FromString(""));
	else
	{
		FString Text = FString::Printf(TEXT("Required points: %d"), RequiredPoints);
		Text_RequiredPoints->SetText(FText::FromString(Text));
	}
}


void UAbilityUpgradeScreen::UpgradeAbility()
{
	if (!PlayerRef) return;
	int AvailablePoints = PlayerRef->LevelComp->GetCurrentAbilityPointsAmount();
	if (AvailablePoints <= 0) return;
	
	AbilityComp_Ref->UpgradeAbility(AvailablePoints);
	SetUpgradeButtonText(AbilityComp_Ref->IsAbilityMaxLevel());
	SetAbilityIconEnable();
	
	if (AbilityComp_Ref->IsAbilityMaxLevel())
	{
		Button_UpgradeAbility->SetIsEnabled(false);
		SetUpgradeButtonText(AbilityComp_Ref->IsAbilityMaxLevel());
	}
	HandleUpgradeButtonActions();
	SetRequiredPointsText();
}


void UAbilityUpgradeScreen::SetAbilityIconEnable()
{
	Button_AbilityIcon->SetIsEnabled(AbilityComp_Ref->IsAbilityAvailable());
}


void UAbilityUpgradeScreen::SetIcon(UTexture2D* Icon)
{
	if (!Icon) return;
	FButtonStyle CustomStyle;
	ApplyIconStyle(Icon, CustomStyle.Normal, ESlateBrushDrawType::Image);
	ApplyIconStyle(Icon, CustomStyle.Hovered, ESlateBrushDrawType::RoundedBox);
	ApplyIconStyle(Icon, CustomStyle.Pressed, ESlateBrushDrawType::RoundedBox);
	ApplyIconStyle(Icon, CustomStyle.Disabled, ESlateBrushDrawType::Image);
	CustomStyle.Disabled.TintColor = FSlateColor(FLinearColor(1.f, 1.f, 1.f, 0.3f)); 
	Button_AbilityIcon->SetStyle(CustomStyle);
}


void UAbilityUpgradeScreen::ApplyIconStyle(UTexture2D* Icon, FSlateBrush& BrushStyle, TEnumAsByte<ESlateBrushDrawType::Type> DrawType)
{
	BrushStyle.SetResourceObject(Icon);
	BrushStyle.Tiling = ESlateBrushTileType::NoTile;
	BrushStyle.DrawAs = DrawType;
	BrushStyle.ImageSize = AbilityIconSize;
}


void UAbilityUpgradeScreen::CreateAbilityDescriptionWidget()
{
	AbilityDescription = AbilityComp_Ref->GetAbilityDescription();
	CreateDescriptionWidget(AbilityDescriptionClass, AbilityDescription);
}


void UAbilityUpgradeScreen::CreateUpgradeDescriptionWidget()
{
	UpgradeDescription = AbilityComp_Ref->GetUpgradeDescription();
	CreateDescriptionWidget(UpgradeDescriptionClass, UpgradeDescription);
}


void UAbilityUpgradeScreen::RemoveAbilityDescriptionWidget()
{
	RemoveDescriptionWidget();
}


void UAbilityUpgradeScreen::RemoveUpgradeDescriptionWidget()
{
	RemoveDescriptionWidget();
}
