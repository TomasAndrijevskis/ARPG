
#include "UI/EnemyHealthBar.h"
#include "Components/ProgressBar.h"


void UEnemyHealthBar::SetHealth(const float NewHealthPercent)
{
	ProgressBar_HealthBar->SetPercent(NewHealthPercent);
}
