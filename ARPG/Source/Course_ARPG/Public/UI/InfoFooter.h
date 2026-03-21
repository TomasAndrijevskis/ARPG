
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "InfoFooter.generated.h"


class UMenuButtonBase;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UInfoFooter : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_Close;

protected:

	virtual void NativeConstruct() override;
};
