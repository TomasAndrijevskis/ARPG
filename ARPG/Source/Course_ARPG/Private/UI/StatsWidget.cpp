
#include "UI/StatsWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Data/PersistentData/PlayerStatsData.h"
#include "Kismet/GameplayStatics.h"


void UStatsWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->FillStatsDisplayData(Data);
	SetText();
}


void UStatsWidget::SetText()
{
	Text_Health->SetText(GetAsText(Data.Health, Data.MaxHealth));
	Text_Mana->SetText(GetAsText(Data.Mana, Data.MaxMana));
	Text_Stamina->SetText(GetAsText(Data.Stamina, Data.MaxStamina));
	Text_PhysicalDamage->SetText(GetAsText(Data.PhysicalStrength));
	Text_MagicalDamage->SetText(GetAsText(Data.MagicalStrength));
}


FText UStatsWidget::GetAsText(float Value, float MaxValue)
{
	const FString Text = FString::FromInt(Value) + " / " + FString::FromInt(MaxValue);
	return FText::FromString(Text);
}


FText UStatsWidget::GetAsText(float Value)
{
	return FText::FromString(FString::FromInt(Value));
}