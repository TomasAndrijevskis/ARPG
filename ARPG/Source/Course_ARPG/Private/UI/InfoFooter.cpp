
#include "UI/InfoFooter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "UI/EScreens.h"
#include "UI/PlayerWidget.h"


void UInfoFooter::InitializeFooter(const EScreens& ScreenType)
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	Button_Exit->OnClicked.Clear();

	switch (ScreenType)
	{
		case AbilitiesScreen:
			Button_Exit->OnClicked.AddDynamic(PlayerRef->GetPlayerWidget(), &UPlayerWidget::RemoveAbilityUpgradeScreen);
			break;
		case StatsScreen:
			Button_Exit->OnClicked.AddDynamic(PlayerRef->GetPlayerWidget(), &UPlayerWidget::RemoveStatsScreen);
			break;
	}
}
