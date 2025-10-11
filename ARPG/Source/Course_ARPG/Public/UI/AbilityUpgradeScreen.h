
#pragma once

#include "CoreMinimal.h"
#include "DescriptionWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "AbilityUpgradeScreen.generated.h"

class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UAbilityUpgradeScreen : public UUserWidget
{
	GENERATED_BODY()

public:
	

	UFUNCTION()
	void RemoveUpgradeDescriptionWidget();

	UFUNCTION()
	void RemoveAbilityDescriptionWidget();

	UFUNCTION()
	void InitializeAbility(class UAbilityComponent_Player* AbilityComp);
	
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
	void SetAbilityIconEnable();
	
	UFUNCTION()
	void SetIconStyle(UTexture2D* Icon);

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
	
	FString AbilityDescription;

	FString UpgradeDescription;
};
