
#pragma once

#include "CoreMinimal.h"
#include "DescriptionWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "AbilityUpgradeScreen.generated.h"


UCLASS()
class COURSE_ARPG_API UAbilityUpgradeScreen : public UUserWidget
{
	GENERATED_BODY()

public:
	

	UFUNCTION(BlueprintCallable)
	void RemoveUpgradeDescriptionWidget();

	UFUNCTION(BlueprintCallable)
	void RemoveAbilityDescriptionWidget();

	UFUNCTION(BlueprintCallable)
	void InitializeAbility(class UAbilityComponent_Base* AbilityComp);
	
	
protected:

	virtual void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAbilityComponent_Base* AbilityComp_REF;
	
private:

	UFUNCTION()
	void RemoveDescriptionWidget(UHorizontalBox* Box);
	
	UFUNCTION()
	void CreateDescriptionWidget(UHorizontalBox* Box, TSubclassOf<UDescriptionWidget> Class, FString Description);

	UFUNCTION()
	void CreateUpgradeDescriptionWidget();

	UFUNCTION()
	void CreateAbilityDescriptionWidget();
	
	UFUNCTION()
	void SetAbilityIconEnable();
	
	UFUNCTION()
	void SetIconStyle(UTexture2D* Icon);

	UFUNCTION()
	void UnlockAbility();

	UFUNCTION()
	void SetButtonText();

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

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDescriptionWidget> AbilityDescriptionClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UDescriptionWidget> UpgradeDescriptionClass;
	
	FString AbilityDescription;

	FString UpgradeDescription;
};
