
#include "UI/BossHealthBar.h"

#include "Components/ProgressBar.h"

void UBossHealthBar::SetHealth(float NewHealthPercent)
{
	ProgressBar_HealthBar->SetPercent(NewHealthPercent);
}
