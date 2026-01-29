
#include "UI/ResetWidget.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ConfirmationWindow.h"


void UResetWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (!PlayerController) return;
	Button_Close->OnClicked.AddUniqueDynamic(this, &UResetWidget::RemoveWidget);
	Button_Close->OnClicked.AddUniqueDynamic(PlayerController, &AARPG_PlayerController::HandleResetMenuQuit);
	Button_ResetAbilities->OnClicked.AddUniqueDynamic(this, &UResetWidget::OnResetAbilitiesClicked);
	Button_ResetAttributes->OnClicked.AddUniqueDynamic(this, &UResetWidget::OnResetAttributesClicked);
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
	UConfirmationWindow* ConfirmationWindow = Cast<UConfirmationWindow>(CreateWidget(this, ConfirmationWindowClass));
	if (!ConfirmationWindow) return;
	ConfirmationWindow->AddToViewport(7);
	ConfirmationWindow->OnConfirmedDelegate.AddUObject(this, &UResetWidget::OnConfirmed);
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
	this->RemoveFromParent();
}