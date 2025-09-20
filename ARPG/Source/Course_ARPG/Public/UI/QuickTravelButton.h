
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Objects/BonfireData.h"
#include "QuickTravelButton.generated.h"


class UBonfireInteractionAnim;
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

	void InitializeButton(FString NewTravelLocationName, FBonfireData BonfireData, FString CurrentBonfireName);
	
private:

	UFUNCTION()
	void TeleportPlayer();

	UFUNCTION()
	void ShowAnimBeforeTeleport();
	
	UFUNCTION()
	void EnablePlayerInput();
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuickTravel;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_QuickTravelLocation;

	FVector TravelLocation;

	FString TravelMapName;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;

	UPROPERTY()
	UBonfireInteractionAnim* BonfireInteractionAnimRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UBonfireInteractionAnim> BonfireInteractionAnimClass;

	float AnimDuration;
};
