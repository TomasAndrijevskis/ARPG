
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "Data/EAttributes.h"
#include "AttributeUpgradeWidget.generated.h"


class UVerticalBox;
class UInfoHeader;
class UInfoFooter;
class UAttributeUpgradeSlot;

UCLASS()
class COURSE_ARPG_API UAttributeUpgradeWidget : public UUserWidget_Base
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VerticalBox_Slots;

	void Init();

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
};
