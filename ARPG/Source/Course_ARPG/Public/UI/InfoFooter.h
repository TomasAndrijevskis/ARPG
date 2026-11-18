
#pragma once

#include "CoreMinimal.h"
#include "BaseClass/UserWidget_Base.h"
#include "InfoFooter.generated.h"


class UMenuButtonBase;
class AMainCharacter_Base;

UCLASS()
class COURSE_ARPG_API UInfoFooter : public UUserWidget_Base
{
	GENERATED_BODY()

public:

	
protected:

	virtual void NativeConstruct() override;

private:

	UPROPERTY(meta = (BindWidget))
	UMenuButtonBase* Button_Close;

};
