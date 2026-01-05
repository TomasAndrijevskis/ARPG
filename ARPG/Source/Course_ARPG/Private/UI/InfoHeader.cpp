
#include "UI/InfoHeader.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/LevelingComponent.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UInfoHeader::InitializeInfoHeader(const int Value)
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	PlayerRef->LevelComp->OnStatPointsUpdateDelegate.AddDynamic(this, &UInfoHeader::UpdateStatValue);
	PlayerRef->LevelComp->OnAbilityPointsUpdateDelegate.AddDynamic(this, &UInfoHeader::UpdateStatValue);
	SetPointsAmount(Value);
}


void UInfoHeader::UpdateStatValue(const int NewValue)
{
	SetPointsAmount(NewValue);
}


void UInfoHeader::UpdateAbilityPoints(const int NewValue)
{
	SetPointsAmount(NewValue);
}


void UInfoHeader::SetPointsAmount(const int NewAmount)
{
	Text_PointsValue->SetText(FText::AsNumber(NewAmount));
}