
#include "UI/StatusIconWithAmount.h"

#include "Characters/MainCharacter_Base.h"
#include "Characters/StatsComponent.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerWidget.h"


void UStatusIconWithAmount::InitializeWidget(float Amount, UTexture2D* Image, UStatsComponent* NewStatsCompRef, FString NewKey)
{
	if (!NewStatsCompRef)
	{
		return;
	}
	Keyword = NewKey;
	StatsCompRef = NewStatsCompRef;
	SetAmount(Amount);
	SetStatusIcon(Image);
	StatsCompRef->OnZeroArmorDelegate.AddDynamic(this, &UStatusIconWithAmount::RemoveWidget);
	StatsCompRef->OnArmorUpdateDelegate.AddDynamic(this, &UStatusIconWithAmount::SetAmount);
}


void UStatusIconWithAmount::SetAmount(float AmountLeft)
{
	Text_Amount->SetText(FText::AsNumber(AmountLeft));
}


void UStatusIconWithAmount::SetStatusIcon(UTexture2D* Icon)
{
	Image_StatusIcon->SetBrushFromTexture(Icon);
}


void UStatusIconWithAmount::RemoveWidget()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef)
	{
		return;
	}
	PlayerRef->GetPlayerWidget()->ActiveStatusWidget.Remove(Keyword);
	
	StatsCompRef->OnArmorUpdateDelegate.Clear();

	if (this->GetParent())
	{
		this->GetParent()->RemoveChild(this);
	}
}
