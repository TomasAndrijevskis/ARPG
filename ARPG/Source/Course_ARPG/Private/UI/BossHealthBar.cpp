
#include "UI/BossHealthBar.h"
#include "Components/HorizontalBox.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "UI/StatusIconWithTimer.h"


void UBossHealthBar::SetHealth(float NewHealthPercent)
{
	ProgressBar_HealthBar->SetPercent(NewHealthPercent);
}


void UBossHealthBar::SetBossName(FText NewBossName)
{
	Text_BossName->SetText(NewBossName);
}
