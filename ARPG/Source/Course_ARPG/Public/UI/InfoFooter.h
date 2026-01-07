
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoFooter.generated.h"


class AMainCharacter_Base;
class UButton;

UCLASS()
class COURSE_ARPG_API UInfoFooter : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	UButton* Button_Exit;

protected:

	virtual void NativeConstruct() override;
};
