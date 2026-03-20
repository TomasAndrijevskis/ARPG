
#include "UI/ConfirmationWindow.h"
#include "Components/Button.h"
#include "UI/Buttons/MenuButtonBase.h"


void UConfirmationWindow::NativeConstruct()
{
	Super::NativeConstruct();
	Button_Confirm->Button->OnClicked.AddUniqueDynamic(this, &UConfirmationWindow::OnConfirmed);
	Button_Cancel->Button->OnClicked.AddUniqueDynamic(this, &UConfirmationWindow::OnCanceled);
	OnConfirmedDelegate.AddUObject(this, &UConfirmationWindow::RemoveWidget);
	OnCanceledDelegate.AddUObject(this, &UConfirmationWindow::RemoveWidget);
}


void UConfirmationWindow::OnConfirmed()
{
	OnConfirmedDelegate.Broadcast();
}


void UConfirmationWindow::OnCanceled()
{
	OnCanceledDelegate.Broadcast();
}


void UConfirmationWindow::RemoveWidget()
{
	this->RemoveFromParent();
}