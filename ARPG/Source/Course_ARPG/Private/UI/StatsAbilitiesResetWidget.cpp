
#include "UI/StatsAbilitiesResetWidget.h"
#include "Characters/Player/ARPG_PlayerController.h"
#include "Characters/Player/MainCharacter_Base.h"
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
	if (AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0)))
		PlayerRef->ResetAbilities();
}


void UStatsAbilitiesResetWidget::HandleResetStats()
{
	if (AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(),0)))
		PlayerRef->ResetStats();
}


void UStatsAbilitiesResetWidget::RemoveWidget()
{
	this->RemoveFromParent();
}
