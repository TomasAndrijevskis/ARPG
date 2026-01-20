
#include "UI/StatusIconWithAmount.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Image.h"
#include "Components/PanelWidget.h"
#include "Components/StatsComponent.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerWidget.h"


void UStatusIconWithAmount::InitializeWidget(const float Amount, UTexture2D* Image, UStatsComponent* NewStatsCompRef, const FString& NewKey, const FVector2d& ImageSize)
{
	if (!NewStatsCompRef) return;
	Keyword = NewKey;
	StatsCompRef = NewStatsCompRef;
	SetAmount(Amount);
	SetStatusIcon(Image, ImageSize);
	StatsCompRef->OnZeroArmorDelegate.AddUObject(this, &UStatusIconWithAmount::RemoveWidget);
	StatsCompRef->OnArmorUpdateDelegate.AddUObject(this, &UStatusIconWithAmount::SetAmount);
}


void UStatusIconWithAmount::SetAmount(const float AmountLeft)
{
	Text_Amount->SetText(FText::AsNumber(AmountLeft));
}


void UStatusIconWithAmount::SetStatusIcon(UTexture2D* Icon, const FVector2d& ImageSize)
{
	FSlateBrush ImageStyle;
	ImageStyle.SetResourceObject(Icon);
	ImageStyle.SetImageSize(ImageSize);
	Image_StatusIcon->SetBrush(ImageStyle);
}


void UStatusIconWithAmount::RemoveWidget()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->GetPlayerWidget()->ActiveStatusWidget.Remove(Keyword);
	StatsCompRef->OnArmorUpdateDelegate.Clear();
	if (this->GetParent()) this->GetParent()->RemoveChild(this);
}
