
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/EStats.h"
#include "Components/HorizontalBox.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "PlayerWidget.generated.h"


class UInfoFooter;
enum EScreens : int;
class UBonfireMenuWidget;
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

	UFUNCTION(BlueprintCallable)
	void SetHealth(float NewHealthPercent);

	UFUNCTION(BlueprintCallable)
	void SetStamina(float NewStaminaPercent);

	UFUNCTION(BlueprintCallable)
	void SetMana(float NewManaPercent);

	UFUNCTION(BlueprintCallable)
	void SetLevel(int CurrentLevel);

	UFUNCTION(BlueprintCallable)
	void SetXP(float CurrentXP);
	
	UFUNCTION(BlueprintCallable)
	void CreateStatsScreen(EStats Stat);

	UFUNCTION(BlueprintCallable)
	void RemoveStatsScreen();
	
	UFUNCTION(BlueprintCallable)
	void CreateAbilityUpgradeScreen(UAbilityComponent_Base* AbilityCompRef);

	UFUNCTION(BlueprintCallable)
	void RemoveAbilityUpgradeScreen();

	UFUNCTION(BlueprintCallable)
	void CreateAbilityFooter(UTexture2D* Image, FString ActionKey, UAbilityComponent_Base* AbilityCompRef);

	UFUNCTION(BlueprintCallable)
	void RemoveAbilityFooter();

	UFUNCTION(BlueprintCallable)
	void CreateUpgradeInfoHeader(int Value);

	UFUNCTION(BlueprintCallable)
	void CreateUpgradeInfoFooter(EScreens ScreenType);

	UFUNCTION(BlueprintCallable)
	void CreateStatusIconWithTimer(float Duration, UTexture2D* Image, UAbilityComponent_Base* AbilityCompRef);

	UFUNCTION(BlueprintCallable)
	void CreateStatusIconWithAmount(float Amount, UTexture2D* Image, UStatsComponent* StatsCompRef, FString Keyword);

	UFUNCTION()
	void CreateDeathWidget();

	UFUNCTION()
	void RemoveBonfireMenuWidget();

	UFUNCTION()
	void CreateBonfireMenuWidget();
	
	UPROPERTY()
	TMap<FString, UStatusIconWithAmount*> ActiveStatusWidget;
	
protected:


	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UHorizontalBox* HorizontalBox_StatusEffects;

	UPROPERTY(meta = (BindWidget), BlueprintReadOnly)
	UVerticalBox* VerticalBox_UpgradeInfo;
	
private:

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
	TSubclassOf<UBonfireMenuWidget> BonfireMenuWidgetClass;
	
	UPROPERTY()
	UBonfireMenuWidget* BonfireMenuWidgetRef;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoFooter> InfoFooterWidgetClass;

	UPROPERTY()
	UInfoFooter* InfoFooterWidgetRef;
	
};
