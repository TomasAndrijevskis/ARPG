
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"


class UButton;

UCLASS()
class COURSE_ARPG_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_StartGame;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_QuitGame;
	
	UFUNCTION()
	void OpenSaveSelectionMenu();

	UFUNCTION()
	void QuitGame();

	void SetPlayerControllerProperties();
};
