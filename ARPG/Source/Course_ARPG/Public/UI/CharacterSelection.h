

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
};
