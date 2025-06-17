
#pragma once

#include "CoreMinimal.h"
#include "AbilityDescription.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "Components/HorizontalBox.h"
#include "AbilityUpgradeScreen.generated.h"


UCLASS()
class COURSE_ARPG_API UAbilityUpgradeScreen : public UUserWidget
{
	GENERATED_BODY()

public:
	

	UFUNCTION(BlueprintCallable)
	void RemoveDescriptionWidget();

	UFUNCTION(BlueprintCallable)
	void SetAbility(class UAbilityComponent_Base* AbilityComp);
	
	
protected:

	virtual void NativeConstruct() override;
	
	UPROPERTY(BlueprintReadWrite)
	FString AbilityDescription;

	UPROPERTY(meta = (BindWidget), BlueprintReadWrite)
	UButton* Button_AbilityIcon;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UAbilityComponent_Base* AbilityComp_REF;
	
private:

	UFUNCTION()
	void CreateDescriptionWidget();

	UFUNCTION()
	void SetAbilityIconAvailability();
	
	UFUNCTION()
	void SetIconStyle(UTexture2D* Icon);

	UFUNCTION()
	void UnlockAbility();
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_ImproveStat;

	UPROPERTY(meta = (BindWidget))
	UHorizontalBox* HorizontalBox_Description;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UAbilityDescription> AbilityDescriptionClass;
	

	
	
};
