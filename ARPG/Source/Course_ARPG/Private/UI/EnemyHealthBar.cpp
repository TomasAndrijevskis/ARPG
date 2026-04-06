
#include "UI/EnemyHealthBar.h"
#include "Components/HorizontalBox.h"
#include "Components/ProgressBar.h"
#include "UI/StatusEffectIcon.h"


void UEnemyHealthBar::SetHealth(const float NewHealthPercent)
{
	ProgressBar_HealthBar->SetPercent(NewHealthPercent);
}


void UEnemyHealthBar::CreateStatusEffectIcon(UTexture2D* Icon, UStatusEffectsComponent* StatusEffectsCompRef)
{
	if (!StatusEffectIconWidgetClass) return;
	UStatusEffectIcon* StatusEffectIconRef = Cast<UStatusEffectIcon>(CreateWidget(this, StatusEffectIconWidgetClass));
	if (!StatusEffectIconRef) return;
	StatusEffectIconRef->InitializeWidget(Icon, IconSize, StatusEffectsCompRef);
	HorizontalBox_StatusEffects->AddChild(StatusEffectIconRef);
}


void UEnemyHealthBar::SetHealthBarColor(bool IsMarked)
{
	FLinearColor InColor;
	IsMarked ? InColor = FLinearColor::Yellow : InColor = FColor::FromHex(TEXT("B70000FF"));
	ProgressBar_HealthBar->SetFillColorAndOpacity(InColor);
}