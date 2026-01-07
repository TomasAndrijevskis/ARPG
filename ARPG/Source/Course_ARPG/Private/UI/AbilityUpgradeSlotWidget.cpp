
#include "UI/AbilityUpgradeSlotWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"
#include "Components/Button.h"
#include "Components/LevelingComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UI/DescriptionWidget.h"


void UAbilityUpgradeSlotWidget::InitializeAbilityUpgradeSlot(UAbilityComponent_Player* AbilityComp)
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


void UAbilityUpgradeSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
}


void UAbilityUpgradeSlotWidget::SetupButtonCallbacks()
{
	if (Button_UpgradeAbility)
	{
		Button_UpgradeAbility->OnClicked.AddDynamic(this, &UAbilityUpgradeSlotWidget::UpgradeAbility);
		HandleUpgradeButtonActions();
		if (AbilityComp_Ref->IsAbilityMaxLevel()) Button_UpgradeAbility->SetIsEnabled(false);
	}
	if (Button_AbilityIcon)
	{
		Button_AbilityIcon->OnHovered.AddDynamic(this, &UAbilityUpgradeSlotWidget::CreateAbilityDescriptionWidget);
		Button_AbilityIcon->OnUnhovered.AddDynamic(this, &UAbilityUpgradeSlotWidget::RemoveAbilityDescriptionWidget);
	}
}


void UAbilityUpgradeSlotWidget::HandleUpgradeButtonActions()
{
	RemoveAbilityDescriptionWidget();
	RemoveUpgradeDescriptionWidget();
	if (AbilityComp_Ref->IsAbilityAvailable())
	{
		Button_UpgradeAbility->OnHovered.Clear();
		Button_UpgradeAbility->OnUnhovered.Clear();
			
		Button_UpgradeAbility->OnHovered.AddDynamic(this, &UAbilityUpgradeSlotWidget::CreateUpgradeDescriptionWidget);
		Button_UpgradeAbility->OnUnhovered.AddDynamic(this, &UAbilityUpgradeSlotWidget::RemoveUpgradeDescriptionWidget);
	}
	else
	{
		Button_UpgradeAbility->OnHovered.Clear();
		Button_UpgradeAbility->OnUnhovered.Clear();
			
		Button_UpgradeAbility->OnHovered.AddDynamic(this, &UAbilityUpgradeSlotWidget::CreateAbilityDescriptionWidget);
		Button_UpgradeAbility->OnUnhovered.AddDynamic(this, &UAbilityUpgradeSlotWidget::RemoveAbilityDescriptionWidget);
	}
}


void UAbilityUpgradeSlotWidget::CreateDescriptionWidget(const TSubclassOf<UDescriptionWidget>& WidgetClass, const FString& Description)
{
	if (!WidgetClass) return;
	
	DescriptionWidgetRef = CreateWidget<UDescriptionWidget>(GetWorld(), WidgetClass);
	if (!DescriptionWidgetRef) return;
	DescriptionWidgetRef->AddToViewport(10);
	DescriptionWidgetRef->SetDescription(Description);
}


void UAbilityUpgradeSlotWidget::RemoveDescriptionWidget()
{
	if (DescriptionWidgetRef)
	{
		DescriptionWidgetRef->RemoveFromParent();
		DescriptionWidgetRef = nullptr;
	}
}


void UAbilityUpgradeSlotWidget::SetUpgradeButtonText(const bool bIsLevelMaxed)
{
	if (AbilityComp_Ref->IsAbilityAvailable() && bIsLevelMaxed) Text_Upgrade->SetText(FText::FromString("Maxed"));
	else if (AbilityComp_Ref->IsAbilityAvailable() && !bIsLevelMaxed) Text_Upgrade->SetText(FText::FromString("Upgrade"));
	else Text_Upgrade->SetText(FText::FromString("Unlock"));
}


void UAbilityUpgradeSlotWidget::SetRequiredPointsText()
{
	int RequiredPoints = AbilityComp_Ref->GetRequiredUpgradePoints();
	if (RequiredPoints == -1) Text_RequiredPoints->SetText(FText::FromString(""));
	else
	{
		FString Text = FString::Printf(TEXT("Required points: %d"), RequiredPoints);
		Text_RequiredPoints->SetText(FText::FromString(Text));
	}
}


void UAbilityUpgradeSlotWidget::UpgradeAbility()
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


void UAbilityUpgradeSlotWidget::SetAbilityIconEnable()
{
	Button_AbilityIcon->SetIsEnabled(AbilityComp_Ref->IsAbilityAvailable());
}


void UAbilityUpgradeSlotWidget::SetIcon(UTexture2D* Icon)
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


void UAbilityUpgradeSlotWidget::ApplyIconStyle(UTexture2D* Icon, FSlateBrush& BrushStyle, TEnumAsByte<ESlateBrushDrawType::Type> DrawType)
{
	BrushStyle.SetResourceObject(Icon);
	BrushStyle.Tiling = ESlateBrushTileType::NoTile;
	BrushStyle.DrawAs = DrawType;
	BrushStyle.ImageSize = AbilityIconSize;
}


void UAbilityUpgradeSlotWidget::CreateAbilityDescriptionWidget()
{
	AbilityDescription = AbilityComp_Ref->GetAbilityDescription();
	CreateDescriptionWidget(AbilityDescriptionClass, AbilityDescription);
}


void UAbilityUpgradeSlotWidget::CreateUpgradeDescriptionWidget()
{
	UpgradeDescription = AbilityComp_Ref->GetUpgradeDescription();
	CreateDescriptionWidget(UpgradeDescriptionClass, UpgradeDescription);
}


void UAbilityUpgradeSlotWidget::RemoveAbilityDescriptionWidget()
{
	RemoveDescriptionWidget();
}


void UAbilityUpgradeSlotWidget::RemoveUpgradeDescriptionWidget()
{
	RemoveDescriptionWidget();
}

