
#include "UI/InfoHeader.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/TextBlock.h"
#include "Kismet/GameplayStatics.h"


void UInfoHeader::InitializeInfoHeader(const int Value)
{
	AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	PlayerRef->OnStatPointsAmountChangedDelegate.AddUObject(this, &UInfoHeader::SetPointsAmount);
	PlayerRef->OnAbilityPointsAmountChangeDelegate.AddUObject(this, &UInfoHeader::SetPointsAmount);
	SetPointsAmount(Value);
}


void UInfoHeader::SetPointsAmount(const int NewAmount)
{
	Text_PointsValue->SetText(FText::AsNumber(NewAmount));
}