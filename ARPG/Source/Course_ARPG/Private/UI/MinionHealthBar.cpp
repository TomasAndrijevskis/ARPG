
#include "UI/MinionHealthBar.h"
#include "Components/HorizontalBox.h"
#include "Components/ProgressBar.h"
#include "UI/StatusIconWithTimer.h"


void UMinionHealthBar::SetHealth(float NewHealthPercent)
{
	ProgressBar_HealthBar->SetPercent(NewHealthPercent);
}