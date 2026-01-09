
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PlayerWidget.generated.h"


class UStatsAbilitiesResetWidget;
class UStatsUpgradeWidget;
class UAbilityUpgradeWidget;
class ULevelUpNotification;
class UPauseMenu;
class UQuickTravelMenu;
class UBonfireMenu;
class UPlayerDeath;
class UTextBlock;
class UProgressBar;
class UHorizontalBox;
class UStatusIconWithTimer;
class UAbilityFooter;
class UStatusIconWithAmount;
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
	void CreateStatsUpgradeScreen();
	
	UFUNCTION()
	void CreateAbilityFooterPanel(UTexture2D* Image, const FString& ActionKey, UAbilityComponent_Player* AbilityCompRef);
	
	UFUNCTION()
	void ClearAbilityFooterPanel();
	
	UFUNCTION()
	void CreateStatusIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef);

	UFUNCTION()
	void CreateStatusIconWithAmount(const float Amount, UTexture2D* Image, UStatsComponent* StatsCompRef, const FString& Keyword);

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
	
	UPROPERTY()
	TMap<FString, UStatusIconWithAmount*> ActiveStatusWidget;

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
	TSubclassOf<UStatusIconWithTimer> StatusIconWithTimerWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatusIconWithAmount> StatusIconWithAmountWidgetClass;

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
	TSubclassOf<UStatsUpgradeWidget> StatsUpgradeWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatsAbilitiesResetWidget> StatsAbilitiesResetWidgetClass;
	
	UPROPERTY(EditAnywhere)
	FVector2D IconSize;
};
