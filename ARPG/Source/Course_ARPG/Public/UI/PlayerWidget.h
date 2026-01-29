
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"


class UStatusEffectsComponent;
class UStatusEffectIcon;
class UResetWidget;
class UAttributeUpgradeWidget;
class UAbilityUpgradeWidget;
class ULevelUpNotification;
class UPauseMenu;
class UQuickTravelMenu;
class UBonfireMenu;
class UPlayerDeath;
class UTextBlock;
class UProgressBar;
class UHorizontalBox;
class UAbilityIconWithTimer;
class UAbilityFooter;
class UAbilityIconWithAmount;
class UStatsComponent;
class UAbilityComponent_Base;
class UAbilityComponent_Player;

UCLASS()
class COURSE_ARPG_API UPlayerWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void SetHealth(const float NewHealthPercent);

	UFUNCTION()
	void SetStamina(const float NewStaminaPercent);

	UFUNCTION()
	void SetMana(const float NewManaPercent);

	UFUNCTION()
	void SetLevel(const int CurrentLevel);

	UFUNCTION()
	void SetXP(const float CurrentXP);
	
	UFUNCTION()
	void CreateAbilityUpgradeScreen();

	UFUNCTION()
	void CreateAttributesUpgradeScreen();
	
	UFUNCTION()
	void CreateAbilityFooterPanel(UTexture2D* Image, const FString& ActionKey, UAbilityComponent_Player* AbilityCompRef);
	
	UFUNCTION()
	void ClearAbilityFooterPanel();
	
	UFUNCTION()
	void CreateAbilityIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef);

	UFUNCTION()
	void CreateAbilityIconWithAmount(const float Amount, UTexture2D* Image, UStatsComponent* StatsCompRef, const FString& Keyword);

	UFUNCTION()
	void CreateDeathWidget();

	UFUNCTION()
	void CreateBonfireMenuWidget();

	UFUNCTION()
	void CreateQuickTravelMenuWidget();
	
	UFUNCTION()
	void CreatePauseMenu();
	
	UFUNCTION()
	void ShowLevelUpAnimation();

	UFUNCTION()
	void CreateResetWidget();

	UFUNCTION()
	void CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef);
	
	UPROPERTY()
	TMap<FString, UAbilityIconWithAmount*> ActiveStatusWidget;

private:

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_StatusEffects;
	
	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_Health;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_Stamina;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_Mana;

	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar_XP;
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextBlock_Level;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_AbilitiesFooter;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityFooter> AbilityFooterWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityIconWithTimer> StatusIconWithTimerWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityIconWithAmount> StatusIconWithAmountWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatusEffectIcon> StatusEffectIconWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerDeath> PlayerDeathWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBonfireMenu> BonfireMenuWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelMenu> QuickTravelMenuWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPauseMenu> PauseMenuWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<ULevelUpNotification> LevelUpNotificationClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityUpgradeWidget> AbilityUpgradeWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAttributeUpgradeWidget> AttributesUpgradeWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UResetWidget> ResetWidgetClass;
	
	UPROPERTY(EditAnywhere)
	FVector2D IconSize;
};
