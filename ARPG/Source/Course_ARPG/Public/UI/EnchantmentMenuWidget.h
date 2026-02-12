
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/StatusEffects/StatusEffectsVisualData.h"
#include "EnchantmentMenuWidget.generated.h"

class UHorizontalBox;
class UButton;

UCLASS()
class COURSE_ARPG_API UEnchantmentMenuWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	void NativeConstruct() override;
	
private:

	UPROPERTY(meta=(BindWidget))
	UHorizontalBox* HorizontalBox;
	
	void CreateButtons();

	//UButton* CreateButton(UTexture2D* Image);
	
	UPROPERTY(EditDefaultsOnly)
	UStatusEffectsVisualData* StatusEffectsVisualDataAsset;
	
};
