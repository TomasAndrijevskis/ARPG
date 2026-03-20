
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/BonfireData.h"
#include "QuickTravelMenu.generated.h"


class UVerticalBox;
class UQuickTravelButton;
class AMainCharacter_Base;
class UMenuButtonBase;

UCLASS()
class COURSE_ARPG_API UQuickTravelMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	
	virtual void NativeConstruct() override;

	void SetBonfires();

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_Exit;
	
private:

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VB_QuickTravelContainer;
	
	void CreateTravelMenu();

	UFUNCTION()
	void RemoveWidget();

	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelButton> QuickTravelButtonClass;
	

	TMap<FString, FBonfireData> Bonfires;
	
	FString BonfireName;
};
