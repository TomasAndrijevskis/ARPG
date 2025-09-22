
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "PauseMenu.generated.h"


class UButton;

UCLASS()
class COURSE_ARPG_API UPauseMenu : public UUserWidget
{
	GENERATED_BODY()
	
public:
	
	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Resume;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_MainMenu;
	
	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuitGame;
	
};
