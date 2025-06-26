
#include "UI/AbilityFooter.h"
#include "Combat/Abilities/AbilityComponent_Base.h"

void UAbilityFooter::SetAbility(UTexture2D* Image,  FString ActionKey, UAbilityComponent_Base* AbilityComp)
{
	if (!AbilityComp || !Image)
	{
		return;
	}
	AbilityComp_REF = AbilityComp;
	
	Text_ActionKey->SetText(FText::FromString(ActionKey));
	Text_CooldownValue->SetText(FText::FromString(""));

	SetImageStyle(Image);
}


void UAbilityFooter::SetImageStyle(UTexture2D* Image)
{
	FSlateBrush ImageStyle;
	ImageStyle.SetResourceObject(Image);
	ImageStyle.SetImageSize(FVector2d(150,150));
	Image_AbilityIcon->SetBrush(ImageStyle);
	
	if (AbilityComp_REF->GetAbilityAvailability())
	{
		Image_AbilityIcon->SetColorAndOpacity(FLinearColor(1,1,1,1));
	}
	else
	{
		Image_AbilityIcon->SetColorAndOpacity(FLinearColor(1,1,1,.3));
	}
	
}
