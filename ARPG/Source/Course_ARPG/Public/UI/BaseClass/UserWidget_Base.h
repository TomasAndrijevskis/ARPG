
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidget_Base.generated.h"


class AHUD_Base;

UCLASS()
class COURSE_ARPG_API UUserWidget_Base : public UUserWidget
{
	GENERATED_BODY()
	
public:

	AHUD_Base* GetHUD() const;

	virtual void UpdateWidget() {};

	virtual void OnVisibilityChanged(ESlateVisibility Visibility){};
	
private:
	


};
