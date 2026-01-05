
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Objects/BonfireData.h"
#include "QuickTravelMenu.generated.h"


class UVerticalBox;
class UQuickTravelButton;
class AMainCharacter_Base;
class UButton;

UCLASS()
class COURSE_ARPG_API UQuickTravelMenu : public UUserWidget
{
	GENERATED_BODY()

public:
	
	virtual void NativeConstruct() override;

	void SetBonfires(const TMap<FString, FBonfireData>& AvailableBonfires, const FString& CurrentBonfireName);
	
private:

	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VB_QuickTravelContainer;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Exit;
	
	void CreateTravelMenu();
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelButton> QuickTravelButtonClass;

	UPROPERTY()
	UQuickTravelButton* QuickTravelButtonRef;

	TMap<FString, FBonfireData> Bonfires;
	
	FString BonfireName;
};
