
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/EAttributes.h"
#include "Components/Button.h"
#include "Components/TextBlock.h"
#include "AttributeUpgradeSlot.generated.h"


class UDescriptionWidget;

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
	UTextBlock* Text_AttributeValue;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_AttributeName;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_ImproveAttribute;

	UFUNCTION()
	void OnImproveAttributeClicked();
	
	void ImproveAttribute();
	
	UFUNCTION()
	void UpdateText(const FString& Name, const float Value);

	void SetAttributeDisplayData();

	UFUNCTION()
	void CreateDescriptionWidget();

	UFUNCTION()
	void RemoveDescriptionWidget();
	
	void SetButtonsBehaviour();

	UFUNCTION()
	void UpdateDescription();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UDescriptionWidget> DescriptionWidgetClass;

	UPROPERTY()
	UDescriptionWidget* DescriptionWidgetRef;
	
	UPROPERTY()
	class AMainCharacter_Base* PlayerRef;

	UPROPERTY()
	TEnumAsByte<EAttributes> Attribute;

	UPROPERTY()
	FString AttributeName;

	UPROPERTY()
	int AttributeValue;

	UPROPERTY()
	FString AttributeDescription;
};
