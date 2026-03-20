

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Data/PlayerCharactersData.h"
#include "CharacterSelection.generated.h"


class UMenuButtonBase;
class UCharacterSelect;

DECLARE_MULTICAST_DELEGATE(FOnIndexChanged);
UCLASS()
class COURSE_ARPG_API UCharacterSelection : public UUserWidget
{
	GENERATED_BODY()

public:

	FOnIndexChanged OnIndexChangedDelegate;
	
protected:

	virtual void NativeConstruct() override;
	
private:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Left;

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Right;

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_ExitToSaveSelectionMenu;
	
	UFUNCTION()
	void DecreaseIndex();

	UFUNCTION()
	void IncreaseIndex();
	
	void SetPlayerControllerProperties();

	void CreateCharacterSelectWidget();

	FCharacterSelectionData* GetCharacterData(int CharacterIndex) const;

	int GetAmountOfCharacters() const;

	void OnIndexChanged();

	UFUNCTION()
	void ExitToSaveSelectionMenu();
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCharacterSelect> CharacterWidgetClass;

	UPROPERTY()
	UCharacterSelect* CharacterWidgetRef;

	UPROPERTY(EditDefaultsOnly)
	UPlayerCharactersData* CharacterDataAsset;
	
	int Index = 0;

	int AmountOfCharacters = 0;
};