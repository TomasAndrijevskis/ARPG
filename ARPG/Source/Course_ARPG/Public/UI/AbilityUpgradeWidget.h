
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AbilityUpgradeWidget.generated.h"


class UAbilityUpgradeSlotWidget;
class UAbilityComponent_Player;
class UInfoFooter;
class UInfoHeader;
class UVerticalBox;

UCLASS()
class COURSE_ARPG_API UAbilityUpgradeWidget : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_Slots;

	void Init();

	UFUNCTION()
	void RemoveWidget();

	void CreateAbilityUpgradeScreen(UAbilityComponent_Player* AbilityCompRef);

	UFUNCTION()
	void CreateUpgradeInfoHeader(const int Value);

	UFUNCTION()
	void CreateUpgradeInfoFooter();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoHeader> InfoHeaderWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoFooter> InfoFooterWidgetClass;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityUpgradeSlotWidget> AbilityUpgradeSlotClass;
};
