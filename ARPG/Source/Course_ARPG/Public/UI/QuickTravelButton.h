
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/BonfireData.h"
#include "QuickTravelButton.generated.h"


class UTransitionAnim;
class AARPG_PlayerController;
class UTextBlock;
class AMainCharacter_Base;
class UButton;

UCLASS()
class COURSE_ARPG_API UQuickTravelButton : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	void InitializeButton(const FString& NewTravelLocationName, const FBonfireData& BonfireData, const FString& CurrentBonfireName);
	
private:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuickTravel;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_QuickTravelLocation;
	
	UFUNCTION()
	void TeleportPlayer();

	FVector TravelLocation;

	FString TravelMapName;
};
