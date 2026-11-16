
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "HUD_Base.generated.h"


class UAttributeUpgradeWidget;
class UAbilityUpgradeWidget;
class UPlayerDeath;
class UQuickTravelMenu;
class UResetWidget;
class UEnchantmentMenuWidget;
class UBonfireMenu;
class UPauseMenu;
class UPlayerWidget;
class AMainCharacter_Base;
class UPlayerWidget;

UCLASS()
class COURSE_ARPG_API AHUD_Base : public AHUD
{
	GENERATED_BODY()

public:

	void CreatePlayerWidget();

	void CreateGameMenuWidgets();
	
	void AssignPlayerRef();

	void ToggleBonfireWidget();

	UFUNCTION()
	void ToggleQuickTravelWidget();

	UFUNCTION()
	void ToggleAbilityUpgradeWidget();

	UFUNCTION()
	void ToggleAttributesUpgradeWidget();
	
	void TogglePauseWidget();

	void ToggleEnchantmentWidget();
	
	void ToggleResetWidget();
	
protected:

	virtual void BeginPlay() override;
	
private:
	
	void CreateQuickTravelMenuWidget();
	
	void CreateAbilityUpgradeScreen();
	
	void CreateAttributesUpgradeScreen();
	
	void CreateAbilitiesFooterPanel();
	
	void CreatePauseMenu();
	
	void CreateBonfireMenu();

	void CreateEnchantmentMenu();
	
	void CreateResetMenu();
	
	void CreateDeathWidget();

	void ToggleWidget(UUserWidget* widgetToFocus);

	void FocusOnGame();

	void FocusOnWidget();
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerDeath> PlayerDeathWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPauseMenu> PauseMenuWidgetClass;

	UPROPERTY()
	UPauseMenu* PauseMenuWidget;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UBonfireMenu> BonfireMenuWidgetClass;

	UPROPERTY()
	UBonfireMenu* BonfireWidget;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UResetWidget> ResetWidgetClass;

	UPROPERTY()
	UResetWidget* ResetWidget;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UEnchantmentMenuWidget> EnchantmentMenuClass;

	UPROPERTY()
	UEnchantmentMenuWidget* EnchantmentMenu;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelMenu> QuickTravelMenuWidgetClass;

	UPROPERTY()
	UQuickTravelMenu* QuickTravelMenuWidget;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityUpgradeWidget> AbilityUpgradeWidgetClass;

	UPROPERTY()
	UAbilityUpgradeWidget* AbilityUpgradeWidget;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAttributeUpgradeWidget> AttributesUpgradeWidgetClass;

	UPROPERTY()
	UAttributeUpgradeWidget* AttributesUpgradeWidget;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerWidget> PlayerWidgetClass;

	UPROPERTY()
	UPlayerWidget* PlayerWidget;

	UPROPERTY()
	UUserWidget* ActiveWidget;
};
