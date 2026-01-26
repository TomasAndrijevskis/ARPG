
#include "UI/AbilityIconWithAmount.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/StatsComponent.h"
#include "Kismet/GameplayStatics.h"
#include "UI/PlayerWidget.h"


void UAbilityIconWithAmount::InitializeWidget(const float Amount, UTexture2D* Icon, UStatsComponent* NewStatsCompRef, const FString& NewKey, const FVector2d& IconSize)
{
	if (!NewStatsCompRef) return;
	Keyword = NewKey;
	StatsCompRef = NewStatsCompRef;
	SetValue(Amount);
	SetStatusIcon(Icon, IconSize);
	StatsCompRef->OnZeroArmorDelegate.AddUObject(this, &UAbilityIconWithAmount::RemoveWidget);
	StatsCompRef->OnArmorUpdateDelegate.AddUObject(this, &UAbilityIconWithAmount::SetValue);
}


void UAbilityIconWithAmount::RemoveWidget()
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->GetPlayerWidget()->ActiveStatusWidget.Remove(Keyword);
	StatsCompRef->OnArmorUpdateDelegate.Clear();
	Super::RemoveWidget();
}
