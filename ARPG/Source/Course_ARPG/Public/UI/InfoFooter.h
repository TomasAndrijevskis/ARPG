
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoFooter.generated.h"


enum EScreens : int;
class AMainCharacter_Base;
class UButton;

UCLASS()
class COURSE_ARPG_API UInfoFooter : public UUserWidget
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void InitializeFooter(const EScreens& ScreenType);

private:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Exit;

	UPROPERTY()
	AMainCharacter_Base* PlayerRef;
	
};
