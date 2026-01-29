
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/EAttributes.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "AttributeUpgradeSlot.generated.h"


UCLASS()
class COURSE_ARPG_API UAttributeUpgradeSlot : public UUserWidget
{
	GENERATED_BODY()

public:

	void Init(const EAttributes& AttributeToImprove);
	
protected:
	
	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_StatValue;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_StatName;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_ImproveStat;

	UFUNCTION()
	void OnImproveAttributeClicked();
	
	void ImproveAttribute();
	
	UFUNCTION()
	void UpdateText(FString& Name, const float Value);

	void SetAttributeDisplayData();
	
	UPROPERTY()
	class AMainCharacter_Base* PlayerRef;

	UPROPERTY()
	TEnumAsByte<EAttributes> Attribute;

	UPROPERTY()
	FString AttributeName;

	UPROPERTY()
	int AttributeValue;
};
