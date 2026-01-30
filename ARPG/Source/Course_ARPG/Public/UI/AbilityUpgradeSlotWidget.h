

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AbilityUpgradeSlotWidget.generated.h"


class UDescriptionWidget;
class UTextBlock;
class UHorizontalBox;
class UButton;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UAbilityUpgradeSlotWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	
	UFUNCTION()
	void RemoveUpgradeDescriptionWidget();

	UFUNCTION()
	void RemoveAbilityDescriptionWidget();

	UFUNCTION()
	void InitializeAbilityUpgradeSlot(class UAbilityComponent_Player* AbilityComp);
	
protected:

	virtual void NativeConstruct() override;
	
	UPROPERTY()
	UAbilityComponent_Player* AbilityComp_Ref;
	
private:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_AbilityIcon;
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_UpgradeAbility;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_AbilityDescription;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_UpgradeDescription;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_Upgrade;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_RequiredPoints;
	
	UFUNCTION()
	void SetupButtonCallbacks();
	
	UFUNCTION()
	void CreateDescriptionWidget(const TSubclassOf<UDescriptionWidget>& WidgetClass, const FString& Description);

	UFUNCTION()
	void RemoveDescriptionWidget();

	UFUNCTION()
	void CreateUpgradeDescriptionWidget();

	UFUNCTION()
	void CreateAbilityDescriptionWidget();
	
	UFUNCTION()
	void SetAbilityIconEnabled();
	
	UFUNCTION()
	void SetIcon(UTexture2D* Icon);

	void ApplyIconStyle(UTexture2D* Icon, FSlateBrush& BrushStyle, TEnumAsByte<ESlateBrushDrawType::Type> DrawType);
	
	UFUNCTION()
	void SetUpgradeButtonText(const bool bIsLevelMaxed);

	UFUNCTION()
	void SetRequiredPointsText();
	
	UFUNCTION()
	void UpgradeAbility();

	UFUNCTION()
	void HandleUpgradeButtonActions();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UDescriptionWidget> AbilityDescriptionClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDescriptionWidget> UpgradeDescriptionClass;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY()
	UDescriptionWidget* DescriptionWidgetRef;

	UPROPERTY(EditAnywhere)
	FVector2D AbilityIconSize = FVector2D(64, 64);
	
	FString AbilityDescription;

	FString UpgradeDescription;
};