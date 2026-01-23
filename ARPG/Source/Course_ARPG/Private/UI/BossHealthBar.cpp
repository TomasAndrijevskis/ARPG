
#include "UI/BossHealthBar.h"
#include "Components/TextBlock.h"


void UBossHealthBar::SetBossName(const FText& NewBossName)
{
	Text_BossName->SetText(NewBossName);
}