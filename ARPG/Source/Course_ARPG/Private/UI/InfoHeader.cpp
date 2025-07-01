
#include "UI/InfoHeader.h"

#include "Characters/LevelingComponent.h"
#include "Characters/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"

void UInfoHeader::InitializeInfoHeader(int Value)
{
	PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef)
	{
		return;
	}

	PlayerRef->LevelComp->OnStatPointsUpdateDelegate.AddDynamic(this, &UInfoHeader::UpdateStatValue);
	PlayerRef->LevelComp->OnAbilityPointsUpdateDelegate.AddDynamic(this, &UInfoHeader::UpdateStatValue);

	SetPointsAmount(Value);
}


void UInfoHeader::UpdateStatValue(int NewValue)
{
	SetPointsAmount(NewValue);
}


void UInfoHeader::UpdateAbilityPoints(int NewValue)
{
	SetPointsAmount(NewValue);
}


void UInfoHeader::SetPointsAmount(int NewAmount)
{
	Text_PointsValue->SetText(FText::AsNumber(NewAmount));
}