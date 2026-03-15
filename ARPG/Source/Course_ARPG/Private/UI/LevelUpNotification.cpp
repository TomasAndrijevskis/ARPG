
#include "UI/LevelUpNotification.h"
#include "Components/TextBlock.h"


void ULevelUpNotification::NativeConstruct()
{
	Super::NativeConstruct();
	PlayAnimation(FadeIn, 0.f, 1, EUMGSequencePlayMode::Forward, 1.0f, false);
}


void ULevelUpNotification::OnAnimationFinished_Implementation(const UWidgetAnimation* Animation)
{
	Super::OnAnimationFinished_Implementation(Animation);
	RemoveWidget();
}


void ULevelUpNotification::RemoveWidget()
{
	this->RemoveFromParent();
}


void ULevelUpNotification::SetPoints(int32 AbilityPoints, int32 AttributePoints)
{
	Text_NewAbilityPoints->SetText(FText::Format(FText::FromString("+{0} Ability points"), GetAsText(AbilityPoints)));
	Text_NewAttributePoints->SetText(FText::Format(FText::FromString("+{0} Attribute points"), GetAsText(AttributePoints)));
}

FText ULevelUpNotification::GetAsText(int32 Value){return FText::FromString(FString::FromInt(Value));}