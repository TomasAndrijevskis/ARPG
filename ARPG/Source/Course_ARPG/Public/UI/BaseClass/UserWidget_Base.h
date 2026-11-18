
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidget_Base.generated.h"


class AARPG_PlayerState;
class AARPG_PlayerController;
class AHUD_Base;

UCLASS()
class COURSE_ARPG_API UUserWidget_Base : public UUserWidget
{
	GENERATED_BODY()
	
public:

	AHUD_Base* GetHUD() const;

	AARPG_PlayerController* GetPlayerController() const;

	AARPG_PlayerState* GetPlayerState() const;
		
	virtual void UpdateWidget() {};

	UFUNCTION()
	virtual void HandleVisibilityChanged(ESlateVisibility Vis){};

protected:

	virtual void NativeConstruct() override;
	
};
