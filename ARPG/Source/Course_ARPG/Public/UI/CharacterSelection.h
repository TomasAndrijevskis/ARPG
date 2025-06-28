

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "CharacterSelection.generated.h"


class AARPG_GameMode;
class AMainCharacter;
class UARPG_GameInstance;

UCLASS()
class COURSE_ARPG_API UCharacterSelection : public UUserWidget
{
	GENERATED_BODY()

protected:

	virtual void NativeConstruct() override;
	
private:

	void SetPlayerControllerProperties();

	void SetButtonAction();

	UFUNCTION()
	void SetCharacterClass1();

	UFUNCTION()
	void SetCharacterClass2();
	
	UPROPERTY(meta=(BindWidget))
	UButton* Button_1;

	UPROPERTY(meta=(BindWidget))
	UButton* Button_2;

	APlayerController* PlayerController;

	UARPG_GameInstance* GameInstance;

	AARPG_GameMode* GameMode;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AMainCharacter> CharacterClass1;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AMainCharacter> CharacterClass2;

};
