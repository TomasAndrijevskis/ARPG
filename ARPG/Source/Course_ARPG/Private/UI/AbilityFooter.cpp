
#include "UI/AbilityFooter.h"
#include "Combat/Abilities/AbilityComponent_Base.h"

void UAbilityFooter::SetAbility(UTexture2D* Image,  FString ActionKey, UAbilityComponent_Base* AbilityComp)
{
	if (!AbilityComp || !Image)
	{
		return;
	}
	AbilityComp_REF = AbilityComp;
	AbilityImage = Image;
	
	AbilityComp_REF->OnAbilityStartedDelegate.AddDynamic(this, &UAbilityFooter::SetImageAvailability);
	AbilityComp_REF->OnAbilityCooldownChangedDelegate.AddDynamic(this, &UAbilityFooter::SetCooldownText);
	AbilityComp_REF->OnAbilityCooldownFinishedDelegate.AddDynamic(this, &UAbilityFooter::SetImageAvailability);
	AbilityComp_REF->OnAbilityCooldownFinishedDelegate.AddDynamic(this, &UAbilityFooter::RemoveCooldownText);
	
	Text_ActionKey->SetText(FText::FromString(ActionKey));
	Text_CooldownValue->SetText(FText::FromString(""));

	SetImageStyle();
	SetImageAvailability();
}


void UAbilityFooter::SetImageStyle()
{
	FSlateBrush ImageStyle;
	ImageStyle.SetResourceObject(AbilityImage);
	ImageStyle.SetImageSize(FVector2d(100,100));
	Image_AbilityIcon->SetBrush(ImageStyle);
	
}


void UAbilityFooter::SetImageAvailability()
{
	if (AbilityComp_REF->IsOnCooldown() || AbilityComp_REF->IsAbilityActive())
	{
		Image_AbilityIcon->SetColorAndOpacity(FLinearColor(1,1,1,.3));
		UE_LOG(LogTemp, Error, TEXT("Hello"));
	}
	else
	{
		Image_AbilityIcon->SetColorAndOpacity(FLinearColor(1,1,1,1));
		UE_LOG(LogTemp, Error, TEXT("Not Hello"));
	}
}


void UAbilityFooter::SetCooldownText(float TimeLeft)
{
	Text_CooldownValue->SetText(FText::AsNumber(TimeLeft));
}


void UAbilityFooter::RemoveCooldownText()
{
	Text_CooldownValue->SetText(FText::FromString(""));
}
