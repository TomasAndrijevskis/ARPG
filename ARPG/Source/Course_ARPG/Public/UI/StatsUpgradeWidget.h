
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/Data/EStats.h"
#include "StatsUpgradeWidget.generated.h"


class UVerticalBox;
class UInfoHeader;
class UInfoFooter;
class UStatUpgradeSlot;

UCLASS()
class COURSE_ARPG_API UStatsUpgradeWidget : public UUserWidget
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

	void CreateStatsUpgradeScreen(const EStats& Stat);

	UFUNCTION()
	void CreateUpgradeInfoHeader(const int Value);

	UFUNCTION()
	void CreateUpgradeInfoFooter();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoHeader> InfoHeaderWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoFooter> InfoFooterWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UStatUpgradeSlot> StatUpgradeSlotClass;

	UPROPERTY()
	UStatUpgradeSlot* StatsScreenRef;
};
