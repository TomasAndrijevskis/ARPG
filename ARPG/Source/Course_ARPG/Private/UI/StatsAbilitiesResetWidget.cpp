
#include "UI/StatsAbilitiesResetWidget.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/ConfirmationWindow.h"


void UStatsAbilitiesResetWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AARPG_PlayerController* PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	if (!PlayerController) return;
	Button_Close->OnClicked.AddUniqueDynamic(this, &UStatsAbilitiesResetWidget::RemoveWidget);
	Button_Close->OnClicked.AddUniqueDynamic(PlayerController, &AARPG_PlayerController::HandleResetMenuQuit);
	Button_ResetAbilities->OnClicked.AddUniqueDynamic(this, &UStatsAbilitiesResetWidget::OnResetAbilitiesClicked);
	Button_ResetStats->OnClicked.AddUniqueDynamic(this, &UStatsAbilitiesResetWidget::OnResetStatsClicked);
}



void UStatsAbilitiesResetWidget::OnResetAbilitiesClicked()
{
	CurrentChoice = EResetType::ResetAbilities;
	CreateConfirmationWindow();
}


void UStatsAbilitiesResetWidget::OnResetStatsClicked()
{
	CurrentChoice = EResetType::ResetStats;
	CreateConfirmationWindow();
}


void UStatsAbilitiesResetWidget::CreateConfirmationWindow()
{
	if (!ConfirmationWindowClass) return;
	UConfirmationWindow* ConfirmationWindow = Cast<UConfirmationWindow>(CreateWidget(this, ConfirmationWindowClass));
	if (!ConfirmationWindow) return;
	ConfirmationWindow->AddToViewport(7);
	ConfirmationWindow->OnConfirmedDelegate.AddUObject(this, &UStatsAbilitiesResetWidget::OnConfirmed);
}


void UStatsAbilitiesResetWidget::OnConfirmed()
{
	switch (CurrentChoice)
	{
	case EResetType::ResetAbilities:
		HandleResetAbilities();
		break;
	case EResetType::ResetStats:
		HandleResetStats();
		break;
	}
}


void UStatsAbilitiesResetWidget::HandleResetAbilities()
{
	UE_LOG(LogTemp, Warning, TEXT("HandleResetAbilities"));
}


void UStatsAbilitiesResetWidget::HandleResetStats()
{
	UE_LOG(LogTemp, Warning, TEXT("HandleResetStats"));
}


void UStatsAbilitiesResetWidget::RemoveWidget()
{
	this->RemoveFromParent();
}
