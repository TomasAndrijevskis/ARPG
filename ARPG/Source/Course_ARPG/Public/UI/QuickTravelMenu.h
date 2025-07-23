
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
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

	void SetBonfires(TMap<FString, FVector> AvailableBonfires, FString CurrentBonfireName);
	
private:

	void CreateTravelMenu();
	
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* VB_QuickTravelContainer;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Exit;
	
	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	TMap<FString, FVector> Bonfires;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UQuickTravelButton> QuickTravelButtonClass;

	UPROPERTY()
	UQuickTravelButton* QuickTravelButtonRef;

	FString BonfireName;
};
