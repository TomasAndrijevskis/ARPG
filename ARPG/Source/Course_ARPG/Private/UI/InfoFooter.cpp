
#include "UI/InfoFooter.h"
#include "Characters/Player/MainCharacter_Base.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"


void UInfoFooter::NativeConstruct()
{
	Super::NativeConstruct();
	const AMainCharacter_Base* PlayerRef = Cast<AMainCharacter_Base>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	if (!PlayerRef) return;
	Button_Exit->OnClicked.AddUniqueDynamic(PlayerRef, &AMainCharacter_Base::CreateBonfireMenu);
}