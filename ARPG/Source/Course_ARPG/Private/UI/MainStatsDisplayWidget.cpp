
#include "UI/MainStatsDisplayWidget.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Data/PersistentData/PlayerMainStatsData.h"
#include "Kismet/GameplayStatics.h"


void UMainStatsDisplayWidget::NativeConstruct()
{
	Super::NativeConstruct();
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (!PlayerRef) return;
	PlayerRef->FillMainStatsDisplayData(Data);
	SetText();
}


void UMainStatsDisplayWidget::SetText()
{
	Text_Health->SetText(GetAsText(Data.Health, Data.MaxHealth));
	Text_Mana->SetText(GetAsText(Data.Mana, Data.MaxMana));
	Text_Stamina->SetText(GetAsText(Data.Stamina, Data.MaxStamina));
}


FText UMainStatsDisplayWidget::GetAsText(float Value, float MaxValue){return FText::FromString(FString::SanitizeFloat(Value) + " / " + FString::SanitizeFloat(MaxValue));}