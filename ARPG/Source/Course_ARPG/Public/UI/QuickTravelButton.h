
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "QuickTravelButton.generated.h"


class UPlayerTeleport;
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

	void InitializeButton(FString NewTravelLocationName, FVector NewTravelLocation, FString CurrentBonfireName);
	
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

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;

	UPROPERTY()
	AARPG_PlayerController* PlayerController;

	UPROPERTY()
	UPlayerTeleport* PlayerTeleportRef;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UPlayerTeleport> PlayerTeleportClass;

	float AnimDuration;
};
