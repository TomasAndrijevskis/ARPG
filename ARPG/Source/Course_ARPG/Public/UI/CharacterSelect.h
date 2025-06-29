
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Characters/Data/CharacterSelectionStruct.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "CharacterSelect.generated.h"

class AMainCharacter;

UCLASS()
class COURSE_ARPG_API UCharacterSelect : public UUserWidget
{
	GENERATED_BODY()

public:

	virtual void NativeConstruct() override;

	
protected:

	UPROPERTY(EditAnywhere)
	UDataTable* CharactersDataTable;
	
private:

	void SetData();

	void SetButtonStyle(UTexture2D* Image);
	
	UFUNCTION()
	void SetCharacterClass();

	UPROPERTY(meta = (BindWidget))
	UButton* Button_SelectCharacter;

	UPROPERTY(meta = (BindWidget))
	UTextBlock* Text_CharacterName;

	UPROPERTY(EditAnywhere)
	FDataTableRowHandle CharacterData;

	TSubclassOf<AMainCharacter> CharacterClass;
};
