
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/Data/EAttributes.h"
#include "AttributeUpgradeWidget.generated.h"


class UVerticalBox;
class UInfoHeader;
class UInfoFooter;
class UAttributeUpgradeSlot;

UCLASS()
class COURSE_ARPG_API UAttributeUpgradeWidget : public UUserWidget
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

	void CreateAttributesUpgradeScreen(const EAttributes& Attribute);
	
	UFUNCTION()
	void CreateUpgradeInfoHeader(const int Value);

	UFUNCTION()
	void CreateUpgradeInfoFooter();
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoHeader> InfoHeaderWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UInfoFooter> InfoFooterWidgetClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UAttributeUpgradeSlot> StatUpgradeSlotClass;

	UPROPERTY()
	UAttributeUpgradeSlot* StatsScreenRef;
};
