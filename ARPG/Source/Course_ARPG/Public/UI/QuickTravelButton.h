
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/SpawnPoint.h"
#include "QuickTravelButton.generated.h"


class UMenuButtonBase;
class AARPG_PlayerController;
class UTextBlock;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UQuickTravelButton : public UUserWidget
{
	GENERATED_BODY()
	
public:

	virtual void NativeConstruct() override;

	void InitializeButton(const FSpawnPoint& Data, const FString& CurrentBonfireName);
	
private:

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_QuickTravel;
	
	UFUNCTION()
	void TeleportPlayer();

	UPROPERTY()
	FSpawnPoint SpawnPointData;
	
};
