
#include "UI/ResetWidget.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ConfirmationWindow.h"
#include "UI/Buttons/MenuButtonBase.h"


void UResetWidget::NativeConstruct()
{
	Super::NativeConstruct();
	Button_Close->Button->OnClicked.AddUniqueDynamic(this, &UResetWidget::RemoveWidget);
	Button_ResetAbilities->Button->OnClicked.AddUniqueDynamic(this, &UResetWidget::OnResetAbilitiesClicked);
	Button_ResetAttributes->Button->OnClicked.AddUniqueDynamic(this, &UResetWidget::OnResetAttributesClicked);
}



void UResetWidget::OnResetAbilitiesClicked()
{
	CurrentChoice = EResetType::ResetAbilities;
	CreateConfirmationWindow();
}


void UResetWidget::OnResetAttributesClicked()
{
	CurrentChoice = EResetType::ResetAttributes;
	CreateConfirmationWindow();
}


void UResetWidget::CreateConfirmationWindow()
{
	if (!ConfirmationWindowClass) return;
	UConfirmationWindow* ConfirmationWindowRef = Cast<UConfirmationWindow>(CreateWidget(this, ConfirmationWindowClass));
	if (!ConfirmationWindowRef) return;
	ConfirmationWindowRef->AddToViewport(10);
	ConfirmationWindowRef->OnConfirmedDelegate.AddUObject(this, &UResetWidget::OnConfirmed);
}


void UResetWidget::OnConfirmed()
{
	switch (CurrentChoice)
	{
	case EResetType::ResetAbilities:
		HandleResetAbilities();
		break;
	case EResetType::ResetAttributes:
		HandleResetAttributes();
		break;
	}
}


void UResetWidget::HandleResetAbilities()
{
	if (AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0)))
		PlayerRef->ResetAbilities();
}


void UResetWidget::HandleResetAttributes()
{
	if (AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0)))
		PlayerRef->ResetAttributes();
}


void UResetWidget::RemoveWidget()
{
	AARPG_PlayerController* PC = Cast<AARPG_PlayerController>(GetWorld()->GetFirstPlayerController());
	if (!PC) return;
	PC->HandleResetMenuQuit();
	this->RemoveFromParent();
}