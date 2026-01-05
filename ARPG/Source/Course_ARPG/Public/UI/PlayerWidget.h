
#pragma once

#include "CoreMinimal.h"
#include "EScreens.h"
#include "Blueprint/UserWidget.h"
#include "Characters/Data/EStats.h"
#include "Components/HorizontalBox.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Objects/BonfireData.h"
#include "PlayerWidget.generated.h"


class UAbilityComponent_Player;
class UBorder;
class UBackgroundBlur;
class UPauseMenu;
class UBonfireInteractionAnim;
class ABonfire;
class UQuickTravelMenu;
class UInfoFooter;
class UBonfireMenu;
class UPlayerDeath;
class UStatsComponent;
class UStatusIconWithAmount;
class UStatusIconWithTimer;
class UInfoHeader;
class UStatsScreenWidget;
class UAbilityFooter;
class UAbilityUpgradeScreen;
class UAbilityComponent_Base;

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
	void CreateStatsScreen(const EStats& Stat);

	UFUNCTION()
	void RemoveStatsScreen();
	
	UFUNCTION()
	void CreateAbilityUpgradeScreen(UAbilityComponent_Player* AbilityCompRef);

	UFUNCTION()
	void RemoveAbilityUpgradeScreen();

	UFUNCTION()
	void CreateAbilityFooter(UTexture2D* Image, const FString& ActionKey, UAbilityComponent_Player* AbilityCompRef);

	UFUNCTION()
	void RemoveAbilityFooter();

	UFUNCTION()
	void CreateUpgradeInfoHeader(const int Value);

	UFUNCTION()
	void CreateUpgradeInfoFooter(const EScreens& ScreenType);

	UFUNCTION()
	void CreateStatusIconWithTimer(const float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef);

	UFUNCTION()
	void CreateStatusIconWithAmount(const float Amount, UTexture2D* Image, UStatsComponent* StatsCompRef, const FString& Keyword);

	UFUNCTION()
	void CreateDeathWidget();

	UFUNCTION()
	void RemoveBonfireMenuWidget();

	UFUNCTION()
	void CreateBonfireMenuWidget();

	UFUNCTION()
	void RemoveQuickTravelMenuWidget();

	UFUNCTION()
	void CreateQuickTravelMenuWidget(const TMap<FString, FBonfireData>& UnlockedBonfires, const FString& CurrentBonfireName);

	UFUNCTION()
	void CreatePauseMenu();

	UFUNCTION()
	void RemovePauseMenu();

	UFUNCTION()
	void HandleUpgradeInfoBorder(const ESlateVisibility InVisibility);
	
	UPROPERTY()
	TMap<FString, UStatusIconWithAmount*> ActiveStatusWidget;

private:

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_StatusEffects;

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_UpgradeInfo;
	
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
	
	UPROPERTY(meta = (BindWidget))
	UBackgroundBlur* BackgroundBlur_Blur;

	UPROPERTY(meta = (BindWidget))
	UBorder* Border_UpgradeInfo;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatsScreenWidget> StatsWidgetClass;

	UPROPERTY()
	UStatsScreenWidget* StatsScreenRef;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityUpgradeScreen> AbilityUpgradeScreenWidgetClass;

	UPROPERTY()
	UAbilityUpgradeScreen* AbilityUpgradeScreenWidgetRef;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityFooter> AbilityFooterWidgetClass;

	UPROPERTY()
	UAbilityFooter* AbilityFooterWidgetRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoHeader> InfoHeaderWidgetClass;

	UPROPERTY()
	UInfoHeader* InfoHeaderWidgetRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatusIconWithTimer> StatusIconWithTimerWidgetClass;

	UPROPERTY()
	UStatusIconWithTimer* StatusIconWithTimerWidgetRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatusIconWithAmount> StatusIconWithAmountWidgetClass;

	UPROPERTY()
	UStatusIconWithAmount* StatusIconWithAmountWidgetRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerDeath> PlayerDeathWidgetClass;

	UPROPERTY()
	UPlayerDeath* PlayerDeathWidgetRef;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBonfireMenu> BonfireMenuWidgetClass;
	
	UPROPERTY()
	UBonfireMenu* BonfireMenuWidgetRef;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoFooter> InfoFooterWidgetClass;

	UPROPERTY()
	UInfoFooter* InfoFooterWidgetRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelMenu> QuickTravelMenuWidgetClass;

	UPROPERTY()
	UQuickTravelMenu* QuickTravelMenuWidgetRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPauseMenu> PauseMenuWidgetClass;
	
	UPROPERTY()
	UPauseMenu* PauseMenuWidgetRef;
	
	UPROPERTY(EditAnywhere)
	FVector IconSize;
};
