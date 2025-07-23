
#include "UI/BonfireMenuWidget.h"
#include "Characters/ARPG_PlayerController.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UBonfireMenuWidget::NativeConstruct()
{
	Super::NativeConstruct();

	PlayerController = Cast<AARPG_PlayerController>(UGameplayStatics::GetPlayerController(this, 0));
	
	if (!PlayerController) return;
	
	Button_AbilitiesScreen->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::CreateAbilityUpgradeScreen);
	Button_StatsScreen->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::CreateStatsScreen);
	Button_QuitBonfire->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::RemoveBonfireMenuWidget);
	Button_MainMenu->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::LoadToMainMenu);
	Button_SaveAll->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::SaveAll);
	Button_QuickTravelMenu->OnClicked.AddDynamic(PlayerController, &AARPG_PlayerController::CreateQuickTravelMenu);
	
}