
#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MenuButtonBase.generated.h"


class UTextBlock;
class UButton;

UCLASS()
class COURSE_ARPG_API UMenuButtonBase : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(meta = (BindWidget))
	UButton* Button;
	
	virtual void NativePreConstruct() override;

	void ChangeText(const FString& NewText);

	void ChangeText(const FText& NewText);
	
	UPROPERTY(EditAnywhere)
	FText ButtonText;
	
private:
	
	UPROPERTY(meta = (BindWidget))
	UTextBlock* TextBlock;

	void SetText();
};
