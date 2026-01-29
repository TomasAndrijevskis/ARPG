
#include "UI/AbilityFooter.h"
#include "Combat/Abilities/Base/AbilityComponent_Player.h"


void UAbilityFooter::SetAbility(UTexture2D* Image, const FString& ActionKey, UAbilityComponent_Player* AbilityComp)
{
	if (!AbilityComp || !Image) return;
	AbilityComp_REF = AbilityComp;
	AbilityImage = Image;
	
	AbilityComp_REF->OnAbilityStartedDelegate.AddUObject(this, &UAbilityFooter::SetImageAvailability);
	AbilityComp_REF->OnAbilityCooldownChangedDelegate.AddUObject(this, &UAbilityFooter::SetCooldownText);
	AbilityComp_REF->OnAbilityCooldownFinishedDelegate.AddUObject(this, &UAbilityFooter::SetImageAvailability);
	AbilityComp_REF->OnAbilityCooldownFinishedDelegate.AddUObject(this, &UAbilityFooter::RemoveCooldownText);
	
	Text_ActionKey->SetText(FText::FromString(ActionKey));
	Text_CooldownValue->SetText(FText::FromString(""));

	SetImageStyle();
	SetImageAvailability();
}


void UAbilityFooter::SetImageStyle()
{
	FSlateBrush ImageStyle;
	ImageStyle.SetResourceObject(AbilityImage);
	ImageStyle.SetImageSize(FVector2d(50,50));
	Image_AbilityIcon->SetBrush(ImageStyle);
}


void UAbilityFooter::SetImageAvailability()
{
	if (AbilityComp_REF->IsOnCooldown() || AbilityComp_REF->IsAbilityActive())
		Image_AbilityIcon->SetColorAndOpacity(FLinearColor(1,1,1,.3));
	else
		Image_AbilityIcon->SetColorAndOpacity(FLinearColor(1,1,1,1));
}


void UAbilityFooter::SetCooldownText(const float TimeLeft)
{
	Text_CooldownValue->SetText(FText::AsNumber(TimeLeft));
}


void UAbilityFooter::RemoveCooldownText()
{
	Text_CooldownValue->SetText(FText::FromString(""));
}