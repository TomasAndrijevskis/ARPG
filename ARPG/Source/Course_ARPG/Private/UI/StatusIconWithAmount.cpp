
#include "UI/StatusIconWithAmount.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerWidget.h"


void UStatusIconWithAmount::InitializeWidget(const float Amount, UTexture2D* Image, UStatsComponent* NewStatsCompRef, const FString& NewKey, const FVector2d& ImageSize)
{
	if (!NewStatsCompRef) return;
	Keyword = NewKey;
	StatsCompRef = NewStatsCompRef;
	SetValue(Amount);
	SetStatusIcon(Image, ImageSize);
	StatsCompRef->OnZeroArmorDelegate.AddUObject(this, &UStatusIconWithAmount::RemoveWidget);
	StatsCompRef->OnArmorUpdateDelegate.AddUObject(this, &UStatusIconWithAmount::SetValue);
}


void UStatusIconWithAmount::RemoveWidget()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->GetPlayerWidget()->ActiveStatusWidget.Remove(Keyword);
	StatsCompRef->OnArmorUpdateDelegate.Clear();
	Super::RemoveWidget();
}
