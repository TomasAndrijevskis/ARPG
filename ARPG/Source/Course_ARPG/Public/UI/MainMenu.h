
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenu.generated.h"


class USaveMenu;
class UMenuButtonBase;

UCLASS()
class COURSE_ARPG_API UMainMenu : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_StartGame;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_QuitGame;

	UFUNCTION()
	void QuitGame();

	void SetPlayerControllerProperties();

	UFUNCTION()
	void CreateSaveMenuWidget();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<USaveMenu> SaveMenuWidgetClass;
};
